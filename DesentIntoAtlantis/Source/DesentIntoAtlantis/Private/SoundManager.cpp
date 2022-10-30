// Fill out your copyright notice in the Description page of Project Settings.
#include "SoundManager.h"
#include "Components/AudioComponent.h"


// Sets default values
ASoundManager::ASoundManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

void ASoundManager::PlayAudio(EAudioSources aAudioSource, EAudio aSoundEffect)
{
	UAudioComponent* audioSource = audioSources[aAudioSource];
	audioSource->Sound = soundEffects[aSoundEffect];
	audioSource->Play();
}

void ASoundManager::SetAudioPauseState(EAudioSources aAudioSource,bool aIsPaused)
{
	UAudioComponent* audioSource = audioSources[aAudioSource];
	audioSource->SetPaused(aIsPaused);
}

// Called when the game starts or when spawned
void ASoundManager::BeginPlay()
{
	Super::BeginPlay();
	TArray<UAudioComponent*> audioComponent;
	GetComponents(audioComponent);

	audioSources.Add(EAudioSources::OverworldMusic,       audioComponent[0]);
	audioSources.Add(EAudioSources::CombatMusic,          audioComponent[1]);
	audioSources.Add(EAudioSources::OverworldSoundEffect, audioComponent[2]);
	audioSources.Add(EAudioSources::CombatSoundEffect,    audioComponent[3]);
	
}

// Called every frame
void ASoundManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

