// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandBoard.h"

#include "CombatEntity.h"
#include "CombatManager.h"
#include "EngineUtils.h"
#include "Components/TextBlock.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "DesentIntoAtlantis/DesentIntoAtlantisGameModeBase.h"
#include "Engine/ObjectLibrary.h"
#include "Kismet/GameplayStatics.h"

void UCommandBoard::UiInitialize()
{
	
	InitializeInputComponent();
	
	InputComponent->BindAction("Up"      ,IE_Pressed ,this, &UCommandBoard::MoveUp  );
	InputComponent->BindAction("Down"    ,IE_Pressed ,this, &UCommandBoard::MoveDown  );
	InputComponent->BindAction("Enter"   ,IE_Pressed ,this, &UCommandBoard::ActivateCommandboardFunction  );
	
	ADesentIntoAtlantisGameModeBase* GameModeBase = Cast< ADesentIntoAtlantisGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	currentActivePartyMember = GameModeBase->combatManager->ReturnCurrentActivePartyMember();

	BW_FullBodyPortrait->SetBrushFromTexture(currentActivePartyMember->fullBodyCharacterPortrait);
	
	commandBoards.Add(B_Attack);
	commandBoards.Add(B_Skill);
	commandBoards.Add(B_Domain);
	commandBoards.Add(B_Item);
	commandBoards.Add(B_Escape);
	commandBoards.Add(B_Pass);

	for(int i = 0 ; i < commandBoards.Num();i++)
	{
		commandBoards[i]->SetBrushColor(unhightlighedColor);
	}

	commandBoards[0]->SetBrushColor(highlightedColor);

	//commandBoardFunction.BindSP(this,&UCommandBoard::Attack);
		
	//	CommandBoardFunctions.Add();
}

void UCommandBoard::MoveUp()
{
	commandBoards[cursorPosition]->SetBrushColor(unhightlighedColor);

	cursorPosition--;

	if(-1 == cursorPosition)
	{
		cursorPosition = commandBoards.Num() - 1;
	}
	
	commandBoards[cursorPosition]->SetBrushColor(highlightedColor);
}

void UCommandBoard::MoveDown()
{
	commandBoards[cursorPosition]->SetBrushColor(unhightlighedColor);

	cursorPosition++;

	if(cursorPosition >= commandBoards.Num())
	{
		cursorPosition = 0;
	}

	commandBoards[cursorPosition]->SetBrushColor(highlightedColor);
	
}

void UCommandBoard::ActivateCommandboardFunction()
{
	InGameHUD->PopMostRecentActiveView();
	InGameHUD->PushView(EViews::SkillMenu,EUiType::ActiveUi);
}

void UCommandBoard::Attack()
{
	int testo = 0 ; 
}

void UCommandBoard::Testo()
{
	//FString filepath("/Game/Ui/uiTextures");  // without extension, path start with `/Game`, `/Game` refer-> `Content` folder in real.
	//FStringAssetReference asset_stream_ref(filepath);
	//TAssetPtr<UTexture> imageAsset(asset_stream_ref);
	//UTexture* animation = imageAsset.LoadSynchronous();
//
	//
	//UObjectLibrary* lib = UObjectLibrary::CreateLibrary(UTexture::StaticClass(), false, GIsEditor);
	//lib->AddToRoot();
	//lib->LoadAssetDataFromPath(folderpath);
	//lib->LoadAssetsFromAssetData();
//
	//TArray<FAssetData> asset_data;
	//lib->GetAssetDataList(asset_data);
//
	//UTexture2D* testoo = (UTexture2D*)asset_data[4].GetAsset();
	//if(testoo != nullptr)
	//{
	//	UndineImage->SetBrushFromTexture(testoo);
	//}
}
