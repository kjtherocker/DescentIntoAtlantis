// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatGameModeBase.h"

#include "EnemyBehaviour.h"
#include "EnemyCombatEntity.h"
#include "EnemySkillView.h"
#include "FloorEnum.h"
#include "LevelupView.h"
#include "PartyHealthbarsView.h"
#include "PersistentGameinstance.h"
#include "CombatGameModeBase.h"

#include "CombatCameraPawn.h"
#include "CommandBoardView.h"
#include "EnemyPortraitElement.h"
#include "ChallengeSubsystem.h"
#include "CombatEntityHub.h"
#include "CombatInterruptManager.h"
#include "CombatLogSimplifiedView.h"
#include "CombatLog_Full_Data.h"
#include "NumbersUIView.h"
#include "PlayerCombatEntity.h"
#include "SkillRange.h"
#include "SkillUsage.h"
#include "SoundManager.h"
#include "TransitionView.h"
#include "UObject/NoExportTypes.h"


void ACombatGameModeBase::InitializeLevel()
{
	Super::InitializeLevel();
	;
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;

	godManagerSubsystem = persistentGameInstance->challengeManagerSubsystem;
	passiveSkillFactorySubsystem = persistentGameInstance->passiveFactorySubsystem;
	
	PlayerController = GetWorld()->GetFirstPlayerController();
	combatCamera = Cast<ACombatCameraPawn>(GetWorld()->SpawnActor<AActor>(cameraReference, CAMERA_POSITION, CAMERA_ROTATION,ActorSpawnParameters));
	
	if (PlayerController->GetPawn()) // If the player controller has a pawn
	{
		PlayerController->UnPossess(); // Unpossess the current pawn
	}

	PlayerController->Possess(combatCamera); // Possess the new pawn
	combatCamera->AutoPossessPlayer = EAutoReceiveInput::Player0;
	combatCamera->PrimaryActorTick.bCanEverTick = true;
	combatCamera->PossessedBy(PlayerController);
	combatCamera->AutoPossessPlayer = EAutoReceiveInput::Player0;
	
	pressTurnManager = NewObject<UPressTurnManager>();
	pressTurnManager->Initialize(this);

	combatInterruptHandler = NewObject<UCombatInterruptManager>();
	
	FCombatArenaData arenaData = persistentGameInstance->ConsumeArenaDataFlag();
	persistentGameInstance->EventManagerSubSystem->SetCombatGameMode(this);
	
	portraitsLocations.Add(EEnemyCombatPositions::Left  ,ENEMY_POSITION1);
	portraitsLocations.Add(EEnemyCombatPositions::Middle,ENEMY_POSITION2);
	portraitsLocations.Add(EEnemyCombatPositions::Right ,ENEMY_POSITION3);
	
	StartCombat(arenaData.enemyGroupName);


	UTransitionView* transitionView =
		(UTransitionView* )InGameHUD->PushAndGetView(EViews::TransitionView,EUiType::PersistentUi);

	transitionView->StartExitTransition();
}

