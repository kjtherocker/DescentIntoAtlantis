// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "SoundManager.generated.h"

class UAudioComponent;


UENUM()
enum class EAudioSources
{
	None,
	OverworldMusic,
	CombatMusic,
	OverworldSoundEffect,
	CombatSoundEffect
};

UENUM()
enum class EAudio
{
	None           = 0,
	Accept         = 1,
	Footsteps      = 2,
	Selection      = 3,
	WallBounce     = 4,
	EnemyEncounter = 5,
	Overword       = 6,
	Combat         = 7,
	FireBall       = 8,
	MainMenu       = 9,
};

UCLASS()
class DESENTINTOATLANTIS_API ASoundManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASoundManager();
	
	void PlayAudio(EAudioSources aAudioSource,EAudio aSoundEffect);
	void SetAudioPauseState(EAudioSources aAudioSource,bool aIsPaused);
	
	UPROPERTY()
	TMap<EAudioSources,UAudioComponent*> audioSources;

	UPROPERTY(EditAnywhere, Category = "Audio")
	TMap<EAudio,USoundWave*> soundEffects;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
