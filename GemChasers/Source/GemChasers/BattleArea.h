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
	ABattleArea();

	UFUNCTION(BlueprintCallable, Category = "EnergyCollector")
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		TArray<class ATestEnemy*> enemies;
	UPROPERTY()
		TArray<USceneComponent*> enemyPositions;
	UPROPERTY()
		TArray<USceneComponent*> playerPositions;

	UPROPERTY()
		bool initiate = false;
};
