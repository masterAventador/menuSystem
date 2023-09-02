// Copyright Epic Games, Inc. All Rights Reserved.

#include "menuSystemGameMode.h"
#include "menuSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmenuSystemGameMode::AmenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
