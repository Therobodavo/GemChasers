#include "BattleAreaSpawnPoint.h"
#include <GemChasers\BattleArea.h>

// Sets default values
ABattleAreaSpawnPoint::ABattleAreaSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABattleAreaSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABattleAreaSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

