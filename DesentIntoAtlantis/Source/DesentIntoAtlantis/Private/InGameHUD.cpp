// Fill out your copyright notice in the Description page of Project Settings.
#include "InGameHUD.h"
#include "CommandBoardView.h"
#include "DesentIntoAtlantis/FloorGameMode.h"
#include "Kismet/GameplayStatics.h"


void AInGameHUD::BeginPlay()
{
    Super::BeginPlay();
    gameModeBase = Cast< AFloorGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

    if(gameModeBase == nullptr)
    {
        int test = 0;
    }
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
        newView->UiInitialize(gameModeBase);
        newView->SetViewInfo(aView, aUiType);
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

UUserWidget* AInGameHUD::PushAndGetView(EViews aView, EUiType aUiType)
{
    PushView(aView,aUiType);

    return GetActiveHUDView(aView, aUiType);
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

void AInGameHUD::PopAllPersistantViews()
{
    for(int i = persistentViewStack.Num() - 1 ; i >= 0 ;i--)
    {
        persistentViewStack[i]->RemoveFromViewport();
        persistentViewStack.RemoveAt(i);
    }
}

void AInGameHUD::PushMostRecentInActiveView()
{
    if(inactiveViewStack.Num() > 0)
    {
        int lastInActiveElement = inactiveViewStack.Num() -1;
        const UBaseUserWidget* baseUserWidget = inactiveViewStack[lastInActiveElement];
        PushView( baseUserWidget->view, baseUserWidget->UiType);
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
        const UBaseUserWidget* baseUserWidget = inactiveViewStack[lastInActiveElement];
        PushView( baseUserWidget->view, baseUserWidget->UiType);
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
