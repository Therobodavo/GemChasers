// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GEMCHASERS_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AMainPlayerController();
protected:
	virtual void BeginPlay() override;
public:
	virtual void SetupInputComponent() override;

	UPROPERTY()
		class UUserWidget* battleUIWidget;
		class UUserWidget* wanderingUIWidget;
	UPROPERTY()
		class UGemChasersInstance* instance;
	
};
