// Fill out your copyright notice in the Description page of Project Settings.


#include "GemChasersInstance.h"

UGemChasersInstance::UGemChasersInstance() 
{
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_EnemySpawner.BP_EnemySpawner'")));
	enemySpawnerBP = Cast<UBlueprint>(SpawnActor);

	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_TestEnemy.BP_TestEnemy'")));
	enemy1BP = Cast<UBlueprint>(SpawnActor);

	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_BattleArea.BP_BattleArea'")));
	battleArea = Cast<UBlueprint>(SpawnActor);
}

void UGemChasersInstance::Init()
{
	Super::Init();
}
