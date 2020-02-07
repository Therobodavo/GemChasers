#include "EnemySpawner.h"
#include "TestEnemy.h"
#include "Engine/World.h"
#include "Engine.h"

//Variables for spawning objects
UObject* SpawnActor = NULL;
UBlueprint* GeneratedBP = NULL;
UClass* SpawnClass = NULL;
FTimerHandle spawnerTimer;

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;
	//Gets Blueprint for enemy1
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_TestEnemy.BP_TestEnemy'")));
	GeneratedBP = Cast<UBlueprint>(SpawnActor);
	SpawnClass = SpawnActor->StaticClass();
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

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
	ATestEnemy* e = GetWorld()->SpawnActor<ATestEnemy>(GeneratedBP->GeneratedClass, Location, Rotation, SpawnInfo);
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