void ACombatGameModeBase::StartCombat(FString aEnemyGroupName)
{
	if(hasCombatStarted)
	{
		return;
	}
	
	soundManager->PlayAudio(EAudioSources::CombatMusic,EAudio::Combat);

	soundManager->SetAudioPauseState(EAudioSources::CombatSoundEffect,false);
	soundManager->SetAudioPauseState(EAudioSources::CombatMusic,false);
	
	soundManager->SetAudioPauseState(EAudioSources::OverworldMusic,true);
	soundManager->SetAudioPauseState(EAudioSources::OverworldSoundEffect,true);
	
	hasCombatStarted = true;
	combatInterruptHandler     = NewObject<UCombatInterruptManager>();
	combatInterruptHandler->InitializeCombatInterruptHandler(this);
	partyMembersInCombat       = partyManager->ReturnActiveParty();

	for(int i = 0 ; i < partyMembersInCombat.Num();i++)
	{
		partyMembersInCombat[i]->SetTacticsEvents(this);
	}

	if(partyMembersInCombat.Num() == 0)
	{
		partyManager->AddPlayerToActiveParty(EPartyMembers::Kriede);
		partyManager->AddPlayerToActiveParty(EPartyMembers::Feienne);
		partyManager->AddPlayerToActiveParty(EPartyMembers::Rain);
		partyManager->AddPlayerToActiveParty(EPartyMembers::Gram);
		partyMembersInCombat       = partyManager->ReturnActiveParty();
	}
	  
	currentActivePartyMember   = partyMembersInCombat[0];
	CharacterTypeTurn            = ECharactertype::Ally;
	
	TArray<FString> EnemyNames = enemyFactory->ReturnEnemyGroupData(aEnemyGroupName);
		
	for(int i = 0 ; i < EnemyNames.Num();i++)
	{
		AddEnemyToCombat(enemyFactory->FEnemyEntityDataReturnEnemyEntityData(EnemyNames[i]),i);
	}
	
	if(InGameHUD)
	{
		CreateEnemyPortraits();

		//hud->PushView(EViews::Dialogue,  EUiType::PersistentUi);
		//InGameHUD->PushView(EViews::CombatBackground,  EUiType::PersistentUi);
		//UEnemyPortraits* enemyPortraits = (UEnemyPortraits*)InGameHUD->PushAndGetView(EViews::EnemyPortraits,    EUiType::PersistentUi);
		//enemyPortraits->InitializePortraits(this);
		combatLogView  = (UCombatLogSimplifiedView*)InGameHUD->PushAndGetView(EViews::CombatLogSimplified,         EUiType::PersistentUi);
		turnCounter     = (UTurnCounterView*)InGameHUD->PushAndGetView(EViews::TurnCounter,         EUiType::PersistentUi);
		partyHealthbars = (UPartyHealthbarsView*)InGameHUD->PushAndGetView(EViews::Healthbars,  EUiType::PersistentUi);
		NumbersUIView = (UNumbersUIView*)InGameHUD->PushAndGetView(EViews::NumbersUIView,  EUiType::PersistentUi);
		NumbersUIView->InitializePlayerController(PlayerController);
		NumbersUIView->SubscribeAllCombatEntitysToView(GetPlayersInCombat(),GetEnemysInCombat());
	}
	
	hasCombatStarted = false;
	combatInterruptHandler->SetAllInterruptHandlers(GetPlayersInCombat(),GetEnemysInCombat());
	combatInterruptHandler->CheckGenericTriggerInerrptions(EGenericTrigger::InitialCombatStart);
	if( combatInterruptHandler->HasInterruptions())
	{
		SetCombatState(ECombatState::Interruption);
	}
	else
	{
		SetCombatState(ECombatState::Start);
	}
}

void ACombatGameModeBase::AddEnemyToCombat(FEnemyEntityData AEnemyEntityData,int aPosition)
{
	if(AEnemyEntityData.characterName.IsEmpty())
	{
		return;
	}
	
	UEnemyCombatEntity* EnemyCombatEntity = NewObject<UEnemyCombatEntity>();
	
	EnemyCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactorySubsystem,persistentGameInstance);
	EnemyCombatEntity->SetTacticsEvents(this);
	EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData,skillFactory,static_cast<EEnemyCombatPositions>(aPosition));
	EnemyCombatEntity->beastiaryData = enemyFactory->GetBestiaryEntry(EnemyCombatEntity->enemyEntityData.characterName);
	
	enemysInCombat.Add(EnemyCombatEntity);
}

void ACombatGameModeBase::CreateEnemyPortraits()
{
	for(int i = 0 ; i < enemysInCombat.Num();i++)
	{
		EEnemyCombatPositions enemyCombatPosition = enemysInCombat[i]->portraitPosition;
		
		AEnemyPortraitElement* portrait =
		Cast<AEnemyPortraitElement>(GetWorld()->SpawnActor<AActor>
			(enemyPortraitElementReference, portraitsLocations[enemyCombatPosition], UCombatSettings::ENEMY_ROTATION));
		portrait->SetCombatEntity(enemysInCombat[i]);
		Portraits.Add(enemyCombatPosition,portrait);
	}
}

