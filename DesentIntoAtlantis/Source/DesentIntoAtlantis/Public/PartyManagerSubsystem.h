// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"

#include "Engine/DataTable.h"

#include "UObject/NoExportTypes.h"
#include "PartyManagerSubsystem.generated.h"

class UCombatManager;
struct FPlayerEntityData;
enum class EDataTableClasses;
class UPlayerCombatEntity;
class UCombatEntity;
class USkillFactorySubsystem;

/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UPartyManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	UPartyManagerSubsystem();
	UPROPERTY()
	USkillFactorySubsystem* skillFactory;

	
public:
	
	void InitializeDataTable(UDataTable* aDataTable,TMap<EDataTableClasses,UDataTable*> aClassDataTable);

	void AddPlayerToActiveParty(EDataTableClasses aClasses);
	void ResetActivePartyToDefaultState();
	
	TArray<UPlayerCombatEntity*> ReturnActiveParty();

	TMap<EDataTableClasses,UPlayerCombatEntity*> playerCombatEntityInfo;
	UPROPERTY()
	TArray<FPlayerEntityData> playerEntityData;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> playerCombatEntity;
	UPROPERTY()
	TArray<UPlayerCombatEntity*> activePartyEntityData;;
	
};
