// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventDispatcherSubsystem.h"
#include "EventManagerSubSystem.h"
#include "PopupSubsystem.h"
#include "SkillResolveSubsystem.h"

#include "Engine/GameInstance.h"
#include "PersistentGameinstance.generated.h"

class UQuestSubsystem;
class UKeyItemFactorySubsystem;
class UPassiveFactorySubsystem;
class UChallengeSubsystem;
enum class EElementalType: uint8;
class ULevelProgressionSubsystem;
class USaveManagerSubsystem;
class USaveGameData;
class AFloorPlayerPawn;
class UEnemyFactorySubSystem;
class USkillFactorySubsystem;
class UPartyManagerSubsystem;
class UTutorialManagerSubsystem;
class UDialogueManagerSubsystem;
enum class ESkillType : uint8;
enum class EClassID  : uint8;
class UDataTable;
enum class EDataTableTypes;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelHasChanged,EFloorID,currentFloor);

UCLASS()
class DESENTINTOATLANTIS_API UPersistentGameinstance : public UGameInstance
{
	GENERATED_BODY()
public:
	
	UPersistentGameinstance();
	virtual void Init() override;

	UFUNCTION()
	void UnloadLevel(FString aLevelName);
	UFUNCTION()
	void LoadLevel(EFloorID aFloorIdentifier);
	UFUNCTION()
	void LoadPreviousLevel();

	UFUNCTION()
	void TeleportPlayer(FTeleportData aTeleportData);
	
	UFUNCTION()
	void ReturnToPreviousLevel();

	UFUNCTION()
	void LoadPreSetLevel();

	UFUNCTION()
	void LoadCombatLevel(FString aEnemyGroupName,ECombatArenaID aCombatArena, ECombatWinCondition ECombatWinCondition);
	FCombatArenaData ConsumeArenaDataFlag();

	bool ConsumeCombatFinishedFlag();
	void CallTransition();

	UPROPERTY()
	int ItemCharges;
	UPROPERTY()
	FLevelHasChanged levelHasChanged;
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EClassID,UDataTable*> dataTablesClasses;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<ESkillType,UDataTable*> dataTablesSkills;

	UPROPERTY()
	UChallengeSubsystem*       challengeManagerSubsystem;
	UPROPERTY()
	UPartyManagerSubsystem*    partyManagerSubsystem;
	UPROPERTY()
	USkillFactorySubsystem*    skillFactorySubsystem;
	UPROPERTY()
	UEnemyFactorySubSystem*    enemyFactorySubSystem;
	UPROPERTY()
	UPassiveFactorySubsystem*  passiveFactorySubsystem;
	UPROPERTY()
	UEventDispatcherSubsystem* eventDispatcherSubsystem;

	UPROPERTY()
	USkillResolveSubsystem* SkillResolveSubsystem;

	
	UPROPERTY()
	UKeyItemFactorySubsystem* KeyItemFactorySubsystem;

	UPROPERTY()
	UPopupSubsystem* popupSubsystem;
	
	UPROPERTY()
	UTutorialManagerSubsystem* tutorialManagerSubsystem;
	UPROPERTY()
	UDialogueManagerSubsystem* dialogueManagerSubsystem;
	UPROPERTY()
	UEventManagerSubSystem*    EventManagerSubSystem;
	UPROPERTY()
	USaveManagerSubsystem*    saveManagerSubsystem;
	UPROPERTY()
	ULevelProgressionSubsystem*  levelProgressionSubsystem;
	UPROPERTY()
	UQuestSubsystem* questSubsystem;

	UPROPERTY(EditAnywhere)
	TMap<EElementalType,UTexture2D*> elementalIcons;
	
	UPROPERTY()
	UFloorFactory*      floorFactory;

	bool hasRecentlyFinishedCombat = false;
	UPROPERTY()
	AAtlantisGameModeBase* currentGameMode;

private:

	TMap< EFloorID,FString> LevelMap;
	FCombatArenaData aCombatArenaData;
	bool isGameSaveBeingLoaded;
	EFloorID currentLevelName;
	EFloorID previousLevelName;
	EFloorID preSetLevelName;
	
	
};
