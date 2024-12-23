#pragma once

#include "CombatLog_Detailed_Base_Element.h"
#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "CombatLogDetailedEvasionElement.generated.h"

class URichTextBlock;
/**
 * 
 */
UCLASS()
class DESENTINTOATLANTIS_API UCombatLogDetailedEvasionElement : public UCombatLog_Detailed_Base_Element
{
	GENERATED_BODY()

public:
	
	virtual void SetElement(FCombatLog_Full_Data CombatLog_Full_Data, AInGameHUD* aHud) override;

	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	URichTextBlock* BW_TotalEvasionText;

};
