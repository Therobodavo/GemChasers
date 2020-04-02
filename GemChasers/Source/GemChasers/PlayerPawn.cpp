// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/InputComponent.h"
#include "Engine.h"
#include "EngineUtils.h"
#include <BattleArea.h>
#include "BattleAreaSpawnPoint.h"
#include <GemChasers\GemChasersInstance.h>
#include "TestEnemy.h"

TArray<USceneComponent*> allComponents;

APlayerPawn::APlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	instance = Cast<UGemChasersInstance>(GetGameInstance());

	GetRootComponent()->GetChildrenComponents(true, allComponents);
	for (USceneComponent* part : allComponents)
	{
		if (part->GetName() == "Collider")
		{
			collider = Cast<UStaticMeshComponent>(part);
			if (collider != NULL)
			{
				//adds OnOverlap function
				collider->OnComponentBeginOverlap.AddDynamic(this, &APlayerPawn::OnOverlap);
			}
		}
	}
}

void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &APlayerPawn::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerPawn::MoveRight);
}

void APlayerPawn::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetRootComponent()->ComponentHasTag("Enemy")) 
	{
		ABattleAreaSpawnPoint* closest = NULL;
		for (TActorIterator<ABattleAreaSpawnPoint> points(GetWorld()); points; ++points)
		{
			if (points->GetRootComponent()->ComponentHasTag("BattleAreaSpawnPoint")) 
			{
				if (!closest)
				{
					closest = *points;
				}
				else if((points->GetActorLocation() - GetActorLocation()).Size() < (closest->GetActorLocation() - GetActorLocation()).Size())
				{
					closest = *points;
				}
			}
		}

		if (closest)
		{
			if (!(closest->currentBattle)) 
			{
				//Create Battle at this point
				CreateBattleArea(closest);
				currentBattleArea->enemies[0] = Cast<ATestEnemy>(OtherActor);
				currentBattleArea->initiate = true;
			}
		}
	}
}

void APlayerPawn::MoveForward(float f)
{
	if (!currentBattleArea) 
	{
		SetActorLocation(GetActorLocation() + (GetActorForwardVector() * f * 20));
	}
	
}

void APlayerPawn::MoveRight(float r)
{
	if (!currentBattleArea) 
	{
		SetActorLocation(GetActorLocation() + (GetActorRightVector() * r * 20));
	}
}

void APlayerPawn::CreateBattleArea(ABattleAreaSpawnPoint* point)
{
	//Get spawning info 
	FVector Location = point->GetActorLocation();
	FRotator Rotation = point->GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnInfo.Owner = point;

	//Spawns battle area
	ABattleArea* battleArea = NULL;
	battleArea = GetWorld()->SpawnActor<ABattleArea>(instance->battleArea->GeneratedClass, Location, Rotation, SpawnInfo);
	battleArea->spawnPoint = point;
	point->currentBattle = battleArea;
	currentBattleArea = battleArea;
	point->activeBattle = true;
}

