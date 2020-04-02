// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleUIWidget.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "Components/Overlay.h"
#include "PlayerPawn.h"
#include "BattleArea.h"
#include "Components/CanvasPanelSlot.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "Engine.h"

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
	/*UOverlay* wheel = Cast<UOverlay>(GetWidgetFromName(FName("Wheel")));

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
	
	//GetViewport
	FVector2D viewportSize;
	// as this function returns through the parameter, we just need to call it by passing in our FVector2D variable
	GEngine->GameViewport->GetViewportSize(viewportSize);
	int32 X = FGenericPlatformMath::FloorToInt(viewportSize.X);
	int32 Y = FGenericPlatformMath::FloorToInt(viewportSize.Y);
	float scale = GetDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass())->GetDPIScaleBasedOnSize(FIntPoint(X, Y));

	GetWorld()->GetFirstPlayerController()->GetMousePosition(mousePos.X,mousePos.Y);
	UCanvasPanelSlot* wheelSlot = Cast<UCanvasPanelSlot>(wheel->Slot);
	FVector2D w = wheelSlot->GetPosition();
	FVector2D wheelSize = wheelSlot->GetSize();
	w.Set(w.X + ((wheelSize.X * scale) / 2), w.Y + ((wheelSize.Y * scale) / 2));
	FVector2D currentPoint = (mousePos - w);
	currentPoint.Normalize();
	float angle = FMath::RadiansToDegrees(acosf(FVector2D::DotProduct(currentPoint, FVector2D(1,0))));
	GLog->Log(FString::FromInt(angle));*/
}

void UBattleUIWidget::StartRotation()
{
	if (playerActor) 
	{
		if (playerActor->currentBattleArea)
		{
			if (!playerActor->currentBattleArea->IsPendingKill() && playerActor->currentBattleArea->IsValidLowLevel()) 
			{
				rotation = 0;
				isRotating = true;
				timeRotationStarted = GetWorld()->GetRealTimeSeconds();
				spotStop = FMath::FRand() * 5.0f;
				//playerActor->currentBattleArea->Destroy();
				//playerActor->currentBattleArea = NULL;
			}
		}
	}
}

