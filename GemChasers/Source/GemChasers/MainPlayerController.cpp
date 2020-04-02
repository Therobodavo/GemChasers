// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "PlayerPawn.h"
#include "GameFramework/HUD.h"
#include "BattleUIWidget.h"
#include "GemChasersInstance.h"
#include "WanderingUIWidget.h"

AMainPlayerController::AMainPlayerController() 
{
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();
	instance = Cast<UGemChasersInstance>(GetGameInstance());
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	battleUIWidget = Cast<UBattleUIWidget>(CreateWidget<UUserWidget>(GetWorld(), instance->battleUI));
	wanderingUIWidget = Cast<UWanderingUIWidget>(CreateWidget<UUserWidget>(GetWorld(), instance->wanderingUI));
	//battleUIWidget->AddToViewport();
	wanderingUIWidget->AddToViewport();
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}
