// Copyright Epic Games, Inc. All Rights Reserved.

#include "AimSharpGameMode.h"
#include "AimSharpCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAimSharpGameMode::AAimSharpGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
