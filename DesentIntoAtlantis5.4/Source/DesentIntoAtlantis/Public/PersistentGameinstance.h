// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventManagerSubSystem.h"

#include "Engine/GameInstance.h"
#include "PersistentGameinstance.generated.h"

class UChallengeSubsystem;
enum class EElementalType;
class ULevelProgressionSubsystem;
class USaveManagerSubsystem;
class USaveGameData;
class AFloorPlayerPawn;
class UEnemyFactorySubSystem;
class USkillFactorySubsystem;
class UPartyManagerSubsystem;
class UTutorialManagerSubsystem;
class UDialogueFactorySubsystem;
enum class ESkillType;
enum class EClasses;
class UDataTable;
enum class EDataTableTypes;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelHasChanged,EFloorIdentifier,currentFloor);
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
	void LoadLevel(EFloorIdentifier aFloorIdentifier);
	UFUNCTION()
	void LoadPreviousLevel();

	UFUNCTION()
	void ReturnToPreviousLevel();

	UFUNCTION()
	void LoadPreSetLevel();

	UFUNCTION()
	void LoadCombatLevel(FString aEnemyGroupName,ECombatArena aCombatArena);
	FCombatArenaData ConsumeArenaDataFlag();

	bool ConsumeCombatFinishedFlag();
	void CallTransition();

	UPROPERTY()
	FLevelHasChanged levelHasChanged;
	
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EDataTableTypes,UDataTable*> dataTables;
	UPROPERTY(EditAnywhere, Category = "Data")
	TMap<EClasses,UDataTable*> dataTablesClasses;
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
	UTutorialManagerSubsystem* tutorialManagerSubsystem;
	UPROPERTY()
	UDialogueFactorySubsystem* dialogueManagerSubsystem;
	UPROPERTY()
	UEventManagerSubSystem*    EventManagerSubSystem;
	UPROPERTY()
	USaveManagerSubsystem*    saveManagerSubsystem;
	UPROPERTY()
	ULevelProgressionSubsystem*  levelProgressionSubsystem;

	UPROPERTY(EditAnywhere)
	TMap<EElementalType,UTexture2D*> elementalIcons;
	
	UPROPERTY()
	UFloorFactory*      floorFactory;

	bool hasRecentlyFinishedCombat = false;
	UPROPERTY()
	AAtlantisGameModeBase* currentGameMode;

private:

	TMap< EFloorIdentifier,FString> LevelMap;
	FCombatArenaData aCombatArenaData;
	bool isGameSaveBeingLoaded;
	EFloorIdentifier currentLevelName;
	EFloorIdentifier previousLevelName;
	EFloorIdentifier preSetLevelName;
	
	
};