// Copyright Epic Games, Inc. All Rights Reserved.


#include "AdaptiveFrequencyGameModeBase.h"

bool AAdaptiveFrequencyGameModeBase::PrintAdaptiveNetUpdateFrequencyEnabled()
{
	return UNetDriver::IsAdaptiveNetUpdateFrequencyEnabled();
}
