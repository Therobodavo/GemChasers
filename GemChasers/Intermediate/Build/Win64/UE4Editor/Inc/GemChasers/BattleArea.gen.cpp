// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/BattleArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleArea() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_ABattleArea_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_ABattleArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
	GEMCHASERS_API UFunction* Z_Construct_UFunction_ABattleArea_OnOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEMCHASERS_API UFunction* Z_Construct_UFunction_ABattleArea_SetActorToSpot();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_ATestEnemy_NoRegister();
// End Cross Module References
	void ABattleArea::StaticRegisterNativesABattleArea()
	{
		UClass* Class = ABattleArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &ABattleArea::execOnOverlap },
			{ "SetActorToSpot", &ABattleArea::execSetActorToSpot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABattleArea_OnOverlap_Statics
	{
		struct BattleArea_eventOnOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BattleArea_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BattleArea_eventOnOverlap_Parms), &Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventOnOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "EnergyCollector" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattleArea, nullptr, "OnOverlap", nullptr, nullptr, sizeof(BattleArea_eventOnOverlap_Parms), Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattleArea_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattleArea_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics
	{
		struct BattleArea_eventSetActorToSpot_Parms
		{
			AActor* a;
			int32 i;
			bool t;
		};
		static void NewProp_t_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_t_SetBit(void* Obj)
	{
		((BattleArea_eventSetActorToSpot_Parms*)Obj)->t = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BattleArea_eventSetActorToSpot_Parms), &Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_t_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventSetActorToSpot_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleArea_eventSetActorToSpot_Parms, a), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_t,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattleArea, nullptr, "SetActorToSpot", nullptr, nullptr, sizeof(BattleArea_eventSetActorToSpot_Parms), Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattleArea_SetActorToSpot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattleArea_SetActorToSpot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABattleArea_NoRegister()
	{
		return ABattleArea::StaticClass();
	}
	struct Z_Construct_UClass_ABattleArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initiate_MetaData[];
#endif
		static void NewProp_initiate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_initiate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_floor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_floor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPos3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerPos3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPos2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerPos2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPos1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerPos1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyPos3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyPos3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyPos2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyPos2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyPos1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyPos1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_enemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABattleArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABattleArea_OnOverlap, "OnOverlap" }, // 3564959475
		{ &Z_Construct_UFunction_ABattleArea_SetActorToSpot, "SetActorToSpot" }, // 1537582632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BattleArea.h" },
		{ "ModuleRelativePath", "BattleArea.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate_MetaData[] = {
		{ "Category", "Battle Settings" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	void Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate_SetBit(void* Obj)
	{
		((ABattleArea*)Obj)->initiate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate = { "initiate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABattleArea), &Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_floor_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, floor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_floor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_floor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos3_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos3 = { "playerPos3", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, playerPos3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos2_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos2 = { "playerPos2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, playerPos2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos1_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos1 = { "playerPos1", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, playerPos1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos3_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos3 = { "enemyPos3", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, enemyPos3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos2_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos2 = { "enemyPos2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, enemyPos2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos1_MetaData[] = {
		{ "Category", "BattleArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos1 = { "enemyPos1", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, enemyPos1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies_MetaData[] = {
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies = { "enemies", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleArea, enemies), METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies_Inner = { "enemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATestEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_initiate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_playerPos1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_enemyPos1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleArea_Statics::NewProp_enemies_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleArea_Statics::ClassParams = {
		&ABattleArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABattleArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABattleArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleArea, 3727436671);
	template<> GEMCHASERS_API UClass* StaticClass<ABattleArea>()
	{
		return ABattleArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleArea(Z_Construct_UClass_ABattleArea, &ABattleArea::StaticClass, TEXT("/Script/GemChasers"), TEXT("ABattleArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
