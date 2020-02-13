// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class GEMCHASERS_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable, Category = "BattleArea")
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UStaticMeshComponent* collider = NULL;
	UFUNCTION()
		void MoveForward(float f);

	UFUNCTION()
		void MoveRight(float r);

	UFUNCTION()
		void CreateBattleArea(class ABattleAreaSpawnPoint* spawnPoint);
	UPROPERTY()
		class UGemChasersInstance* instance;

	UPROPERTY()
		class ABattleArea* currentBattleArea;
};
