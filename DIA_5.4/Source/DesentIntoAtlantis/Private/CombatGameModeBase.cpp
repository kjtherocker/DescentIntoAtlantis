// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatGameModeBase.h"

#include "EnemyBehaviour.h"
#include "EnemyCombatEntity.h"
#include "EnemySkillView.h"
#include "FloorEnum.h"
#include "LevelupView.h"
#include "PartyHealthbarsView.h"
#include "PersistentGameinstance.h"


#include "CombatCameraPawn.h"
#include "CommandBoardView.h"
#include "EnemyPortraitElement.h"
#include "ChallengeSubsystem.h"
#include "CombatEntityHub.h"
#include "CombatInterruptManager.h"
#include "CombatLogSimplifiedView.h"
#include "CombatLog_Full_Data.h"

#include "NumbersUIView.h"
#include "PartyManagerSubsystem.h"
#include "PlayerCombatEntity.h"

#include "SoundManager.h"
#include "TransitionView.h"
#include "UObject/NoExportTypes.h"


ACombatGameModeBase::ACombatGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void ACombatGameModeBase::InitializeLevel()
{
	Super::InitializeLevel();
	
	godManagerSubsystem          = persistentGameInstance->challengeManagerSubsystem;
	passiveSkillFactorySubsystem = persistentGameInstance->passiveFactorySubsystem;
	SkillResolveSubsystem        = persistentGameInstance->SkillResolveSubsystem;
	FCombatArenaData arenaData   = persistentGameInstance->ConsumeArenaDataFlag();
	
	CombatWinCondition           = arenaData.CombatWinCondition;
	
	pressTurnManager             = NewObject<UPressTurnManager>();
	combatInterruptManager       = NewObject<UCombatInterruptManager>();
	
	pressTurnManager->Initialize(this);

	//Needs to Be First
	combatInterruptManager->SetGameModeBase(persistentGameInstance,this);
	//Requires Combat Interrupt To Be Set
	persistentGameInstance->SkillResolveSubsystem->SetGameModeBase(this,combatInterruptManager);
	persistentGameInstance->popupSubsystem->SetGameMode(this);
	persistentGameInstance->EventManagerSubSystem->SetCombatGameMode(this);
	
	portraitsLocations.Add(EEnemyCombatPositions::Left  ,ENEMY_POSITION1);
	portraitsLocations.Add(EEnemyCombatPositions::Middle,ENEMY_POSITION2);
	portraitsLocations.Add(EEnemyCombatPositions::Right ,ENEMY_POSITION3);
	
	PossessCombatCamera();
	
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

	FString enemyGroupName = aEnemyGroupName;
	
	soundManager->PlayAudio(EAudioSources::CombatMusic,EAudio::Combat);

	soundManager->SetAudioPauseState(EAudioSources::CombatSoundEffect,false);
	soundManager->SetAudioPauseState(EAudioSources::CombatMusic,false);
	
	soundManager->SetAudioPauseState(EAudioSources::OverworldMusic,true);
	soundManager->SetAudioPauseState(EAudioSources::OverworldSoundEffect,true);
	
	hasCombatStarted = true;
	
	partyManager->ResurrectedPartyMember.AddDynamic(this,&ACombatGameModeBase::ResurrectEntity);


	for (auto PlayerCombatEntity : partyManager->ReturnActiveParty())
	{
		if(PlayerCombatEntity == nullptr)
		{
			continue;
		}
		PlayerCombatEntity->combatEntityHub->OnCombatStart(this);
		partyMembersInCombat.Add(PlayerCombatEntity);
		PlayerCombatEntity->SetTacticsEvents(this);
	}
	

	if(partyMembersInCombat.Num() == 0)
	{
		partyManager->SetPartyLevel(partyManager->DefaultTestFightData[0].PartyLevel);
		partyManager->CreateTestParty();

		for (auto PlayerCombatEntity : partyManager->ReturnActiveParty())
		{
			if(PlayerCombatEntity == nullptr)
			{
				continue;
			}
			PlayerCombatEntity->combatEntityHub->OnCombatStart(this);
			partyMembersInCombat.Add(PlayerCombatEntity);
			PlayerCombatEntity->SetTacticsEvents(this);
		}
	
		enemyGroupName             = partyManager->DefaultTestFightData[0].EnemyGroupID;
	}
	  
	currentActivePartyMember   = partyMembersInCombat[0];
	CharacterTypeTurn            = ECharactertype::Ally;
	
	FEnemyGroupData EnemyNames = enemyFactory->ReturnEnemyGroupData(enemyGroupName);

	for (auto EnemyRowData : EnemyNames.Rows)
	{
		if(EnemyRowData.Key == ERowType::None)
		{
			continue;
		}

		for (auto enemysInRow : EnemyRowData.Value.EnemysInRow)
		{
			AddEnemyToCombat(enemyFactory->FEnemyEntityDataReturnEnemyEntityData(enemysInRow.Value),enemysInRow.Key,EnemyRowData.Key);		
		}
	
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

	roundOrder.Add(ECharactertype::Ally);
	roundOrder.Add(ECharactertype::Enemy);

	currentRoundOrder = roundOrder;
	
	hasCombatStarted = false;
	combatInterruptManager->SetAllInterruptHandlers(GetPlayersInCombat(),GetEnemysInCombat());
	combatInterruptManager->CheckGenericTriggerInerrptions(EGenericTrigger::InitialCombatStart);
	if( combatInterruptManager->HasInterruptions())
	{
		SetCombatState(ECombatState::Interruption);
	}
	else
	{
		SetCombatState(ECombatState::Start);
	}
}

void ACombatGameModeBase::AddEnemyToCombat(FEnemyEntityCompleteData AEnemyEntityData,EEnemyCombatPositions aPosition,ERowType aRowType)
{
	
	UEnemyCombatEntity* EnemyCombatEntity = NewObject<UEnemyCombatEntity>();
	
	EnemyCombatEntity->SetCombatEntity(skillFactory,passiveSkillFactorySubsystem,persistentGameInstance);
	EnemyCombatEntity->SetTacticsEvents(this);
	EnemyCombatEntity->SetEnemyEntityData(AEnemyEntityData,skillFactory,aPosition);
	EnemyCombatEntity->SetCurrentRow(aRowType);
	EnemyCombatEntity->combatEntityHub->OnCombatStart(this);
	EnemyCombatEntity->beastiaryData = enemyFactory->GetBestiaryEntry(EnemyCombatEntity->enemyEntityCompleteData.EnemyLabelID);
	
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

	
	switch (aCombatState)
	{
	case ECombatState::None:
		break;
	case ECombatState::Start:
		{
			hasCombatStarted = true;
			ECharactertype Charactertype = RemoveAndGetFirstInRoundOrder();
			SetRoundSide(Charactertype);
		}
		break;
	case ECombatState::Player:
		AllyStartTurn();
		break;
	case ECombatState::Enemy:
		EnemyStartTurn();
		break;
	case ECombatState::SwitchState:
		{
			ECharactertype switchType = RemoveAndGetFirstInRoundOrder();
			SetRoundSide(switchType);
		}
		break;
	case ECombatState::Interruption:
		InGameHUD->PopAllActiveViews();
		combatInterruptManager->StartTriggeringInterruptions();
		break;
	case ECombatState::SuccessfulEnd:
		ValidateEndingState(ECombatWinCondition::Win);
		break;
	case ECombatState::FailedEnd:
		ValidateEndingState(ECombatWinCondition::Lose);
		break;
	case ECombatState::NewRoundStart:
		StartNewRound();
		break;
	}

	currentCombatState = aCombatState;
}

void ACombatGameModeBase::StartNewRound()
{
	currentRoundOrder = roundOrder;
	OnRoundEndDelegate.Broadcast();

	ECharactertype startRoundCharacterType = RemoveAndGetFirstInRoundOrder();
	
	SetRoundSide(startRoundCharacterType);
}

void ACombatGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	combatInterruptManager->Tick(DeltaTime);
	
}

