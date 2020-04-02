// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleArea.generated.h"

UCLASS()
class GEMCHASERS_API ABattleArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABattleArea(const FObjectInitializer& OI);

	UFUNCTION(BlueprintCallable, Category = "EnergyCollector")
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;

	UPROPERTY()
		TArray<class ATestEnemy*> enemies;
	UPROPERTY()
		class AMainPlayerController* playerController = NULL;

	UPROPERTY()
		class APlayerPawn* playerActor = NULL;

	UPROPERTY()
		class ABattleAreaSpawnPoint* spawnPoint = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* enemyPos1 = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* enemyPos2 = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* enemyPos3 = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* playerPos1 = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* playerPos2 = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* playerPos3 = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* collider = NULL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* floor = NULL;
	UFUNCTION()
		void SetActorToSpot(AActor* a, int i, bool t);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Battle Settings")
		bool initiate = false;
};
