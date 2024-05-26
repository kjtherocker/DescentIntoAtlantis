#include "FloorNode.h"

#include "CombatGameModeBase.h"
#include "FloorGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFloorNode::AFloorNode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

AFloorNode::~AFloorNode()
{
}

void AFloorNode::SetWalkableDirections(short aWalkabledirections)
{
	switch (aWalkabledirections)
	{
	case ECardinalNodeDirections::Up:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		break;

	case ECardinalNodeDirections::Down:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		break;

	case ECardinalNodeDirections::Left:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::Right:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::AllSidesOpen:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpDown:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		break;

	case ECardinalNodeDirections::UpLeft:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::Upright:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::LeftDown:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::RightDown:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::LeftRight:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpLeftRight:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpLeftDown:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpRightDown:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Up);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::DownLeftRight:
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Down);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Right);
		floorNodeData.walkableDirections.Add(ECardinalNodeDirections::Left);
		break;
	}

	SetFloorNodeWallInfo(ECardinalNodeDirections::Up,
	                     FVector(0, -110, 200),
	                     FRotator(0, 0, 0));

	SetFloorNodeWallInfo(ECardinalNodeDirections::Right,
	                     FVector(116.0, -1.0, 200),
	                     FRotator(0, 90, 0));

	SetFloorNodeWallInfo(ECardinalNodeDirections::Down,
	                     FVector(0.0, 120, 200),
	                     FRotator(0, 180, 0));

	SetFloorNodeWallInfo(ECardinalNodeDirections::Left,
	                     FVector(-121.0, -8, 200),
	                     FRotator(0, 270, 0));

	SetLevelNode(floorNodeData.walkableDirections);
}

void AFloorNode::SetLevelNode(TArray<ECardinalNodeDirections> aWalkableDirections)
{
	floorNodeData.walkableDirections = aWalkableDirections;

	for (int i = 0; i < floorNodeData.cardinalNodeDirections.Num(); i++)
	{
		ECardinalNodeDirections direction = floorNodeData.cardinalNodeDirections[i];
		if (!aWalkableDirections.Contains(direction))
		{
			if (floorNodeWallInfos.Contains(direction))
			{
				floorNodeWallInfos[direction]->wallActor = SpawnNodeWall(floorNodeWallInfos[direction], direction);
			}
		}
	}
}

void AFloorNode::SetPositionInGrid(FVector2D aPosition)
{
	floorNodeData.positionInGrid = aPosition;
}

bool AFloorNode::IsDirectionWalkable(ECardinalNodeDirections aDirection)
{
	if (floorNodeData.walkableDirections.Num() == 0)
	{
		return false;
	}

	for (int i = 0; i < floorNodeData.walkableDirections.Num(); i++)
	{
		if (floorNodeData.walkableDirections[i] == aDirection)
		{
			return true;
		}
	}

	return false;
}

// Called when the game starts or when spawned
void AFloorNode::BeginPlay()
{
	Super::BeginPlay();

	floorNodeData.cardinalNodeDirections.Add(ECardinalNodeDirections::Up);
	floorNodeData.cardinalNodeDirections.Add(ECardinalNodeDirections::Down);
	floorNodeData.cardinalNodeDirections.Add(ECardinalNodeDirections::Left);
	floorNodeData.cardinalNodeDirections.Add(ECardinalNodeDirections::Right);
}

AActor* AFloorNode::SpawnNodeWall(UFloorNodeWallInfo* nodeWallInfo, ECardinalNodeDirections aCardinalDirection)
{
	AActor* wallActor;
	const FAttachmentTransformRules AttachmentTransformRules = FAttachmentTransformRules(
		EAttachmentRule::KeepRelative, true);
	FRotator rotator = GetActorRotation() + nodeWallInfo->rotation;

	wallActor = Cast<AActor>(
		GetWorld()->SpawnActor<AActor>(wallReference, nodeWallInfo->wallPosition + FVector::Zero(), rotator));
	//wallActor->SetActorLabel(FString(UEnum::GetDisplayValueAsText(aCardinalDirection).ToString()));
	wallActor->AttachToActor(this, AttachmentTransformRules, "directionName");

	return wallActor;
}

void AFloorNode::SetFloorNodeWallInfo(ECardinalNodeDirections aCardinalDirection, FVector aWallPosition,
                                      FRotator aRotation)
{
	if (wallReference == nullptr)
	{
		return;
	}

	UFloorNodeWallInfo* floorNodeWallInfo = NewObject<UFloorNodeWallInfo>();

	floorNodeWallInfo->wallPosition = aWallPosition;
	floorNodeWallInfo->rotation = aRotation;

	floorNodeWallInfos.Add(aCardinalDirection, floorNodeWallInfo);
}

void AFloorNode::PlayerIsOnTopOfNode()
{
	nodeHasBeenWalkedOn.Broadcast(floorNodeData.positionInGrid);
}

void AFloorNode::SetAdditionalLockedDirections(ECardinalNodeDirections aCardinalNodeDirections)
{
	floorNodeData.additonalLockedDirections.Add(aCardinalNodeDirections);
}

