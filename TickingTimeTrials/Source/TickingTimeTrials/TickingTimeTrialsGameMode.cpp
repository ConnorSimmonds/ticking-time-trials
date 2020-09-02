// Copyright Epic Games, Inc. All Rights Reserved.

#include "TickingTimeTrialsGameMode.h"
#include "TickingTimeTrialsCharacter.h"

ATickingTimeTrialsGameMode::ATickingTimeTrialsGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATickingTimeTrialsCharacter::StaticClass();	
}
