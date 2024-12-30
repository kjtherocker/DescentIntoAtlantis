#pragma once

#include "CoreMinimal.h"
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

