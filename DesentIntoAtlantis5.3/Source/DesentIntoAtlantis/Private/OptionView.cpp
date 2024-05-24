// Fill out your copyright notice in the Description page of Project Settings.


#include "OptionView.h"

#include "AtlantisGameModeBase.h"

void UOptionView::UiInitialize(AAtlantisGameModeBase* aGameModeBase)
{
	Super::UiInitialize(aGameModeBase);
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UOptionView::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UOptionView::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UOptionView::ActivateMenuSelection  );
	InputComponent->BindAction("Escape"   ,IE_Pressed ,this, &UOptionView::PopMostActiveView  );

	//Goes In this order
	CreateAndBindDelegateOption(&UOptionView::Load       ,TEXT("Load"),BW_Load);
	CreateAndBindDelegateOption(&UOptionView::Save       ,TEXT("Save"),BW_Save);
	CreateAndBindDelegateOption(&UOptionView::Setting    ,TEXT("Setting"),BW_Setting);
	CreateAndBindDelegateOption(&UOptionView::Exit       ,TEXT("Exit"),BW_Exit);
	
	SetDefaultMenuState();
}

void UOptionView::CreateAndBindDelegateOption(
	TMemFunPtrType<false, UOptionView, void()>::Type InFunc, const FName& FuncName, UBorder* aMenuSelection)
{
	FViewSelection newViewSelection;
	newViewSelection.__Internal_AddDynamic(this,InFunc,FuncName);
	MenuSelectionDelegates.Add(newViewSelection );
	menuSelections.Add(aMenuSelection);
}


void UOptionView::Load()
{
	gameModeBase->InGameHUD->PopAllActiveViews();
	gameModeBase->InGameHUD->PushView(EViews::LoadView,    EUiType::ActiveUi);
}

void UOptionView::Save()
{
	gameModeBase->InGameHUD->PopAllActiveViews();
	gameModeBase->InGameHUD->PushView(EViews::SaveView,    EUiType::ActiveUi);
}

void UOptionView::Setting()
{

}

void UOptionView::Exit()
{
}
