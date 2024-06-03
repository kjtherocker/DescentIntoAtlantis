// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCameraPawn.h"

// Sets default values
ACombatCameraPawn::ACombatCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACombatCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACombatCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(testHasBeenReached)
	{
		return;
	}
	FVector nodeToMoveTowardsPostion = InitialPosition;
	FVector2D nodeToModeTowardsXY = FVector2D(nodeToMoveTowardsPostion.X,nodeToMoveTowardsPostion.Y);
	FVector2D currentActorPositionXY = FVector2D(GetActorLocation().X,GetActorLocation().Y);
	
	if(FVector2D::Distance(currentActorPositionXY, nodeToModeTowardsXY) < 9.5f )
	{
		testHasBeenReached = true;
		//OnNewNodeReached();
		//SetActorLocation(nodeToMoveTowardsPostion);
		return;
	}


	FVector currentPostion  = GetActorLocation();


	
	float deltaX = nodeToMoveTowardsPostion.X - currentPostion.X;
	float deltaY = nodeToMoveTowardsPostion.Y - currentPostion.Y;

	float AngleToWaypoint = atan2(deltaX,deltaY);
	
	currentPostion.X += sin(AngleToWaypoint) * CAMERA_SPEED * DeltaTime;
	currentPostion.Y += cos(AngleToWaypoint) * CAMERA_SPEED * DeltaTime;
	
	
	SetActorLocation(currentPostion);
}

void ACombatCameraPawn::Rotate()
{
	////SetActorRotation(FRotator(0,20,0));
	//SetActorLocation(ENEMY_POSITION3);
	//testHasBeenReached= false;
}

// Called to bind functionality to input
void ACombatCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

