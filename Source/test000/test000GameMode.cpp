// Copyright Epic Games, Inc. All Rights Reserved.

#include "test000GameMode.h"
#include "test000PlayerController.h"
#include "test000Character.h"
#include "UObject/ConstructorHelpers.h"

Atest000GameMode::Atest000GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Atest000PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}