#include "BattleArea.h"
#include "TestEnemy.h"
#include "Math/Vector.h"
#include "Engine/World.h"
#include "Engine.h"

//BattleArea.cpp File
//Main code for creating battles and taking care of enemies/players
//Programmed by David Knolls

bool hasInitiated = false;
// Sets default values
ABattleArea::ABattleArea()
{
	PrimaryActorTick.bCanEverTick = true;

	enemyPositions.SetNum(3,false);
	enemyPositions = { NULL,NULL,NULL };

	playerPositions.SetNum(3,false);
	playerPositions = { NULL,NULL,NULL };
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
				enemies[i] = enemy;
				enemy->SetActorLocation(enemyPositions[i]->GetComponentLocation());
				enemy->SetActorRotation(enemyPositions[i]->GetComponentRotation());
				enemy->inBattle = true;
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

	TArray<USceneComponent*> allComponents;
	GetRootComponent()->GetChildrenComponents(true, allComponents);
	
	for (USceneComponent* part : allComponents)
	{
		if (part->GetName() == "E1")
		{
			enemyPositions[0] = part;
		}
		if (part->GetName() == "E2")
		{
			enemyPositions[1] = part;
		}
		if (part->GetName() == "E3")
		{
			enemyPositions[2] = part;
		}
		if (part->GetName() == "P1")
		{
			playerPositions[0] = part;
		}
		if (part->GetName() == "P2")
		{
			playerPositions[1] = part;
		}
		if (part->GetName() == "P3")
		{
			playerPositions[2] = part;
		}
		if (part->GetName() == "AreaCollision") 
		{
			UBoxComponent* mainCollider = Cast<UBoxComponent>(part);
			mainCollider->OnComponentBeginOverlap.AddDynamic(this, &ABattleArea::OnOverlap);
		}
	}

	GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(playerPositions[0]->GetComponentLocation());
	GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorRotation(playerPositions[0]->GetComponentRotation());


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
				enemies[i]->SetActorLocation(enemyPositions[i]->GetComponentLocation());
				enemies[i]->SetActorRotation(enemyPositions[i]->GetComponentRotation());
			}
			

		}
	}
}