void ACombatGameModeBase::PossessCombatCamera()
{
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.Owner = this;

	
	PlayerController = GetWorld()->GetFirstPlayerController();
	combatCamera = Cast<ACombatCameraPawn>(GetWorld()->SpawnActor<AActor>(cameraReference, CAMERA_POSITION, CAMERA_ROTATION,ActorSpawnParameters));

	//Camera
	if (PlayerController->GetPawn()) // If the player controller has a pawn
	{
		PlayerController->UnPossess(); // Unpossess the current pawn
	}

	PlayerController->Possess(combatCamera); // Possess the new pawn
	combatCamera->AutoPossessPlayer = EAutoReceiveInput::Player0;
	combatCamera->PrimaryActorTick.bCanEverTick = true;
	combatCamera->PossessedBy(PlayerController);
	combatCamera->AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void ACombatGameModeBase::TurnEnd()
{
	if(combatInterruptManager->isCombatInterruptRunning())
	{
		return;
	}

	
	combatInterruptManager->CheckAllEntitysForInterruptions();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("turnEnd")));
	
	if( combatInterruptManager->HasInterruptions())
	{
		SetCombatState(ECombatState::Interruption);
		return;
	}

	if(!hasCombatStarted)
	{
		SetCombatState(ECombatState::Start);
		return;
	}

	for (auto Element : GetPlayersInCombat())
	{
		Element->ResourceHandler->ValidateLifeStatus();
	}

	for (auto Element : GetEnemysInCombat())
	{
		Element->ResourceHandler->ValidateLifeStatus();
	}

	combatInterruptManager->CheckAllEntitysForInterruptions();
	
	if( combatInterruptManager->HasInterruptions())
	{
		SetCombatState(ECombatState::Interruption);
		return;
	}
	
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
	
	ValidateNextTurn();
}

