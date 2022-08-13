// Fill out your copyright notice in the Description page of Project Settings.

#include "CommandBoard.h"
#include "InGameHUD.h"

void AInGameHUD::BeginPlay()
{
    Super::BeginPlay();

}

void AInGameHUD::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void AInGameHUD::PushView(EViews aView)
{
    UBaseUserWidget* newView = CreateWidget<UBaseUserWidget>(GetWorld(),userWidgets[aView]);
    if(newView)
    {
        newView->InGameHUD = this;
        newView->UiInitialize();
        newView->AddToViewport();
        viewStack.Add(newView);
    }
}

TSubclassOf<UUserWidget> AInGameHUD::GetElement(EViewElements aViewElement)
{
    if(viewElements.Contains(aViewElement))
    {
        return viewElements[aViewElement];
    }
    return nullptr;
}
