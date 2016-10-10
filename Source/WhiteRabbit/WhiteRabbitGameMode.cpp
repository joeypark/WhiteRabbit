// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "WhiteRabbit.h"
#include "WhiteRabbitGameMode.h"
#include "WhiteRabbitPlayerController.h"
#include "WhiteRabbitCharacter.h"

AWhiteRabbitGameMode::AWhiteRabbitGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AWhiteRabbitPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}