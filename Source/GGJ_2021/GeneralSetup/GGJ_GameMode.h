// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GGJ_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class GGJ_2021_API AGGJ_GameMode : public AGameMode
{
	GENERATED_BODY()

	void BeginPlay() override;

protected:
	void NativeOnControllerConnectionChanged(bool bIsConnected, FPlatformUserId UserID, int32 UserIndex);

	UFUNCTION(BlueprintNativeEvent)
	void OnControllerConnectionChanged(bool bIsConnected, int32 UserIndex);

	UFUNCTION(BlueprintCallable)
	int GetConnectedGamepads();
};
