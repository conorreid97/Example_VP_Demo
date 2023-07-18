// Fill out your copyright notice in the Description page of Project Settings.
#include "Framework/Application/SlateApplication.h"
#include "Framework/Application/NavigationConfig.h"

#include "PlayerControllerBase.h"

void APlayerControllerBase::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalPlayerController())
	{
		TSharedRef<FNavigationConfig> Navigation = MakeShared<FNavigationConfig>();
		Navigation->bTabNavigation = false;
		FSlateApplication::Get().SetNavigationConfig(Navigation);
	}
}
