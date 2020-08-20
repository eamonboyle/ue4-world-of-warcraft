// Copyright Epic Games, Inc. All Rights Reserved.

#include "WoWCloneGameMode.h"
#include "WoWCloneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWoWCloneGameMode::AWoWCloneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
