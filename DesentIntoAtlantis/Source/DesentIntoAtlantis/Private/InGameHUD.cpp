// Fill out your copyright notice in the Description page of Project Settings.
#include "InGameHUD.h"
#include "CommandBoard.h"


void AInGameHUD::BeginPlay()
{
    Super::BeginPlay();

}

void AInGameHUD::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void AInGameHUD::PushView(EViews aView, EUiType aUiType)
{
    UBaseUserWidget* newView = CreateWidget<UBaseUserWidget>(GetWorld(),userWidgets[aView]);
    if(newView)
    {
        newView->InGameHUD = this;
        newView->UiInitialize();
        newView->AddToViewport();
        
        switch (aUiType)
        { 
        case EUiType::ActiveUi:
            {
                activeViewStack.Add(newView);
                break;
            }
        case EUiType::PersistentUi:
            {
                persistentViewStack.Add(newView);
                break;
            }
        }
  
    }
}

void AInGameHUD::PopMostRecentActiveView()
{
    if(activeViewStack.Num() > 0)
    {
        int lastActiveElement = activeViewStack.Num() -1;
        activeViewStack[lastActiveElement]->RemoveFromViewport();
        inactiveViewStack.Add(activeViewStack[activeViewStack.Num() -1]);
        activeViewStack.RemoveAt(lastActiveElement);
    }
}

void AInGameHUD::PushMostRecentInActiveView()
{
    if(inactiveViewStack.Num() > 0)
    {
        int lastInActiveElement = inactiveViewStack.Num() -1;
        inactiveViewStack[lastInActiveElement]->AddToViewport();
        inactiveViewStack.RemoveAt(lastInActiveElement);
    }
}

void AInGameHUD::ReturnToPreviousActiveView()
{
    if( inactiveViewStack.Num() > 0
       && activeViewStack.Num() > 0)
    {
        int lastInActiveElement = inactiveViewStack.Num() -1;
        int lastActiveElement = activeViewStack.Num() -1;
    
        activeViewStack[lastActiveElement]->RemoveFromViewport();
        activeViewStack.RemoveAt(lastActiveElement);

        inactiveViewStack[lastInActiveElement]->UiInitialize();
        inactiveViewStack[lastInActiveElement]->AddToViewport();
        activeViewStack.Add(inactiveViewStack[lastInActiveElement]);

        inactiveViewStack.RemoveAt(lastInActiveElement);
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
