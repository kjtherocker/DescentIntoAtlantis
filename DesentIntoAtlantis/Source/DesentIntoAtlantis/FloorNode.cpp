#include "FloorNode.h"

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
			walkableDirections.Add( ECardinalNodeDirections::Up);
		break;

		case ECardinalNodeDirections::Down:
			walkableDirections.Add( ECardinalNodeDirections::Down);
		break;

		case  ECardinalNodeDirections::Left:
			walkableDirections.Add( ECardinalNodeDirections::Left);
		break;

		case  ECardinalNodeDirections::Right:
			walkableDirections.Add( ECardinalNodeDirections::Right);
		break;

		case  ECardinalNodeDirections::AllSidesOpen:
           walkableDirections.Add(ECardinalNodeDirections:: Up);
           walkableDirections.Add( ECardinalNodeDirections::Down);
           walkableDirections.Add( ECardinalNodeDirections::Right);
           walkableDirections.Add( ECardinalNodeDirections::Left);
        break;

		case  ECardinalNodeDirections::UpDown:
			walkableDirections.Add( ECardinalNodeDirections::Up);
			walkableDirections.Add( ECardinalNodeDirections::Down);
		break;

		case  ECardinalNodeDirections::UpLeft:
			walkableDirections.Add( ECardinalNodeDirections::Up);
			walkableDirections.Add( ECardinalNodeDirections::Left);
		break;

		case  ECardinalNodeDirections::Upright:
			walkableDirections.Add( ECardinalNodeDirections::Up);
			walkableDirections.Add( ECardinalNodeDirections::Right);
		break;

		case  ECardinalNodeDirections::LeftDown:
			walkableDirections.Add( ECardinalNodeDirections::Down);
			walkableDirections.Add( ECardinalNodeDirections::Left);
		break;

		case  ECardinalNodeDirections::RightDown:
			walkableDirections.Add(ECardinalNodeDirections:: Down);
			walkableDirections.Add( ECardinalNodeDirections::Right);
		break;

		case  ECardinalNodeDirections::LeftRight:
			walkableDirections.Add( ECardinalNodeDirections::Right);
			walkableDirections.Add( ECardinalNodeDirections::Left);
		break;

		case  ECardinalNodeDirections::UpLeftRight:
			walkableDirections.Add(ECardinalNodeDirections::Up);
			walkableDirections.Add(ECardinalNodeDirections::Right);
			walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

		case  ECardinalNodeDirections::UpLeftDown:
			walkableDirections.Add(ECardinalNodeDirections::Up);
			walkableDirections.Add(ECardinalNodeDirections::Down);
			walkableDirections.Add(ECardinalNodeDirections::Left);
		break;
       
		case ECardinalNodeDirections::UpRightDown:
			walkableDirections.Add(ECardinalNodeDirections::Up);
			walkableDirections.Add(ECardinalNodeDirections::Down);
			walkableDirections.Add(ECardinalNodeDirections::Right);
		break;

		case  ECardinalNodeDirections::DownLeftRight:
			walkableDirections.Add(ECardinalNodeDirections::Down);
			walkableDirections.Add(ECardinalNodeDirections::Right);
			walkableDirections.Add(ECardinalNodeDirections::Left);
		break;

	}
	
	SetLevelNode(walkableDirections);
}

void AFloorNode::SetLevelNode(TArray<ECardinalNodeDirections> aWalkableDirections)
{
	if(nodeWalls.Num() <= 0)
	{
		return;
	}
	
	for(int i = 1 ; i < nodeWalls.Num();i++)
	{
		nodeWalls[i]->SetVisibility(true);
	}
	
	walkableDirections = aWalkableDirections;

	for (ECardinalNodeDirections directions : walkableDirections)
	{
		nodeWalls[(int)directions]->SetVisibility(false);
	}

}

void AFloorNode::SetPositionInGrid(FVector2D aPosition)
{
	positionInGrid = aPosition;
}

bool AFloorNode::IsDirectionWalkable(ECardinalNodeDirections aDirection)
{
	if(walkableDirections.Num() == 0)
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

	GetComponents<UStaticMeshComponent>(nodeWalls);
}
