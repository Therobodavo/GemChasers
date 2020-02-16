#include "TestEnemy.h"
#include "PathToFollow.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Engine.h"
#include "EngineUtils.h"
#include "Components/PrimitiveComponent.h"
#include "EnemySpawner.h"

// Sets default values
ATestEnemy::ATestEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ATestEnemy::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp) 
	{
		if (OtherComp->ComponentHasTag("PathSpot"))
		{
			if (OtherComp->ComponentHasTag("End") && currentPath)
			{
				//Set current target to start
				currentTarget = currentPath->startSpot;
			}
			else if(currentPath)
			{
				//Increases spot # by 1
				FString objOverlapName = OtherComp->GetName();
				objOverlapName.RemoveAt(0, 4);
				int pathIndex = FCString::Atoi(*objOverlapName) + 1;

				FString temp = "Path";
				temp.AppendInt(pathIndex);
				
				for (USceneComponent* c : currentPath->pathSpots) 
				{
					if (c->GetName() == temp) 
					{
						currentTarget = c;
						break;
					}
				}

			}
		}
	}
}

// Called when the game starts or when spawned
void ATestEnemy::BeginPlay()
{
	Super::BeginPlay();

	timeSpawned = GetWorld()->GetTimeSeconds();
	if (this->GetOwner())
	{
		AEnemySpawner* spawner = Cast<AEnemySpawner>(this->GetOwner());
		if (spawner->spawnerPath)
		{
			currentPath = spawner->spawnerPath;
		}
	}

	GetRootComponent()->GetChildrenComponents(true, allComponents);
	for (USceneComponent* part : allComponents) 
	{
		if (part->ComponentHasTag("Collider"))
		{
			collider = Cast<UStaticMeshComponent>(part);
			if (collider)
			{
				//adds OnOverlap function
				collider->OnComponentBeginOverlap.AddDynamic(this, &ATestEnemy::OnOverlap);
			}
		}
	}

	if (currentPath && currentPath->pathSpots.Num() > 1) 
	{
		currentTarget = currentPath->startSpot;
	}
}

// Called every frame
void ATestEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (currentPath && !currentTarget)
	{
		currentTarget = currentPath->startSpot;
	}

	if (!inBattle && currentPath && currentTarget) 
	{
		FVector spotLocation = currentTarget->GetComponentLocation();
		direction = (spotLocation - GetActorLocation()).GetSafeNormal();
		SetActorLocation(GetActorLocation() + (speed * direction * DeltaTime));
	}

	//If the enemy should die
	if (!inBattle && GetWorld()->GetTimeSeconds() - timeSpawned > timeAllowed)
	{
		Destroy();
	}
}

// Called to bind functionality to input
void ATestEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

