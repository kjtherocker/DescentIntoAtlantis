// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorPlayerPawn.h"

#include "CombatGameModeBase.h"
#include "InGameHUD.h"
#include "PersistentGameinstance.h"
#include "SaveManagerSubsystem.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "DesentIntoAtlantis/FloorNode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFloorPlayerPawn::AFloorPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFloorPlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	gameModeBase = Cast< AFloorGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
//	AInGameHUD * hud = (AInGameHUD*)GetWorld()->GetFirstPlayerController()->GetHUD();
//	gameModeBase->InGameHUD = hud;
}

void AFloorPlayerPawn::Initialize()
{
	Super::Initialize();

	movementSpeed = MOVEMENT_SPEED;
	positionOffSet = FVector(0,0,300);
	playerForcedMovement.AddDynamic(this,&AFloorPlayerPawn::ForcedMovement);
	isPlayerInputEnabled.AddDynamic(this,&AFloorPlayerPawn::SetFloorPawnInput);
}



// Called every frame
void AFloorPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFloorPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//InputComponent->BindAxis("LeftRight", this, &AFloorPawn::RotatePawn);
	InputComponent->BindAction("Left"     ,IE_Pressed ,this, &AFloorPlayerPawn::LeftRotation );
	InputComponent->BindAction("Right"    ,IE_Pressed ,this, &AFloorPlayerPawn::RightRotation);
	InputComponent->BindAction("Up"       ,IE_Pressed ,this, &AFloorPlayerPawn::MoveForward  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &AFloorPlayerPawn::ActivateMainMenu  );
}

void AFloorPlayerPawn::ActivateMainMenu()
{
	if(hasRotationFinished)
	{
		gameModeBase->InGameHUD->PushView(EViews::MainMenu,    EUiType::ActiveUi);
	}
}

void AFloorPlayerPawn::SetFloorPawnInput(bool aIsInputActive)
{
	if(aIsInputActive)
	{
		EnableInput(GetWorld()->GetFirstPlayerController());	
	}
	else
	{
		DisableInput(GetWorld()->GetFirstPlayerController());		
	}

}

FVector2D AFloorPlayerPawn::GetPosition()
{
	return completeFloorPawnData.currentNodePositionInGrid;
}

void AFloorPlayerPawn::MovePawn(float aDeltaTime)
{
	if(!hasRotationFinished)
	{
		return;
	}

	if(nodeToMoveTowards == nullptr)
	{
		return;
	}
	
	
	FVector nodeToMoveTowardsPostion = nodeToMoveTowards->GetActorLocation() + positionOffSet;
	FVector2D nodeToModeTowardsXY = FVector2D(nodeToMoveTowardsPostion.X,nodeToMoveTowardsPostion.Y);
	FVector2D currentActorPositionXY = FVector2D(GetActorLocation().X,GetActorLocation().Y);
	
	if(FVector2D::Distance(currentActorPositionXY, nodeToModeTowardsXY) < 9.5f )
	{
		hasRotationFinished       = true;
		previousNodePawnWasOn   = currentNodePawnIsOn;
		currentNodePawnIsOn     = nodeToMoveTowards;
		nodeToMoveTowards         = nullptr;
		
		UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
		persistentGameInstance->partyManagerSubsystem->SavePlayerEntitys();
		
		completeFloorPawnData.currentNodePositionInGrid = currentNodePawnIsOn->floorNodeData.positionInGrid;
		currentNodePawnIsOn->PlayerIsOnTopOfNode();
		playerhasMovedDelegate.Broadcast(completeFloorPawnData);
	
		return;
	}


	FVector currentPostion  = GetActorLocation();
	
	float deltaX = nodeToMoveTowardsPostion.X - currentPostion.X;
	float deltaY = nodeToMoveTowardsPostion.Y - currentPostion.Y;

	float AngleToWaypoint = atan2(deltaX,deltaY);
	
	currentPostion.X += sin(AngleToWaypoint) * movementSpeed * aDeltaTime;
	currentPostion.Y += cos(AngleToWaypoint) * movementSpeed * aDeltaTime;
	
	
	SetActorLocation(currentPostion);
	
}


void AFloorPlayerPawn::SetToStartRotation(double aDirection)
{
	Super::SetToStartRotation(aDirection);

	playerDirectionHasChanged.Broadcast(completeFloorPawnData);
}




void AFloorPlayerPawn::PlaceAndInitializieFloorPawn(AFloorNode* aFloorNode, ECardinalNodeDirections aRotation)
{
	Super::PlaceAndInitializieFloorPawn(aFloorNode, aRotation);
	
	playerhasMovedDelegate.Broadcast(completeFloorPawnData);

	UPersistentGameinstance* persistentGameInstance = Cast<UPersistentGameinstance>( GetGameInstance());
	persistentGameInstance->partyManagerSubsystem->SavePlayerEntitys();
	persistentGameInstance->saveManagerSubsystem->AutoSave();
}

void AFloorPlayerPawn::SetRotationWithoutAnimation(ECardinalNodeDirections aCardinalNodeDirection)
{
	Super::SetRotationWithoutAnimation(aCardinalNodeDirection);
	completeFloorPawnData.currentFacingDirection = aCardinalNodeDirection;
	playerDirectionHasChanged.Broadcast(completeFloorPawnData);
}




