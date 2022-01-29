// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalaxyGameMode.h"
#include "GalaxyHUD.h"
#include "GalaxyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGalaxyGameMode::AGalaxyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGalaxyHUD::StaticClass();
}
