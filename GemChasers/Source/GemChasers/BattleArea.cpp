#include "BattleArea.h"
#include "TestEnemy.h"
#include "Math/Vector.h"
#include "Engine/World.h"
#include "Engine.h"
#include "UObject/UObjectGlobals.h"
#include "Kismet/GameplayStatics.h"
#include "MainPlayerController.h"
#include "BattleUIWidget.h"
#include "PlayerPawn.h"
#include "BattleAreaSpawnPoint.h"

//BattleArea.cpp File
//Main code for creating battles and taking care of enemies/players
//Programmed by David Knolls

bool hasInitiated = false;
// Sets default values
ABattleArea::ABattleArea(const FObjectInitializer& OI) : Super(OI)
{
	PrimaryActorTick.bCanEverTick = true;
	playerController = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	playerActor = Cast<APlayerPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	spawnPoint = Cast<ABattleAreaSpawnPoint>(GetOwner());

	collider = OI.CreateDefaultSubobject<UBoxComponent>(this,TEXT("Collider"));
	SetRootComponent(collider);

	enemyPos1 = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("E1"));
	enemyPos1->SetupAttachment(collider);
	enemyPos2 = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("E2"));
	enemyPos2->SetupAttachment(collider);
	enemyPos3 = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("E3"));
	enemyPos3->SetupAttachment(collider);

	playerPos1 = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("P1"));
	playerPos1->SetupAttachment(collider);
	playerPos2 = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("P2"));
	playerPos2->SetupAttachment(collider);
	playerPos3 = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("P3"));
	playerPos3->SetupAttachment(collider);
	
	floor = OI.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("Floor"));
	floor->SetupAttachment(collider);

	enemies.SetNum(3,false);
	enemies = { NULL,NULL,NULL };
}
void ABattleArea::OnOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

	if (OtherActor->GetRootComponent()->ComponentHasTag("Enemy") && !(enemies.Contains(OtherActor)))
	{
		bool foundSpot = false;
		for (int i = 0; i < 3;i++) 
		{
			if (!enemies[i])
			{
				ATestEnemy* enemy = Cast<ATestEnemy>(OtherActor);
				enemy->inBattle = true;
				enemies[i] = enemy;

				SetActorToSpot(enemy, i, false);
				foundSpot = true;
				break;
			}
		}
		if (!foundSpot) 
		{
			OtherActor->Destroy();
		}
	}
}

// Called when the game starts or when spawned
void ABattleArea::BeginPlay()
{
	Super::BeginPlay();
	
	playerController->battleUIWidget->AddToViewport();

	if (collider) 
	{
		collider->OnComponentBeginOverlap.AddDynamic(this, &ABattleArea::OnOverlap);
	}

	SetActorToSpot(GetWorld()->GetFirstPlayerController()->GetPawn(), 0, true);

}

// Called every frame
void ABattleArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	if (initiate && !hasInitiated) 
	{
		for (int i = 0; i < 3; i++) 
		{
			if (enemies[i]) 
			{
				SetActorToSpot(enemies[i],i,false);
			}
		}
	}
}
void ABattleArea::Destroyed()
{
	Super::Destroyed();

	if (playerController) 
	{
		playerController->battleUIWidget->RemoveFromViewport();
	}
	for (int i = 0; i < 3; i++) 
	{
		if (enemies[i]) 
		{
			enemies[i]->Destroy();
			enemies[i] = NULL;
		}
	}
	if (spawnPoint)
	{
		GLog->Log("Reset Spawnpoint");
		spawnPoint->activeBattle = false;
		spawnPoint->currentBattle = NULL;
	}
	if (playerActor)
	{
		playerActor->currentBattleArea = NULL;
	}
}
//Actor to move, index for spot, and if player or enemy
void ABattleArea::SetActorToSpot(AActor* a, int i, bool t)
{
	USceneComponent* spot = NULL;

	//If player
	if (t) 
	{
		if (i == 0)
		{
			spot = playerPos1;
		}
		else if (i == 1)
		{
			spot = playerPos2;
		}
		else if (i == 2)
		{
			spot = playerPos3;
		}
	}
	else 
	{
		if (i == 0)
		{
			spot = enemyPos1;
		}
		else if (i == 1)
		{
			spot = enemyPos2;
		}
		else if (i == 2)
		{
			spot = enemyPos3;
		}
	}
	if (spot && a)
	{
		a->SetActorLocation(spot->GetComponentLocation());
		a->SetActorRotation(spot->GetComponentRotation());
	}
}

