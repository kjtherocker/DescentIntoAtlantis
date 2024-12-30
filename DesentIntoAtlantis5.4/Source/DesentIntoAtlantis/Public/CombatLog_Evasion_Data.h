
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" 
#include "CombatLog_Evasion_Data.generated.h"


struct FCombatLog_PassiveSkilData;

USTRUCT()
struct DESENTINTOATLANTIS_API FCombatLog_Evasion_Data : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY()
	int32 totalEvasion;
	
	UPROPERTY()
	int32 victimEvasion;

	UPROPERTY()
	int32 HitEvasionCalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	TArray<FCombatLog_PassiveSkilData> passivesActivated;
	
};