void ACombatGameModeBase::SetCombatState(ECombatState aCombatState)
{
	currentCombatState = aCombatState;
	
	switch (aCombatState)
	{
	case ECombatState::None:
		break;
	case ECombatState::Start:
		hasCombatStarted = true;
		SetRoundSide(ECharactertype::Ally);
		break;
	case ECombatState::Player:
		AllyStartTurn();
		break;
	case ECombatState::Enemy:
		EnemyStartTurn();
		break;
	case ECombatState::SwitchState:
		SwitchCombatSides();
		break;
	case ECombatState::Interruption:
		InGameHUD->PopAllActiveViews();
		combatInterruptHandler->StartTriggeringInterruptions();
		break;
	case ECombatState::SuccessfulEnd:
		EndCombat();
		break;
	case ECombatState::FailedEnd:
		InGameHUD->PushView(EViews::Death,    EUiType::PersistentUi);
		break;
	}
}

void ACombatGameModeBase::TurnEnd()
{
	combatInterruptHandler->CheckAllEntitysForInterruptions();
	
	if( combatInterruptHandler->HasInterruptions())
	{
		SetCombatState(ECombatState::Interruption);
		return;
	}

	if(!hasCombatStarted)
	{
		SetCombatState(ECombatState::Start);
		return;
	}
	
	for(int i =  enemysInCombat.Num() -1 ; i >= 0;i--)
	{
		if(enemysInCombat[i]->GetIsMarkedForDeath())
		{
			combatExp += enemysInCombat[i]->enemyEntityData.experience;
			enemysInCombat[i]->Death();
			enemysInCombat.RemoveAt(i);
		}
	}

	RemoveDeadPartyMembersFromCombat();
		
	if(enemysInCombat.Num() == 0)
	{
		SetCombatState(ECombatState::SuccessfulEnd);
		return;
	}

	if(partyMembersInCombat.Num() == 0)
	{
		SetCombatState(ECombatState::FailedEnd);
		return;
	}
	
	if(pressTurnManager->GetNumberOfActivePressTurns() == 0)
	{
		SetCombatState(ECombatState::SwitchState);
		return;
	}
	else
	{
		switch (CharacterTypeTurn)
		{
		case ECharactertype::Undefined:break;
		case ECharactertype::Ally:
			partyHealthbars->ResetAllHighlights();
			IterateToNextPlayer();
			SetCombatState(ECombatState::Player);
			break;
		case ECharactertype::Enemy:
			SetCombatState(ECombatState::Enemy);
			break;
		}
	}
	
}

void ACombatGameModeBase::TriggerTurnEndTimers()
{
	//Wait for animation and timers to end

	switch (CharacterTypeTurn)
	{
	case ECharactertype::Undefined:
		break;
	case ECharactertype::Ally:
		{
			//TurnEnd();
			FTimerHandle handle;
			world->GetTimerManager().SetTimer(handle,this,&ACombatGameModeBase::TurnEnd,1.5f,false);		
		}
		break;
	case ECharactertype::Enemy:
		{
			FTimerHandle handle;
			world->GetTimerManager().SetTimer(handle,this,&ACombatGameModeBase::TurnEnd,ENEMY_TURN_TIME,false);			
		}
		break;
	}

}

void ACombatGameModeBase::SetRoundSide(ECharactertype aCharacterType)
{
	ECharactertype previousType = CharacterTypeTurn;
	CharacterTypeTurn = aCharacterType;
	
	ECharactertype newCharacterTurnType = aCharacterType;
	
	currentActivePosition = 0;

	int numberOfTurns = newCharacterTurnType == ECharactertype::Ally
	? partyMembersInCombat.Num()
	: enemysInCombat.Num();
	
	pressTurnManager->SetAmountOfTurns(numberOfTurns,newCharacterTurnType);
	InGameHUD->PopAllActiveViews();

	switch (newCharacterTurnType)
	{
	case ECharactertype::Undefined:
		break;
	case ECharactertype::Ally:
		SetCombatState(ECombatState::Player);
		break;
	case ECharactertype::Enemy:
		SetCombatState(ECombatState::Enemy);
		break;
	}

}

void ACombatGameModeBase::AllyStartTurn()
{
	InGameHUD->PopAllActiveViews();
	OnRoundEndDelegate.Broadcast();
	
	currentActivePartyMember = partyMembersInCombat[currentActivePosition];
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	currentActivePartyMember->StartTurn();
	combatCamera->shouldReturnToInitialPosition = true;
	UCommandBoardView* commandBoard = (UCommandBoardView*)InGameHUD->PushAndGetView(EViews::CommandBoard,  EUiType::ActiveUi);

}

