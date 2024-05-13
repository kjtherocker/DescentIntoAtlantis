// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorDoor.generated.h"

UENUM()
enum class EDoorAnimationTypes
{
	none = 0,
	OpenA = 1,
	OpenB = 2
	
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOpenDoor,EDoorAnimationTypes,doorDirection);

UCLASS()
class DESENTINTOATLANTIS_API AFloorDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorDoor();

	UPROPERTY()
	FOpenDoor openDoorDelegate;
	
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* doorMesh;
	UPROPERTY(EditAnywhere)
	TMap<EDoorAnimationTypes,UAnimationAsset*> doorAnimationMap;

	UFUNCTION()
	void TriggerAnimation(EDoorAnimationTypes doorAnimationType);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
