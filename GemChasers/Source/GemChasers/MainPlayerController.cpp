// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "PlayerPawn.h"

//APlayerPawn* player = NULL;

AMainPlayerController::AMainPlayerController() 
{
}

void AMainPlayerController::BeginPlay()
{
	//player = Cast<APlayerPawn>(GetPawn());
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("",this, &AMainPlayerController::MoveForward);
	InputComponent->BindAxis("", this, &AMainPlayerController::MoveRight);
}

void AMainPlayerController::MoveForward(float f)
{
	
}

void AMainPlayerController::MoveRight(float r)
{

}
