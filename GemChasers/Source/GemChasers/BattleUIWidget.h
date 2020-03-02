// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BattleUIWidget.generated.h"

/**
 *
 */
UCLASS()
class GEMCHASERS_API UBattleUIWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UBattleUIWidget(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION()
		void StartRotation();

	UPROPERTY()
		float rotation = 0;

	UPROPERTY()
		bool isRotating = false;

	UPROPERTY()
		float timeRotationStarted = 0;

	UPROPERTY()
		int spotStop = 0;

	UPROPERTY()
		int stops[6] = { -120,-60,0,60,120,180 };

	UPROPERTY()
		class APlayerPawn* playerActor;
};
