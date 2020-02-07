#include "BattleArea.h"
#include "TestEnemy.h"
#include "Math/Vector.h"
#include "Engine/World.h"
#include "Engine.h"

//BattleArea.cpp File
//Main code for creating battles and taking care of enemies/players
//Programmed by David Knolls


ATestEnemy* enemies[3] = {NULL,NULL,NULL};
FVector EnemyPositions[3];

// Sets default values
ABattleArea::ABattleArea()
{
	PrimaryActorTick.bCanEverTick = true;
	TArray<UStaticMeshComponent> StaticComps;
}

void ABattleArea::OnOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->GetRootComponent()->ComponentHasTag("Enemy")) 
	{
		bool foundSpot = false;
		for (int i = 0; i < 3;i++) 
		{
			if (enemies[i] == NULL) 
			{
				ATestEnemy* enemy = Cast<ATestEnemy>(OtherActor);
				enemies[i] = enemy;
				enemy->SetActorLocation(EnemyPositions[i]);
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
			EnemyPositions[0] = part->GetComponentLocation();
		}
		if (part->GetName() == "E2")
		{
			EnemyPositions[1] = part->GetComponentLocation();
		}
		if (part->GetName() == "E3")
		{
			EnemyPositions[2] = part->GetComponentLocation();
		}
		if (part->GetName() == "AreaCollision") 
		{
			UBoxComponent* mainCollider = Cast<UBoxComponent>(part);
			mainCollider->OnComponentBeginOverlap.AddDynamic(this, &ABattleArea::OnOverlap);
		}
	}

}

// Called every frame
void ABattleArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void onEnter() 
{

}

