// Copyright Epic Games, Inc. All Rights Reserved.

#include "MicroMMOGameMode.h"
#include "MicroMMOPlayerController.h"
#include "MicroMMOCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMicroMMOGameMode::AMicroMMOGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMicroMMOPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}