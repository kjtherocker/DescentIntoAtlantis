#include "FloorNode.h"

#include "CombatManager.h"
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
		walkableDirections.Add(ECardinalNodeDirections::Up);
		break;

	case ECardinalNodeDirections::Down:
		walkableDirections.Add(ECardinalNodeDirections::Down);
		break;

	case ECardinalNodeDirections::Left:
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::Right:
		walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::AllSidesOpen:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Down);
		walkableDirections.Add(ECardinalNodeDirections::Right);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpDown:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Down);
		break;

	case ECardinalNodeDirections::UpLeft:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::Upright:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::LeftDown:
		walkableDirections.Add(ECardinalNodeDirections::Down);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::RightDown:
		walkableDirections.Add(ECardinalNodeDirections::Down);
		walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::LeftRight:
		walkableDirections.Add(ECardinalNodeDirections::Right);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpLeftRight:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Right);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpLeftDown:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Down);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	case ECardinalNodeDirections::UpRightDown:
		walkableDirections.Add(ECardinalNodeDirections::Up);
		walkableDirections.Add(ECardinalNodeDirections::Down);
		walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

	case ECardinalNodeDirections::DownLeftRight:
		walkableDirections.Add(ECardinalNodeDirections::Down);
		walkableDirections.Add(ECardinalNodeDirections::Right);
		walkableDirections.Add(ECardinalNodeDirections::Left);
		break;
	}

	SetFloorNodeWallInfo(ECardinalNodeDirections::Left,
	                     FVector(0, -110, 210),
	                     FRotator(0, 0, 0));

	SetFloorNodeWallInfo(ECardinalNodeDirections::Down,
	                     FVector(116.0, -1.0, 210),
	                     FRotator(0, 90, 0));

	SetFloorNodeWallInfo(ECardinalNodeDirections::Right,
	                     FVector(0.0, 120, 210),
	                     FRotator(0, 180, 0));

	SetFloorNodeWallInfo(ECardinalNodeDirections::Up,
	                     FVector(-121.0, -8, 210),
	                     FRotator(0, 270, 0));

	SetLevelNode(walkableDirections);
}

void AFloorNode::SetLevelNode(TArray<ECardinalNodeDirections> aWalkableDirections)
{
	walkableDirections = aWalkableDirections;

	for (int i = 0; i < cardinalNodeDirections.Num(); i++)
	{
		ECardinalNodeDirections direction = cardinalNodeDirections[i];
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
	positionInGrid = aPosition;
}

bool AFloorNode::IsDirectionWalkable(ECardinalNodeDirections aDirection)
{
	if (walkableDirections.Num() == 0)
	{
		return false;
	}

	for (int i = 0; i < walkableDirections.Num(); i++)
	{
		if (walkableDirections[i] == aDirection)
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

	cardinalNodeDirections.Add(ECardinalNodeDirections::Up);
	cardinalNodeDirections.Add(ECardinalNodeDirections::Down);
	cardinalNodeDirections.Add(ECardinalNodeDirections::Left);
	cardinalNodeDirections.Add(ECardinalNodeDirections::Right);
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
	if (hasFloorEvent)
	{
		floorEventHasBeenTriggeredEvent.Broadcast(positionInGrid);
	}
}

void AFloorNode::SetFloorGimmick(UGimmick_Base* aGimmick)
{
	ActiveNodeGimmick = aGimmick;
}
