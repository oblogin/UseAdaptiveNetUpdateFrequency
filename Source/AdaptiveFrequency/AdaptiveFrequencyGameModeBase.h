// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/NetDriver.h"
#include "GameFramework/GameModeBase.h"
#include "AdaptiveFrequencyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ADAPTIVEFREQUENCY_API AAdaptiveFrequencyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	bool PrintAdaptiveNetUpdateFrequencyEnabled();
};
