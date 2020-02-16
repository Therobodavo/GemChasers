// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TestEnemy.generated.h"

UCLASS()
class GEMCHASERS_API ATestEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATestEnemy();

	UFUNCTION(BlueprintCallable, Category = "PathFollowing")
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
		bool inBattle = false;
	UPROPERTY()
		class APathToFollow* currentPath = NULL;
	UPROPERTY()
		USceneComponent* currentTarget = NULL;
	UPROPERTY()
		float speed = 200;
	UPROPERTY()
		FVector direction;
	UPROPERTY()
		float health = 100;
	UPROPERTY()
		float timeSpawned = 0;
	UPROPERTY()
		float timeAllowed = 60;
	UPROPERTY()
		TArray<USceneComponent*> allComponents;
	UPROPERTY()
		UStaticMeshComponent* collider = NULL;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
