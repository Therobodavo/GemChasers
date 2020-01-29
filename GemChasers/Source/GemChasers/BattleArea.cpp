// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleArea.h"
#include "TestEnemy.h"
#include "Math/Vector.h"

ATestEnemy* enemies[3];
FVector E1[3];


// Sets default values
ABattleArea::ABattleArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TArray<UStaticMeshComponent> StaticComps;
	//this->GetComponents<UStaticMeshComponent>(StaticComps);
}

// Called when the game starts or when spawned
void ABattleArea::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABattleArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void onEnter() 
{

}

