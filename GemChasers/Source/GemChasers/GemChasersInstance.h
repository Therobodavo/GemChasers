// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GemChasersInstance.generated.h"

/**
 * 
 */
UCLASS()
class GEMCHASERS_API UGemChasersInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UGemChasersInstance();
	void Init();

	UPROPERTY()
	UObject* SpawnActor = NULL;

	UPROPERTY()
	UBlueprint* enemySpawnerBP;

	UPROPERTY()
	UBlueprint* enemy1BP;

	UPROPERTY()
	UBlueprint* battleArea;
	
};