void ACombatGameModeBase::EnemyStartTurn()
{
	InGameHUD->PopMostRecentActiveView();
	
	for (UEnemyCombatEntity* Element : enemysInCombat)
	{
		EEnemyCombatPositions portraitPosition = Element->portraitPosition;
		Portraits[portraitPosition]->ResetPortraitRotationToDefault();
	}

	currentActivePosition = currentActivePosition <= enemysInCombat.Num() -1 ?  currentActivePosition++ : 0;
	
	EnemyActivateSkill(enemysInCombat[currentActivePosition]);
	EEnemyCombatPositions portraitPosition = enemysInCombat[currentActivePosition]->portraitPosition;
	Portraits[portraitPosition]->RotateTowardsCamera();
	combatCamera->RotateCameraToActor(Portraits[portraitPosition]);
	combatCamera->ZoomCameraInTowardsActor(Portraits[portraitPosition]);
	currentActivePosition++;
}

void ACombatGameModeBase::ActivateSkill(UCombatEntity* aAttacker, int aCursorPosition, USkillBase* aSkill)
{
	TArray<UCombatEntity*>  enemyInCombat    = TArray<UCombatEntity*>(GetEnemysInCombat());
	TArray<UCombatEntity*>  playersInCombat  = TArray<UCombatEntity*>(GetPlayersInCombat());
	
	TArray<UCombatEntity*> entitySkillsAreUsedOn;

	TArray<EPressTurnReactions> turnReactions;

	FSkillsData skillsData = aSkill->skillData;

	TArray<FCombatLog_Full_Data> mostRecentCombatLogs;
	
	if(aAttacker->characterType == ECharactertype::Ally)
	{
		entitySkillsAreUsedOn = skillsData.skillUsage == ESkillUsage::Opponents ? enemyInCombat : playersInCombat;
	}
	else if(aAttacker->characterType == ECharactertype::Enemy)
	{
		entitySkillsAreUsedOn = skillsData.skillUsage == ESkillUsage::Opponents ? playersInCombat : enemyInCombat;
	}
	
	if(skillsData.skillRange == ESkillRange::Single)
	{
		mostRecentCombatLogs.Add(aSkill->ExecuteSkill(aAttacker, entitySkillsAreUsedOn[aCursorPosition], aSkill));
	}
	else if (skillsData.skillRange == ESkillRange::Multi)
	{
		for(int i = 0 ; i <entitySkillsAreUsedOn.Num();i++)
		{
			mostRecentCombatLogs.Add(aSkill->ExecuteSkill(aAttacker, entitySkillsAreUsedOn[i], aSkill));
		}
	}

	AddCombatLog(mostRecentCombatLogs);
	
	turnReactions.Add(EPressTurnReactions::Normal);
	DamageEvent MyEvent(100,EPressTurnReactions::Normal,aSkill);
	godManagerSubsystem->DispatchEvent(&MyEvent);
	pressTurnManager->ProcessTurn(turnReactions);
}

void ACombatGameModeBase::EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity)
{
	UEnemySkillView* enemySkillView = (UEnemySkillView*)InGameHUD->PushAndGetView(EViews::EnemySkill,      EUiType::ActiveUi);

	USkillBase* skillObject = aEnemyCombatEntity->enemyBehaviour->GetSkill();
	FSkillsData skillData = skillObject->skillData;
	
	enemySkillView->SetSkill(skillData,aEnemyCombatEntity);

	int playerToAttack = aEnemyCombatEntity->enemyBehaviour->PlayerToAttack(partyMembersInCombat);

	ActivateSkill(aEnemyCombatEntity,playerToAttack,skillObject);
}

void ACombatGameModeBase::IterateToNextPlayer()
{
	currentActivePosition++;
	if(currentActivePosition >= partyMembersInCombat.Num())
	{
		currentActivePosition = 0;
	}
}

