// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleArea.h"
#include "TestEnemy.h"
#include "Math/Vector.h"
#include "Engine/World.h"
#include "Engine.h"

ATestEnemy* enemies[3];
FVector EnemyPositions[3];


// Sets default values
ABattleArea::ABattleArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TArray<UStaticMeshComponent> StaticComps;
	//this->GetComponents<UStaticMeshComponent>(StaticComps);
}

void ABattleArea::OnOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->Tags[0] == "Enemy") 
	{
		ATestEnemy* enemy = Cast<ATestEnemy>(OtherActor);

		enemy->SetActorLocation(EnemyPositions[0]);
		//enemy->inBattle = true;
	}
}

// Called when the game starts or when spawned
void ABattleArea::BeginPlay()
{
	Super::BeginPlay();

	TArray<USceneComponent*> allComponents;
	GetRootComponent()->GetChildrenComponents(true, allComponents);
	
	for (int i = 0; i < allComponents.Max(); i++)
	{
		if (allComponents[i]->GetName() == "E1")
		{
			EnemyPositions[0] = allComponents[i]->GetComponentLocation();
		}
		if (allComponents[i]->GetName() == "E2")
		{
			EnemyPositions[1] = allComponents[i]->GetComponentLocation();
		}
		if (allComponents[i]->GetName() == "E3")
		{
			EnemyPositions[2] = allComponents[i]->GetComponentLocation();
		}
		if (allComponents[i]->GetName() == "AreaCollision") 
		{
			UBoxComponent* mainCollider = Cast<UBoxComponent>(allComponents[i]);
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

