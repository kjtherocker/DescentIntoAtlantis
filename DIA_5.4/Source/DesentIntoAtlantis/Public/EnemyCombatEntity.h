// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatEntity.h"
#include "CombatInterruptData.h"
#include "CompleteElementalHandlerData.h"
#include "EnemyBeastiaryData.h"
#include "EquipmentHandler.h"
#include "InterruptHandler.h"
#include "SkillBase.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCombatEntity.generated.h"

class UEnemyBestiaryData;
class UEnemyBehaviour;
class AEnemyPortraitElement;
class ACombatGameModeBase;
struct FEnemyEntityCompleteData;

UENUM()
enum class  EEnemyCombatPositions
{
	Left   = 0,
	Middle = 1,
	Right  = 2
};

UENUM()
enum class  EDiffculty
{
	Easy   = 0,
	Normal = 1,
	Hard   = 2
};

UENUM()
enum class  EEnemyLabelID
{
	None,
	Tutorial_Rain,
	Chapter_1_SharkGuard,
	Chapter_1_SharkFiend,
	Chapter_1_SlimeGirl,
	Chapter_1_Phi,
	Chapter_1_John,
	Chapter_1_Mike,
	Chapter_1_Sophia,
	Chapter_1_BossRain,
	Chapter_1_MiniatureGuraShark,
	Chapter_1_Cavia,
	Chapter_1_CatGuard,
};

USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyEntitydInfo :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	FString Behaviour;

	UPROPERTY(EditAnywhere)
	FCombatEntityData CombatEntityData;
	
	UPROPERTY( EditAnywhere )
	FEquipmentHandlerData EquipmentHandlerData;
	UPROPERTY( EditAnywhere )
	FCompleteElementalHandlerData CompleteElementalHandlerData;

	UPROPERTY(EditAnywhere)
	TArray<ESkillIDS> skillIDS;

	UPROPERTY(EditAnywhere)
	TArray<EPassiveSkillID> PassiveSkillIds;

	UPROPERTY(EditAnywhere)
	FInterruptData EnemyInterruptData;

	UPROPERTY( EditAnywhere )
	int experience;

	UPROPERTY( EditAnywhere )
	int ClassPoints;
	
};



USTRUCT()
struct DESENTINTOATLANTIS_API FEnemyEntityCompleteData :public  FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY( EditAnywhere )
	UMaterialInterface* fullBodyCharacterPortrait;

	UPROPERTY( EditAnywhere )
	FString characterName;

	UPROPERTY(EditAnywhere)
	EEnemyLabelID EnemyLabelID;
	
	UPROPERTY(EditAnywhere)
	TMap<EDiffculty,FEnemyEntitydInfo> CombatEntityData;
	
};


UCLASS()
class DESENTINTOATLANTIS_API UEnemyCombatEntity : public UCombatEntity
{
	GENERATED_BODY()
private:
	FCombatEntityData CombatEntityData;
	FEnemyEntitydInfo enemyEntityInfo;
public:
	void SetAbilityScores();
	void SetEnemyEntityData(FEnemyEntityCompleteData AEnemyEntityData,USkillFactorySubsystem * skillFactory,EEnemyCombatPositions aPortraitPosition);
	virtual void Death() override;
	virtual FCombatLog_AttackDefense_Data AttackResource(EResource aResource, UCombatEntity* aAttacker, FSkillsData aSkill) override;

	EEnemyCombatPositions portraitPosition;

	virtual FString GetEntityName() override;

	virtual int GetExperience();
	virtual int GetClassPoints();
	UPROPERTY()
	AEnemyPortraitElement* enemyPortrait;
	UPROPERTY()
	TArray<USkillBase*> enemySkills;
	
	UPROPERTY()
	UEnemyBehaviour* enemyBehaviour; 
	FEnemyBestiary* beastiaryData;
	
	FEnemyEntityCompleteData enemyEntityCompleteData;
};

