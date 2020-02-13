#include "EnemySpawner.h"
#include "TestEnemy.h"
#include "Engine/World.h"
#include "Engine.h"
#include <GemChasers\GemChasersInstance.h>

FTimerHandle spawnerTimer;

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	instance = Cast<UGemChasersInstance>(GetGameInstance());
	Start();
	
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemySpawner::SpawnEnemy()
{
	//Get spawning info 
	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Spawns enemy
	ATestEnemy* e = GetWorld()->SpawnActor<ATestEnemy>(instance->enemy1BP->GeneratedClass, Location, Rotation, SpawnInfo);
}

void AEnemySpawner::Start()
{
	GetWorldTimerManager().SetTimer(spawnerTimer, this, &AEnemySpawner::SpawnEnemy, speed, true, 0);
	isActive = true;
}

void AEnemySpawner::Stop()
{
	GetWorldTimerManager().ClearTimer(spawnerTimer);
	isActive = false;
}

