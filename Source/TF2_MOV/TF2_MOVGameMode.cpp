// Copyright Epic Games, Inc. All Rights Reserved.

#include "TF2_MOVGameMode.h"
#include "TF2_MOVHUD.h"
#include "TF2_MOVCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATF2_MOVGameMode::ATF2_MOVGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATF2_MOVHUD::StaticClass();
}