void ACombatGameModeBase::ValidateNextTurn()
{
	if(pressTurnManager->GetNumberOfActivePressTurns() == 0)
	{
		currentCombatEntity->EndTurn();	
		if(currentRoundOrder.Num() == 0)
		{
			SetCombatState(ECombatState::NewRoundStart);
		}
		else
		{
			SetCombatState(ECombatState::SwitchState);		
		}
	
		return;
	}
	else
	{
		switch (CharacterTypeTurn)
		{
		case ECharactertype::Undefined:break;
		case ECharactertype::Ally:
			IterateToNextPlayer();
			currentCombatEntity->EndTurn();	
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
		{
			FTimerHandle handle;
			world->GetTimerManager().SetTimer(handle,this,&ACombatGameModeBase::TurnEnd,1.0f,false);
		}
			break;
	case ECharactertype::Ally:
		{
			//TurnEnd();
			FTimerHandle handle;
			world->GetTimerManager().SetTimer(handle,this,&ACombatGameModeBase::TurnEnd,1.0f,false);		
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
	ResetEnemyPortraits();
	ECharactertype previousType = CharacterTypeTurn;
	OnTeamTurnFinished.Broadcast(previousType);
	
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

	partyHealthbars->ResetAllHighlights();
	
	currentActivePartyMember = partyMembersInCombat[currentActivePosition];
	partyHealthbars->SetHighlightHealthbar(currentActivePartyMember,FULL_OPACITY);
	combatCamera->shouldReturnToInitialPosition = true;

	if(currentActivePartyMember->combatEntityHub->DoesEntityHaveATurn())
	{
		currentActivePartyMember->StartTurn();
		UCommandBoardView* commandBoard = (UCommandBoardView*)InGameHUD->PushAndGetView(EViews::CommandBoard,  EUiType::ActiveUi);	
	}
	else
	{
		currentActivePartyMember->StartTurn();
		TArray<EPressTurnReactions> aAllTurnReactions;
		aAllTurnReactions.Add(EPressTurnReactions::Normal);
		pressTurnManager->ProcessTurn(aAllTurnReactions);
	}

	currentCombatEntity = currentActivePartyMember;
	

}

void ACombatGameModeBase::EntityDied(UCombatEntity* aCombatEntity)
{
	if (UPlayerCombatEntity* PlayerCombatEntity = Cast<UPlayerCombatEntity>(aCombatEntity))
	{
		for(int i =  partyMembersInCombat.Num() -1 ; i >= 0;i--)
		{
			if(partyMembersInCombat[i] != aCombatEntity)
			{
				continue;
			}
			
			partyMembersInCombat.RemoveAt(i);
		}
	}
	
	if (UEnemyCombatEntity* EnemyCombatEntity = Cast<UEnemyCombatEntity>(aCombatEntity))
	{
		for(int i =  enemysInCombat.Num() -1 ; i >= 0;i--)
		{
			if(enemysInCombat[i]->GetIsMarkedForDeath())
			{
				combatExp += enemysInCombat[i]->GetExperience();
				gainedCP  +=  enemysInCombat[i]->GetClassPoints();
				enemysInCombat.RemoveAt(i);
			}
		}
	}

}

void ACombatGameModeBase::ResurrectEntity(UCombatEntity* aCombatEntity)
{
	if (UPlayerCombatEntity* PlayerCombatEntity = Cast<UPlayerCombatEntity>(aCombatEntity))
	{
		if(partyMembersInCombat.Contains(PlayerCombatEntity))
		{
			return;
		}
		partyMembersInCombat.Add(PlayerCombatEntity);
	}
	
	if (UEnemyCombatEntity* EnemyCombatEntity = Cast<UEnemyCombatEntity>(aCombatEntity))
	{
		enemysInCombat.Add(EnemyCombatEntity);
	}

}

void ACombatGameModeBase::EnemyStartTurn()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("EnemyStartTurn")));
	InGameHUD->PopMostRecentActiveView();
	
	ResetEnemyPortraits();

	currentActivePosition = currentActivePosition <= enemysInCombat.Num() -1 ?  currentActivePosition++ : 0;

	UEnemyCombatEntity* currentEnemy = enemysInCombat[currentActivePosition];
	currentEnemy->StartTurn();

	currentCombatEntity = currentEnemy;

	EnemyActivateSkill(currentEnemy);
	EEnemyCombatPositions portraitPosition = currentEnemy->portraitPosition;
	Portraits[portraitPosition]->RotateTowardsCamera();
	combatCamera->RotateCameraToActor(Portraits[portraitPosition]);
	combatCamera->ZoomCameraInTowardsActor(Portraits[portraitPosition]);
	currentActivePosition++;
}

