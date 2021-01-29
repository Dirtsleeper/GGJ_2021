// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJ_GameMode.h"
#include "Misc/CoreDelegates.h"

void AGGJ_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FCoreDelegates::OnControllerConnectionChange.AddUObject(this, &AGGJ_GameMode::NativeOnControllerConnectionChanged);
}

void AGGJ_GameMode::NativeOnControllerConnectionChanged(bool bIsConnected, FPlatformUserId UserID, int32 UserIndex)
{
	OnControllerConnectionChanged(bIsConnected, UserIndex);
}

int AGGJ_GameMode::GetConnectedGamepads()
{
	return 0;
}

void AGGJ_GameMode::OnControllerConnectionChanged_Implementation(bool bIsConnected, int32 UserIndex)
{

}
