// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class GEMCHASERS_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		bool isActive = false;
	
	UPROPERTY()
		float speed = 8.0;

	UPROPERTY()
		class UGemChasersInstance* instance = NULL;

	UFUNCTION()
		void SpawnEnemy();
	UFUNCTION()
		void Start();
	UFUNCTION()
		void Stop();
	UPROPERTY()
		class APathToFollow* spawnerPath = NULL;

};
