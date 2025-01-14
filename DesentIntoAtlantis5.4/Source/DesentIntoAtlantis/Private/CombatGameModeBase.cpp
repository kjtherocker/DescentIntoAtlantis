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
#include "CombatLogSimplifiedView.h"
#include "CombatLog_Full_Data.h"
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
	
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
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
	
	InGameHUD = InGameHUD;

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
	currentTurnType            = ECharactertype::Ally;
	
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
	}
	
	pressTurnManager->SetAmountOfTurns(partyMembersInCombat.Num(),currentTurnType);
	AllyStartTurn();
	
	//GameHUD->PushView(EViews::Tutorial,    EUiType::PersistentUi);
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

void ACombatGameModeBase::AddEnemyToCombat(FEnemyEntityData AEnemyEntityData,int aPosition)
{
	if(AEnemyEntityData.characterName.IsEmpty())
	{
		return;
	}
	
	UEnemyCombatEntity* EnemyCombatEntity = NewObject<UEnemyCombatEntity>();
	
	EnemyCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactorySubsystem);
	EnemyCombatEntity->SetTacticsEvents(this);
	EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData,skillFactory,static_cast<EEnemyCombatPositions>(aPosition));
	EnemyCombatEntity->beastiaryData = enemyFactory->GetBestiaryEntry(EnemyCombatEntity->enemyEntityData.characterName);
	
	enemysInCombat.Add(EnemyCombatEntity);
}

void ACombatGameModeBase::SwitchCombatSides()
{
	currentActivePosition = 0;
	currentTurnType = currentTurnType == ECharactertype::Ally ?  ECharactertype::Enemy : ECharactertype::Ally;
	
	int numberOfTurns = currentTurnType == ECharactertype::Ally
	? partyMembersInCombat.Num()
	: enemysInCombat.Num();
	
	pressTurnManager->SetAmountOfTurns(numberOfTurns,currentTurnType);
	InGameHUD->PopAllActiveViews();

	if(currentTurnType == ECharactertype::Ally)
	{
		AllyStartTurn();
	}
	if(currentTurnType == ECharactertype::Enemy)
	{
		EnemyStartTurn();
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

void ACombatGameModeBase::TurnFinished()
{
	if(currentTurnType == ECharactertype::Ally)
	{
		currentActivePosition++;
		if(currentActivePosition >= partyMembersInCombat.Num())
		{
			currentActivePosition = 0;
		}

		partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,0);

		for(int i =  enemysInCombat.Num() -1 ; i >= 0;i--)
		{
			if(enemysInCombat[i]->GetIsMarkedForDeath())
			{
				combatExp += enemysInCombat[i]->enemyEntityData.experience;
				enemysInCombat[i]->Death();
				enemysInCombat.RemoveAt(i);
			}
		}
		
		if(enemysInCombat.Num() == 0)
		{
			EndCombat();
			return;
		}
	
		if(pressTurnManager->GetNumberOfActivePressTurns() == 0)
		{
			SwitchCombatSides();
			return;
		}
		
		currentActivePartyMember = partyMembersInCombat[currentActivePosition];
		partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
		currentActivePartyMember->StartTurn();
	
		InGameHUD->PopAllActiveViews();
		UCommandBoardView* commandBoard = (UCommandBoardView*)InGameHUD->PushAndGetView(EViews::CommandBoard,  EUiType::ActiveUi);
	}

	if(currentTurnType == ECharactertype::Enemy)
	{
		FTimerHandle handle;

		world->GetTimerManager().SetTimer(handle,this,&ACombatGameModeBase::EnemyStartTurn,ENEMY_TURN_TIME,false);
	}
}

void ACombatGameModeBase::AllyStartTurn()
{
	OnRoundEndDelegate.Broadcast();
	RemoveDeadPartyMembersFromCombat();
	
	if(partyMembersInCombat.Num() == 0)
	{
		InGameHUD->PushView(EViews::Death,    EUiType::PersistentUi);
		return;
	}
	
	currentActivePosition = 0;
	currentActivePartyMember = partyMembersInCombat[currentActivePosition];
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	currentActivePartyMember->StartTurn();
	combatCamera->shouldReturnToInitialPosition = true;
	UCommandBoardView* commandBoard = (UCommandBoardView*)InGameHUD->PushAndGetView(EViews::CommandBoard,  EUiType::ActiveUi);

}

void ACombatGameModeBase::EnemyStartTurn()
{
	InGameHUD->PopMostRecentActiveView();
	
	RemoveDeadPartyMembersFromCombat();
	if(partyMembersInCombat.Num() == 0)
	{
		InGameHUD->PushView(EViews::Death,    EUiType::PersistentUi);
		return;
	}

	for (UEnemyCombatEntity* Element : enemysInCombat)
	{
		EEnemyCombatPositions portraitPosition = Element->portraitPosition;
		Portraits[portraitPosition]->ResetPortraitRotationToDefault();
	}
	
	if(pressTurnManager->GetNumberOfActivePressTurns() == 0)
	{
		SwitchCombatSides();
		return;
	}
	
	if(currentActivePosition <= enemysInCombat.Num() -1)
	{
		EnemyActivateSkill(enemysInCombat[currentActivePosition]);
		EEnemyCombatPositions portraitPosition = enemysInCombat[currentActivePosition]->portraitPosition;
		Portraits[portraitPosition]->RotateTowardsCamera();
		combatCamera->RotateCameraToActor(Portraits[portraitPosition]);
		combatCamera->ZoomCameraInTowardsActor(Portraits[portraitPosition]);
		currentActivePosition++;
	}
	else
	{
		currentActivePosition = 0;
		EnemyActivateSkill(enemysInCombat[currentActivePosition]);
		EEnemyCombatPositions portraitPosition = enemysInCombat[currentActivePosition]->portraitPosition;
		Portraits[portraitPosition]->RotateTowardsCamera();
		combatCamera->RotateCameraToActor(Portraits[portraitPosition]);
		combatCamera->ZoomCameraInTowardsActor(Portraits[portraitPosition]);
		currentActivePosition++;
	}
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


void ACombatGameModeBase::EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity)
{
	UEnemySkillView* enemySkillView = (UEnemySkillView*)InGameHUD->PushAndGetView(EViews::EnemySkill,      EUiType::ActiveUi);

	USkillBase* skillObject = aEnemyCombatEntity->enemyBehaviour->GetSkill();
	FSkillsData skillData = skillObject->skillData;
	
	enemySkillView->SetSkill(skillData,aEnemyCombatEntity);

	int playerToAttack = aEnemyCombatEntity->enemyBehaviour->PlayerToAttack(partyMembersInCombat);

	ActivateSkill(aEnemyCombatEntity,playerToAttack,skillObject);
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
