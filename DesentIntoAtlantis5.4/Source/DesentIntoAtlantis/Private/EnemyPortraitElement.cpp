// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPortraitElement.h"

#include "CombatGameModeBase.h"
#include "EnemyCombatEntity.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"

AEnemyPortraitElement::AEnemyPortraitElement()
{
	
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyPortraitElement::SetCombatEntity(UEnemyCombatEntity* aCombatEntity)
{
	//BW_Portrait->SetBrushFromTexture(aCombatEntity->enemyEntityData.fullBodyCharacterPortrait);
	aCombatEntity->wasDamaged.AddDynamic(this,&AEnemyPortraitElement::TriggerHitEffect);
	aCombatEntity->wasKilled.AddDynamic(this,&AEnemyPortraitElement::TriggerDisappear);
	aCombatEntity->onStatusAilmentStart.AddDynamic(this,&AEnemyPortraitElement::TriggerAilmentEffect);
	aCombatEntity->onStatusAilmentEnd.AddDynamic(this,&AEnemyPortraitElement::TurnOffAilmentEffect);
	
	currentEnemyMaterialInterface = aCombatEntity->enemyEntityData.fullBodyCharacterPortrait;;
	TArray<AActor*> ChildActorArray;
	GetAllChildActors(ChildActorArray);
	
	PlaneMeshComponent = nullptr ;
	
	TArray<UStaticMeshComponent*> Components;
	GetComponents<UStaticMeshComponent>(Components);
	
	for(UStaticMeshComponent* MeshComponent : Components)
	{
		UMaterialInterface* CurrentMaterial = currentEnemyMaterialInterface;
		materialInstanceDynamic = UMaterialInstanceDynamic::Create(CurrentMaterial, this);

		if (materialInstanceDynamic != nullptr) 
		{
			//materialInstanceDynamic->SetScalarParameterValue(FName("Red"), 1);
			
			MeshComponent->SetMaterial(0, materialInstanceDynamic);
		}
	}

	ResetPortraitRotationToDefault();
}

void AEnemyPortraitElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(!isTriggeringDisappear)
	{
		if(isTriggeringHitEffect)
		{
			HitEffect(DeltaTime);
		}
	}
	else
	{
		isTriggeringHitEffect = false;
		Disappear(DeltaTime);
	}
}

void AEnemyPortraitElement::RotateTowardsCamera()
{
	// Get the player controller
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerController) return;

	// Get the camera location
	FVector CameraLocation;
	FRotator CameraRotation;
	PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

	FVector ActorLocation = GetActorLocation();

	// Calculate the direction vector in the XY plane
	FVector Direction = INITIAL_CAMERA_POSITION - ActorLocation;
	Direction.Z = 0.0f; // Ignore the Z component

	// Normalize the direction vector
	Direction.Normalize();

	// Calculate the yaw angle
	float YawAngle = FMath::Atan2(Direction.Y, Direction.X) * (180.0f / PI);

	// Ensure the yaw angle is within the correct range
	//if (YawAngle < 0.0f)
	//{
	//	YawAngle += 360.0f;
	//}

	// Print debug information
	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Camera Location: %s"), *CameraLocation.ToString()));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Actor Location: %s"), *ActorLocation.ToString()));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Direction: %s"), *Direction.ToString()));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Yaw Angle: %f"), YawAngle));
	//}

	// Create a new rotation that only affects the Z-axis
	FRotator NewRotation(0.0f, YawAngle, 0.0f);

	// Set the actor's rotation to the new rotation
	SetActorRotation(NewRotation);
}

void AEnemyPortraitElement::ResetPortraitRotationToDefault()
{
	SetActorRotation(DEFAULT_ROTATION);
}

void AEnemyPortraitElement::TriggerAilmentEffect(EStatusAilments aStatusAilment)
{
	switch (aStatusAilment) {
	case EStatusAilments::None:
		break;
	case EStatusAilments::Fear:
		materialInstanceDynamic->SetScalarParameterValue(FName("Fear"), 5);
		break;
	case EStatusAilments::Poison:
		break;
	case EStatusAilments::Daze:
		break;
	case EStatusAilments::Sleep:
		break;
	case EStatusAilments::Rage:
		break;
	}
}

void AEnemyPortraitElement::TurnOffAilmentEffect(EStatusAilments aStatusAilment)
{
	switch (aStatusAilment) {
	case EStatusAilments::None:
		break;
	case EStatusAilments::Fear:
		materialInstanceDynamic->SetScalarParameterValue(FName("Fear"), 0);
		break;
	case EStatusAilments::Poison:
		break;
	case EStatusAilments::Daze:
		break;
	case EStatusAilments::Sleep:
		break;
	case EStatusAilments::Rage:
		break;
	}
}


void AEnemyPortraitElement::HitEffect(float DeltaTime)
{
	if(hitEffectTimer >= 0.5f)
	{
		hitEffectTimer = 0;
		materialInstanceDynamic->SetScalarParameterValue(FName("Red"), hitEffectTimer);
		isTriggeringHitEffect = false;
		return;
	}
	
	hitEffectTimer += DeltaTime;
	materialInstanceDynamic->SetScalarParameterValue(FName("Red"), hitEffectTimer);
}


void AEnemyPortraitElement::Disappear(float DeltaTime)
{
	if(disappearTimer <= 0)
	{
		disappearTimer = 1;
		materialInstanceDynamic->SetScalarParameterValue(FName("Opacity"), 0);
		isTriggeringDisappear = false;
		return;
	}
	
	disappearTimer -= DeltaTime * 3;	

	materialInstanceDynamic->SetScalarParameterValue(FName("Opacity"), disappearTimer);
	//BW_Portrait->SetOpacity(0);
}

void AEnemyPortraitElement::TriggerHitEffect()
{
	isTriggeringHitEffect = true;
}

void AEnemyPortraitElement::TriggerDisappear()
{
	isTriggeringDisappear = true;
}
