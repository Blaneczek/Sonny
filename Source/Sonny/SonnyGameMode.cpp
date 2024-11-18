// Copyright Epic Games, Inc. All Rights Reserved.

#include "SonnyGameMode.h"
#include "SonnyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASonnyGameMode::ASonnyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
