// Copyright Epic Games, Inc. All Rights Reserved.


#include "DesentIntoAtlantisGameModeBase.h"

#include "FloorPlayerController.h"

ADesentIntoAtlantisGameModeBase::ADesentIntoAtlantisGameModeBase()
{
    bNetLoadOnClient = false;
    bPauseable = true;
    bStartPlayersAsSpectators = false;

    
    PlayerControllerClass = AFloorPlayerController::StaticClass();
}
