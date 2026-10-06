// Copyright Epic Games, Inc. All Rights Reserved.

#include "DOOMBYGameMode.h"
#include "DOOMBYPlayerController.h"

ADOOMBYGameMode::ADOOMBYGameMode()
{
	PlayerControllerClass = ADOOMBYPlayerController::StaticClass();
}
