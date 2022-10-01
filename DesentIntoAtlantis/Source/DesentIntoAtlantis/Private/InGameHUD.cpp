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
        newView->viewName = aView;
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

UUserWidget* AInGameHUD::GetActiveHUDView(EViews aView, EUiType aUiType)
{
    TArray<UBaseUserWidget*> viewArray = aUiType == EUiType::ActiveUi ? activeViewStack : persistentViewStack;
    for(int i = 0 ; i < viewArray.Num();i++)
    {
        if(viewArray[i]->viewName == aView)
        {
            return viewArray[i];
        }
    }

    UE_LOG(LogUObjectGlobals, Fatal, TEXT("We tried to get an view that isnt currently active"), aView);
    return nullptr;
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

void AInGameHUD::PopAllActiveViews()
{
    for(int i = activeViewStack.Num() - 1 ; i >= 0 ;i--)
    {
        activeViewStack[i]->RemoveFromViewport();
        activeViewStack.RemoveAt(i);
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