void ACombatGameModeBase::EnemyActivateSkill(UEnemyCombatEntity* aEnemyCombatEntity)
{
	USkillBase* skillObject = aEnemyCombatEntity->enemyBehaviour->GetSkill();
	FSkillsData skillData = skillObject->skillData;

	int playerToAttack = aEnemyCombatEntity->enemyBehaviour->GetCombatEntitysUsedInSkill(skillObject,GetEnemysInCombat(),GetPlayersInCombat());
	SkillResolveSubsystem->InitiateSkillAction(aEnemyCombatEntity,skillObject,playerToAttack);
}

void ACombatGameModeBase::ValidateEndingState(ECombatWinCondition aCombatWinCondition)
{
	if(CombatWinCondition == ECombatWinCondition::Win_Or_Lose)
	{
		EndCombat();
	}
	
	if(CombatWinCondition  == aCombatWinCondition )
	{
		EndCombat();
	}
	else
	{
		InGameHUD->PushView(EViews::Death,    EUiType::PersistentUi);
	}
}

void ACombatGameModeBase::ResetEnemyPortraits()
{
	for (auto Element : enemysInCombat)
	{
		Element->enemyPortrait->ResetPortraitRotationToDefault();
	}
}

void ACombatGameModeBase::IterateToNextPlayer()
{
	currentActivePosition++;
	
	
	if(currentActivePosition >= partyMembersInCombat.Num())
	{
		currentActivePosition = 0;
	}
}

void ACombatGameModeBase::IterateToNextEnemy()
{
	currentActivePosition++;
	
	
	if(currentActivePosition >= enemysInCombat.Num())
	{
		currentActivePosition = 0;
	}
}

void ACombatGameModeBase::SwitchCombatSides()
{
	SetRoundSide(CharacterTypeTurn == ECharactertype::Ally ?  ECharactertype::Enemy : ECharactertype::Ally);
}


ECharactertype ACombatGameModeBase::RemoveAndGetFirstInRoundOrder()
{
	if(currentRoundOrder.Num() == 0)
	{
		return ECharactertype::Undefined;
	}
	
	ECharactertype Charactertype = currentRoundOrder[0];
	currentRoundOrder.RemoveAt(0);

	return Charactertype;
}

void ACombatGameModeBase::AddInterruption(UCombatInterrupt* aCombatInterrupt)
{
	combatInterruptManager->AddCombatInterrupt(aCombatInterrupt);
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

void ACombatGameModeBase::CreateCombatLog(TArray<FCombatLog_Full_Data> CombatLog_Base_Datas)
{
	for (auto fullCombatLogData : CombatLog_Base_Datas)
	{
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
	
	partyManager->ResurrectedPartyMember.RemoveDynamic(this,&ACombatGameModeBase::ResurrectEntity);
	partyManager->RemoveAllCombatTokensFromParty();
	enemyFactory->BestiaryDataHasChangedBroadcast();


	
	if(aHasWon)
	{
		TriggerLevelupMenu(partyMembersInCombat, GetEXP(),gainedCP);
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


void ACombatGameModeBase::TriggerLevelupMenu(TArray<UPlayerCombatEntity*> aPlayerCombatEntity, int aExperience,int aClassPoints)
{
	TArray<UPlayerCombatEntity*> combatEntitysToLevelup= aPlayerCombatEntity;

	int previousPartyLevel = partyManager->GetPartyLevel();
	partyManager->AddPartyExperience(aExperience);
	partyManager->AddPartyClassPoints(aClassPoints);
	
	int newPartyLevel = partyManager->GetPartyLevel();
	
	if(newPartyLevel > previousPartyLevel)
	{
		ULevelupView * levelUpView = (ULevelupView*)InGameHUD->PushAndGetView(EViews::Levelup,    EUiType::ActiveUi);
		levelUpView->InitializeCombatEntitysToLevelUp(newPartyLevel,combatEntitysToLevelup,triggerNextEventStage);
	}
	else
	{
		persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());

		FTeleportData teleportData = persistentGameInstance->EventManagerSubSystem->GetCombatTeleportationData();
		if(teleportData.FloorIdentifier == EFloorID::None)
		{
			persistentGameInstance->LoadPreviousLevel();		
		}
		else
		{
			persistentGameInstance->TeleportPlayer(teleportData);
		}
	
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
		if(partyMembersInCombat[i] == nullptr)
		{
			continue;
		}
		
		if(partyMembersInCombat[i]->GetIsMarkedForDeath())
		{
			partyMembersInCombat[i]->Death();
			partyMembersInCombat.RemoveAt(i);
		}
	}
}