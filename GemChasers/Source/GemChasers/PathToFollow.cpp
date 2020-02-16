#include "PathToFollow.h"

// Sets default values
APathToFollow::APathToFollow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APathToFollow::BeginPlay()
{
	Super::BeginPlay();
	GetRootComponent()->GetChildrenComponents(true, pathSpots);
	for (USceneComponent* c : pathSpots)
	{
		if (c->ComponentHasTag("Start"))
		{
			startSpot = c;
			break;
		}
	}
}

// Called every frame
void APathToFollow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

