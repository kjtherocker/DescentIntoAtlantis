// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatCameraPawn.h"

#include "Kismet/GameplayStatics.h"

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
	if(!shouldReturnToInitialPosition)
	{
		return;
	}
	FVector nodeToMoveTowardsPostion = InitialPosition;
	FVector2D nodeToModeTowardsXY = FVector2D(nodeToMoveTowardsPostion.X,nodeToMoveTowardsPostion.Y);
	FVector2D currentActorPositionXY = FVector2D(GetActorLocation().X,GetActorLocation().Y);
	
	if(FVector2D::Distance(currentActorPositionXY, nodeToModeTowardsXY) < 9.5f )
	{
		shouldReturnToInitialPosition = false;
		//OnNewNodeReached();
		SetActorRotation(InitialRotation);
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

void ACombatCameraPawn::RotateCameraToActor(AActor* aRotateTowards)
{
	////SetActorRotation(FRotator(0,20,0));
	//SetActorLocation(ENEMY_POSITION3);
	//testHasBeenReached= false;
	// Get the player controller

	// Get the camera location
	FVector CameraLocation = GetActorLocation();
	FVector PawnLocation = aRotateTowards->GetActorLocation();

	// Calculate the direction vector in the XY plane
	FVector Direction = PawnLocation - CameraLocation;
	Direction.Z = 0.0f; // Ignore the Z component

	// Normalize the direction vector
	Direction.Normalize();

	// Calculate the yaw angle
	float YawAngle = FMath::Atan2(Direction.Y, Direction.X) * (180.0f / PI);

	// Ensure the yaw angle is within the correct range
	if (YawAngle < 0.0f)
	{
		YawAngle += 360.0f;
	}

	// Create a new rotation that only affects the Z-axis
	FRotator NewRotation(0.0f, YawAngle, 0.0f);

	// Set the camera's rotation to the new rotation
	SetActorRotation(NewRotation);

	// Print debug information
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Camera Location: %s"), *CameraLocation.ToString()));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Pawn Location: %s"), *PawnLocation.ToString()));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Direction: %s"), *Direction.ToString()));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Yaw Angle: %f"), YawAngle));
	}
}

void ACombatCameraPawn::ZoomCameraInTowardsActor(AActor* aRotateTowards)
{
	FVector SourceLocation = GetActorLocation();
	FVector TargetLocation = aRotateTowards->GetActorLocation();

	// Calculate the halfway point
	FVector HalfwayPoint = (SourceLocation + TargetLocation) / 4.0f;

	FVector finalDestination = FVector(HalfwayPoint.X,HalfwayPoint.Y,100);
	// Move the source actor to the halfway point
	SetActorLocation(finalDestination);

}

// Called to bind functionality to input
void ACombatCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