void ACombatGameModeBase::SwitchCombatSides()
{
	SetRoundSide(CharacterTypeTurn == ECharactertype::Ally ?  ECharactertype::Enemy : ECharactertype::Ally);
}



void ACombatGameModeBase::AddInterruption(UCombatInterrupt* aCombatInterrupt)
{
	combatInterruptHandler->AddCombatInterrupt(aCombatInterrupt);
}

void ACombatGameModeBase::AddCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas)
{
	int numberOfNewCombatLogs = CombatLog_Base_Datas.Num();
	
	if(last50CombatLogs.Num() + numberOfNewCombatLogs > 50)
	{
		int amountOfLogsToRemove = numberOfNewCombatLogs - last50CombatLogs.Num(); 

		for(int i = 0 ; i < amountOfLogsToRemove; i++)
		{
			last50CombatLogs.RemoveAt(0);	
		}
	}

	for (auto fullCombatLogData : CombatLog_Base_Datas)
	{
		last50CombatLogs.Add(fullCombatLogData);
		combatLogView->CreateCombatLog( fullCombatLogData);
	}
	
	
}

void ACombatGameModeBase::EndCombat(bool aHasWon)
{
	hasCombatStarted = false;
	
	InGameHUD->PopAllPersistantViews();
	InGameHUD->PopAllActiveViews();

	for(int i =  enemysInCombat.Num() -1 ; i >= 0;i--)
	{
		enemysInCombat.RemoveAt(i);
	}
	
	partyManager->RemoveAllCombatTokensFromParty();
	partyManager->ResetActivePartyToDefaultState();
	
	enemyFactory->BestiaryDataHasChangedBroadcast();	
	if(aHasWon)
	{
		TriggerLevelupMenu(partyMembersInCombat, GetEXP());
	}
	else
	{
		floorEventManager->EventNotCompleted();
	}
	
	soundManager->SetAudioPauseState(EAudioSources::CombatSoundEffect,true);
	soundManager->SetAudioPauseState(EAudioSources::CombatMusic,true);
	soundManager->PlayAudio(EAudioSources::OverworldMusic,EAudio::Overword);
	soundManager->SetAudioPauseState(EAudioSources::OverworldSoundEffect,false);
	soundManager->SetAudioPauseState(EAudioSources::OverworldMusic,false);
}


void ACombatGameModeBase::TriggerLevelupMenu(TArray<UPlayerCombatEntity*> aPlayerCombatEntity, int aExperience)
{
	TArray<UPlayerCombatEntity*> combatEntitysToLevelup= aPlayerCombatEntity;

	int previousPartyLevel = partyManager->GetPartyLevel();
	partyManager->AddPartyExperience(aExperience);
	int newPartyLevel = partyManager->GetPartyLevel();
	
	if(newPartyLevel > previousPartyLevel)
	{
		ULevelupView * levelUpView = (ULevelupView*)InGameHUD->PushAndGetView(EViews::Levelup,    EUiType::ActiveUi);
		levelUpView->InitializeCombatEntitysToLevelUp(newPartyLevel,combatEntitysToLevelup,triggerNextEventStage,EFloorEventStates::PostCombatLevelSwap);
	}
	else
	{
		persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
		persistentGameInstance->EventManagerSubSystem->TriggerNextFloorEventStep(EFloorEventStates::PostCombatLevelSwap);
		persistentGameInstance->LoadPreviousLevel();
	}
}


int ACombatGameModeBase::GetEXP()
{
	return combatExp;
}

UPlayerCombatEntity* ACombatGameModeBase::GetCurrentActivePartyMember()
{
	return currentActivePartyMember;
}

TArray<UEnemyCombatEntity*> ACombatGameModeBase::GetEnemysInCombat()
{
	return enemysInCombat;
}

TArray<UPlayerCombatEntity*> ACombatGameModeBase::GetPlayersInCombat()
{
	return partyMembersInCombat;
}

void ACombatGameModeBase::RemoveDeadPartyMembersFromCombat()
{
	for(int i =  partyMembersInCombat.Num() -1 ; i >= 0;i--)
	{
		if(partyMembersInCombat[i]->GetIsMarkedForDeath())
		{
			partyMembersInCombat[i]->Death();
			partyMembersInCombat.RemoveAt(i);
		}
	}
}