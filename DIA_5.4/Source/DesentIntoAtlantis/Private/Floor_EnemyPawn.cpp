// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor_EnemyPawn.h"

#include "AIController.h"
#include "BehaviorTreeTaskTest.h"
#include "FloorBehaviorTrees.h"
#include "FloorPlayerPawn.h"
#include "LevelProgressionSubsystem.h"
#include "PersistentGameinstance.h"
#include "TransitionView.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


void AFloor_EnemyPawn::SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection)
{
	//Super::SetRotationWithoutAnimation(aCardinalNodeDirection);
	completeFloorPawnData.currentFacingDirection = aCardinalNodeDirection;
	enemyPawnCompleteData.completeFloorPawnData = completeFloorPawnData;
}

void AFloor_EnemyPawn::Initialize()
{
	Super::Initialize();
	movementSpeed = 1000;
	POSITION_OFFSET = FVector(0,0,45.0);
	
	GetComponents<UStaticMeshComponent>(staticMeshComponents);
	
	for(UStaticMeshComponent* MeshComponent : staticMeshComponents)
	{
		UMaterialInterface* CurrentMaterial = MeshComponent->GetMaterial(0);
		materialInstanceDynamic = UMaterialInstanceDynamic::Create(CurrentMaterial, this);
		
		if (materialInstanceDynamic != nullptr) 
		{
			meshComponent = MeshComponent;
			SetEnemyTexture(ECardinalNodeDirections::Left);
		
		}
	}
	
	hasBeenInitialized = true;
	
	floorBehaviorTree = NewObject<UFloorBehaviorTree>();
	floorBehaviorTree->InitializeBehaviorTree(this);
	
}

void AFloor_EnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if(cardinalDirections.Num() == 0)
	{
		return;
	}
	
	if (PlayerController)
	{
		// Get the camera's location and rotation
		FVector CameraLocation;
		FRotator CameraRotation;
		PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

		// Calculate the forward vector of the camera
		CameraForward = CameraRotation.Vector();

		// Calculate the forward vector of the pawn
		if(completeFloorPawnData.currentFacingDirection != ECardinalNodeDirections::Empty)
		{
			PawnForward = cardinalDirections[completeFloorPawnData.currentFacingDirection];
		}
		// Calculate the vector from the camera to the pawn
		FVector CameraToPawn = GetActorLocation() - CameraLocation;
		CameraToPawn.Normalize();

		// Calculate the angle between the camera forward vector and the vector from the camera to the pawn
		//float Angle = FMath::Acos(FVector::DotProduct(CameraForward, CameraToPawn));

		// Convert radians to degrees
		//float AngleInDegrees = FMath::RadiansToDegrees(Angle);

		// Calculate the direction of the camera to pawn vector relative to the pawn's forward vector
		float DotProduct = FVector::DotProduct(PawnForward, CameraToPawn);
		float CrossProduct = FVector::CrossProduct(PawnForward, CameraToPawn).Z;

		// Determine the quadrant of the angle
		if (DotProduct > 0.707f)  // cos(45 degrees)
		{
			// Front view
			SetEnemyTexture(ECardinalNodeDirections::Up);
		}
		else if (DotProduct < -0.707f)  // cos(135 degrees)
		{
			// Back view
			SetEnemyTexture(ECardinalNodeDirections::Down);
		}
		else if (CrossProduct > 0)
		{
			// Left view
			SetEnemyTexture(ECardinalNodeDirections::Left);
		}
		else
		{
			// Right view
			SetEnemyTexture(ECardinalNodeDirections::Right);
		}
	}
}

void AFloor_EnemyPawn::SubscribeToActivateEnemyBehavior(AFloorPlayerPawn* aFloorPlayerPawn)
{
	floorPlayerPawn = aFloorPlayerPawn;
	aFloorPlayerPawn->playerhasMovedDelegate.AddDynamic(this,&AFloor_EnemyPawn::ActivateEnemysFloorBehavior);
}

void AFloor_EnemyPawn::OnNewNodeReached()
{
	Super::OnNewNodeReached();
	enemyPawnCompleteData.completeFloorPawnData = completeFloorPawnData;
	
	if(floorPlayerPawn != nullptr)
	{
		if(completeFloorPawnData.currentNodePositionInGrid == floorPlayerPawn->GetPosition())
		{
			for(UStaticMeshComponent* MeshComponent : staticMeshComponents)
			{
				if (MeshComponent)
				{
					MeshComponent->SetVisibility(false);
					MeshComponent->SetHiddenInGame(true);
				}
			}
		}
	}
}

void AFloor_EnemyPawn::SetEnemyFloorPlan(TArray<FFloorNodeAiData> aFloorPlan)
{
	floorPlan = aFloorPlan;
}

void AFloor_EnemyPawn::SetEnemyPawnCompleteData(FFloorEnemyPawnCompleteData aEnemyPawnCompleteData)
{
	enemyPawnCompleteData = aEnemyPawnCompleteData;
}



void AFloor_EnemyPawn::ActivateEncountered()
{
	
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	persistentGameInstance->CallTransition();
	UTransitionView* transitionView =
		(UTransitionView* )gameModeBase->InGameHUD->PushAndGetView(EViews::TransitionView,EUiType::ActiveUi);
	transitionView->transitionTo.AddDynamic(this,&AFloor_EnemyPawn::TransitionToCombat);
	transitionView->StartEnterTransition();
	floorPlayerPawn->isPlayerInputEnabled.Broadcast(false);
}

void AFloor_EnemyPawn::TransitionToCombat()
{
	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	persistentGameInstance->levelProgressionSubsystem->AddEnemyHasBeenInteracted(this);
	persistentGameInstance->LoadCombatLevel(enemyPawnCompleteData.EnemyGroupName,ECombatArenaID::Prison,ECombatWinCondition::Win);
}

void AFloor_EnemyPawn::SetEnemyTexture(ECardinalNodeDirections aCardinalNodeDirection)
{
	if(nodeToMoveTowards != nullptr)
	{
		return;
	}
	
	materialInstanceDynamic->SetTextureParameterValue(FName("BaseTexture"), floorEnemyTextures[aCardinalNodeDirection]);
	meshComponent->SetMaterial(0, materialInstanceDynamic);
}

void AFloor_EnemyPawn::ActivateEnemysFloorBehavior(FCompleteFloorPawnData aPlayerCompleteFloorData)
{
	activateEnemyBehavior.Broadcast(aPlayerCompleteFloorData);
}
