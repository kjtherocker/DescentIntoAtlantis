// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorDoor.h"

// Sets default values
AFloorDoor::AFloorDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AFloorDoor::TriggerAnimation(EDoorAnimationTypes doorAnimationType)
{
	
	if(doorMesh)
	{
		doorMesh->PlayAnimation(doorAnimationMap[doorAnimationType],false);
	}
}

// Called when the game starts or when spawned
void AFloorDoor::BeginPlay()
{
	Super::BeginPlay();
	TArray<USkeletalMeshComponent*> Components2;
	GetComponents<USkeletalMeshComponent>(Components2);

	doorMesh = Components2[0];
	openDoorDelegate.AddDynamic(this,&AFloorDoor::TriggerAnimation);
}

// Called every frame
void AFloorDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

