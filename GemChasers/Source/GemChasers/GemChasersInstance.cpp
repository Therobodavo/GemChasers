// Fill out your copyright notice in the Description page of Project Settings.


#include "GemChasersInstance.h"
#include "Blueprint/UserWidget.h"
#include "ConstructorHelpers.h"
#include "BattleUIWidget.h"
#include "WanderingUIWidget.h"
UGemChasersInstance::UGemChasersInstance() 
{
	enemySpawnerBP = Cast<UBlueprint>(Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_EnemySpawner.BP_EnemySpawner'"))));
	enemy1BP = Cast<UBlueprint>(Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_TestEnemy.BP_TestEnemy'"))));
	battleArea = Cast<UBlueprint>(Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/BPs/BP_BattleArea.BP_BattleArea'"))));
	
	ConstructorHelpers::FClassFinder<UBattleUIWidget> battleWidgetFinder(TEXT("WidgetBlueprint'/Game/BPs/BattleUI'"));
	
	if (battleWidgetFinder.Succeeded())
	{
		battleUI = battleWidgetFinder.Class;
	}

	ConstructorHelpers::FClassFinder<UWanderingUIWidget> wanderingWidgetFinder(TEXT("WidgetBlueprint'/Game/BPs/WanderingUI'"));

	if (wanderingWidgetFinder.Succeeded()) 
	{
		wanderingUI = wanderingWidgetFinder.Class;
	}
}

void UGemChasersInstance::Init()
{
	Super::Init();
	
	
}
