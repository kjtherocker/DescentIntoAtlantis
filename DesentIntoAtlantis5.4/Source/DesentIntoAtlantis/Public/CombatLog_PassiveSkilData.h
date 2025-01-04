#pragma once

#include "CoreMinimal.h"
#include "CombatToken_Base_Data.h"
#include "PassiveSkillData.h"

#include "Engine/DataTable.h" 
#include "CombatLog_PassiveSkilData.generated.h"

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_PassiveSkilData : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	FPassiveSkillData PassiveSkillData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	int passiveResult = 0;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_CombatToken : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	TArray<FCombatToken_Base_Data> combatTokenData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	int passiveTokenAmount;
};

