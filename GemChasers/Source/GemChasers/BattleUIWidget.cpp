// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleUIWidget.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "Components/Overlay.h"
#include "PlayerPawn.h"
#include "BattleArea.h"

UBattleUIWidget::UBattleUIWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}
void UBattleUIWidget::NativeConstruct()
{
	Super::NativeConstruct();
	playerActor = Cast<APlayerPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
	UButton* btn = Cast<UButton>(GetWidgetFromName(FName("BTN")));

	stops[0] = -120;
	stops[1] = -60;
	stops[2] = 0;
	stops[3] = 60;
	stops[4] = 120;
	stops[5] = 180;

	btn->OnClicked.AddDynamic(this, &UBattleUIWidget::StartRotation);
}

void UBattleUIWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	UOverlay* wheel = Cast<UOverlay>(GetWidgetFromName(FName("Wheel")));

	if (isRotating)
	{
		float rotInc = InDeltaTime * 1440;
		if (rotation + rotInc > 180)
		{
			rotation = -180;
		}
		else
		{
			rotation += rotInc;
		}
	}
	int temp = rotation;
	if (GetWorld()->GetRealTimeSeconds() - timeRotationStarted >= 2)
	{
		isRotating = false;
		rotation = stops[spotStop];
	}

	//SET ROTATION FOR
	wheel->SetRenderTransformAngle(rotation);

}

void UBattleUIWidget::StartRotation()
{
	if (playerActor->currentBattleArea)
	{
		playerActor->currentBattleArea->Destroy();
		//playerActor->currentBattleArea = NULL;
	}
	rotation = 0;
	isRotating = true;
	if (GetWorld()) 
	{
		timeRotationStarted = GetWorld()->GetRealTimeSeconds();
	}
	spotStop = FMath::FRand() * 5.0f;
}

