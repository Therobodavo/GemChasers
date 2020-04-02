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
	UOverlay* innerWheel = Cast<UOverlay>(GetWidgetFromName(FName("InnerWheel")));
	UOverlay* outerWheel = Cast<UOverlay>(GetWidgetFromName(FName("OuterWheel")));
	UOverlay* mainWheel = Cast<UOverlay>(GetWidgetFromName(FName("WheelUI")));
	UOverlay* moveOverlay = Cast<UOverlay>(GetWidgetFromName(FName("MoveOverlay")));
	UImage* hoverImage = Cast<UImage>(GetWidgetFromName(FName("Hover")));
	UImage* selectedImage = Cast<UImage>(GetWidgetFromName(FName("Selected")));

	if (isRotating)
	{
		float rotInc = InDeltaTime * 1440;
		if (outerRotation + rotInc > 180)
		{
			outerRotation = -180;
		}
		else
		{
			outerRotation += rotInc;
		}

		if (innerRotation - rotInc < -180) 
		{
			innerRotation = 180;
		}
		else 
		{
			innerRotation -= rotInc;
		}


	}
	if (GetWorld()->GetRealTimeSeconds() - timeRotationStarted >= 2)
	{
		isRotating = false;
		outerRotation = stops[outerSpotStop];
		innerRotation = stops[innerSpotStop];
	}
	if (outerWheel && innerWheel) 
	{
		//SET ROTATION FOR
		outerWheel->SetRenderTransformAngle(outerRotation);
		innerWheel->SetRenderTransformAngle(innerRotation);
	}

	
	//GetViewport
	FVector2D viewportSize;
	// as this function returns through the parameter, we just need to call it by passing in our FVector2D variable
	GEngine->GameViewport->GetViewportSize(viewportSize);
	int32 X = FGenericPlatformMath::FloorToInt(viewportSize.X);
	int32 Y = FGenericPlatformMath::FloorToInt(viewportSize.Y);
	float dpi = GetDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass())->GetDPIScaleBasedOnSize(FIntPoint(X, Y));
	if (mainWheel) 
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(mousePos.X, mousePos.Y);
		UCanvasPanelSlot* wheelSlot = Cast<UCanvasPanelSlot>(mainWheel->Slot);
		FVector2D wheelPosition = wheelSlot->GetPosition();
		FVector2D wheelSize = wheelSlot->GetSize();
		FVector2D wheelScale = mainWheel->RenderTransform.Scale;

		//Scales wheel size and position
		//position based off middle
		wheelSize.Set(wheelSize.X * dpi * wheelScale.X, wheelSize.Y * dpi * wheelScale.Y);
		wheelPosition.Set((wheelPosition.X * dpi * wheelScale.X) + (wheelSize.X / 2), (wheelPosition.Y * dpi * wheelScale.Y) + (wheelSize.Y / 2));

		FVector2D currentPoint = (mousePos - wheelPosition);
		currentPoint.Normalize();
		float dir = FVector2D::DotProduct(currentPoint, FVector2D(1, 0));
		float angle = FMath::RadiansToDegrees(acosf(dir));

		bool isHovering = false;

		if (!isRotating && moveOverlay && hoverImage && selectedImage && mousePos.Y <= wheelPosition.Y && (mousePos - wheelPosition).Size() <= (wheelSize.X / 2))
		{
			isHovering = true;
			//Hit left triangle
			if (angle >= 120 && angle <= 180) 
			{
				//GLog->Log("Hit Left");
				moveOverlay->SetRenderTransformAngle(-60);
			}
			//Hit middle triangle
			else if (angle >= 60 && angle < 120) 
			{
				//GLog->Log("Hit Middle");
				moveOverlay->SetRenderTransformAngle(0);
			}
			//Hit right triangle
			else if (angle >= 0 && angle < 60) 
			{
				//GLog->Log("Hit Right");
				moveOverlay->SetRenderTransformAngle(60);
			}
		}
		if (isHovering && hoverImage && selectedImage) 
		{
			hoverImage->SetRenderOpacity(1);
			selectedImage->SetRenderOpacity(0);
		}
		else 
		{
			hoverImage->SetRenderOpacity(0);
		}
		//GLog->Log("Distance: " + FString::SanitizeFloat((mousePos - wheelPosition).Size()));
		//GLog->Log("Half Circle: " + FString::SanitizeFloat(wheelSize.X / 2));
		//GLog->Log("Current Mouse: " + FString::FromInt(mousePos.X) + ", " + FString::FromInt(mousePos.Y));
		GLog->Log("Angle: " + FString::FromInt(angle));
	}
}

void UBattleUIWidget::StartRotation()
{
	if (playerActor) 
	{
		if (playerActor->currentBattleArea)
		{
			if (!playerActor->currentBattleArea->IsPendingKill() && playerActor->currentBattleArea->IsValidLowLevel()) 
			{
				isRotating = true;
				timeRotationStarted = GetWorld()->GetRealTimeSeconds();
				innerSpotStop = FMath::FRand() * 5.0f;
				outerSpotStop = FMath::FRand() * 5.0f;
				//playerActor->currentBattleArea->Destroy();
				//playerActor->currentBattleArea = NULL;
			}
		}
	}
}

