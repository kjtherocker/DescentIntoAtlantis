// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorEnum.h"
#include "Engine/DataTable.h"
#include "DialogueManagerSubsystem.generated.h"


class AInGameHUD;
class AFloorManager;
enum class EAudio;


UENUM()
enum class ECharacterID  : uint8
{
	None,
	Kriede,
	Rain,
	Feienne,
	Executioner,
	SharkFiend,
	SharkGuard,
	Cavia,
	Phi,
};

UENUM()
enum class ECharacterCostume  : uint8
{
	None,
	DefaultOutFit,
	Costume1,
	Costume2,
	Costume3,
	Costume4,
	Costume5,
	Costume6,
	Costume7,
	Watcher,
};

UENUM()
enum class EDialoguePortraitExpression  : uint8
{
	None,
	Default,
	Smiling,
	Smug,
	Exasperated,
	Scared,
	Screaming,
};

UENUM()
enum class EDialoguePortraitPositions  : uint8
{
	None,
	Left,
	Center,
	Right,
	Unique,
};



UENUM()
enum class ELanguages  : uint8
{
	None,
	English,
	
};

USTRUCT()
struct DESENTINTOATLANTIS_API FCharacterCostumeData: public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere )
	UMaterialInterface*  healthbarPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* fullBodyCharacterPortrait;
	UPROPERTY( EditAnywhere )
	UTexture2D* halfBodyCharacterPortrait;
	
	UPROPERTY(EditAnywhere)
	TMap<EDialoguePortraitExpression,UTexture2D*> costumeExpressionTextures;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueCharacterData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	TMap<ECharacterCostume,FCharacterCostumeData> CostumeData;
};



USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueActorData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	
	UPROPERTY(EditAnywhere)
	EDialogueActorsLabel dialogueActor;
	
	UPROPERTY(EditAnywhere)
	bool hasMovement = false;
	
	UPROPERTY(EditAnywhere)
	bool actorToBePossessed = false;
	
	UPROPERTY(EditAnywhere)
	FCompleteFloorPawnData pawnData;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FDialoguePortraitData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()


	UPROPERTY( EditAnywhere,Category= "Required")
	EDialogueActorsLabel CharacterID;
	UPROPERTY( EditAnywhere,Category= "Required")
	EDialoguePortraitPositions portraitPositions;
	UPROPERTY( EditAnywhere,Category= "Required")
	EDialoguePortraitExpression portraitExpression = EDialoguePortraitExpression::Default;
	UPROPERTY( EditAnywhere,Category= "Optional")
	ECharacterCostume ForcedCostume;
	UPROPERTY( EditAnywhere,Category= "Optional")
	UTexture2D* ForcedPortrait;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	
	UPROPERTY( EditAnywhere )
	FString  SpeakerName;
	
	UPROPERTY( EditAnywhere )
	FString Dialogue;

	
};


USTRUCT()
struct DESENTINTOATLANTIS_API FCutsceneData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	TMap<ELanguages,FDialogueData> dialogueData;
	

	UPROPERTY(EditAnywhere)
	TArray<FDialoguePortraitData> PortraitData;
	
	UPROPERTY( EditAnywhere )
	UTexture2D* BackgroundCG;

	UPROPERTY( EditAnywhere )
	EAudio      musicToPlay;

	UPROPERTY( EditAnywhere )
	TArray<FDialogueActorData> dialogueActor;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FDialogueCompleteData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
	EDialogueTriggers DialogueTriggers;

	UPROPERTY(EditAnywhere)
	TArray<FCutsceneData> DialogueData;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueActorData> AllActorsInDialogue;
};

USTRUCT()
struct DESENTINTOATLANTIS_API FPortaitActorData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	EDialogueActorsLabel dialogueActor;
	
	UPROPERTY(EditAnywhere)
	FDialogueCharacterData CharacterData;
	
	UPROPERTY(EditAnywhere)
	TMap<ECharacterCostume,TSubclassOf<AActor>> actorReference;
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogueEnd);

UCLASS()
class DESENTINTOATLANTIS_API UDialogueManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	FOnDialogueEnd onDialogueEnd;
	
	void InitializeDatabase(UDataTable* aDialogueDatabase, UDataTable* aDialogueActorDatabase);
	FDialogueCompleteData GetDialogueDataByTrigger(EDialogueTriggers aDialogueData);
	FPortaitActorData GetDialogueDataByLabel(EDialogueActorsLabel aActorData);

	FCharacterCostumeData GetCostumeData(EDialogueActorsLabel aActorData,ECharacterCostume aCharacterCostume);

	UPROPERTY(EditAnywhere)
	TMap<EDialogueActorsLabel, FPortaitActorData> dialogueActors;
	
	UPROPERTY(EditAnywhere)
	TMap<EDialogueTriggers, FDialogueCompleteData> dialogueData;

	UFUNCTION()
	void DialogueFinished();
	
	void StartDialogue(EDialogueTriggers aDialogueData, AInGameHUD* aInGameHud);
	
	void StartDialogue(EDialogueTriggers aDialogueData,
	FTriggerNextEventStage aTriggerNextEventStage, AFloorManager* aFloorManager , AInGameHUD* aInGameHud);
};
