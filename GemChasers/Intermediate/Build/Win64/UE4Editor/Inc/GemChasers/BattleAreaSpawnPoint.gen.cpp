// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/BattleAreaSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleAreaSpawnPoint() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_ABattleAreaSpawnPoint_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_ABattleAreaSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
	GEMCHASERS_API UClass* Z_Construct_UClass_ABattleArea_NoRegister();
// End Cross Module References
	void ABattleAreaSpawnPoint::StaticRegisterNativesABattleAreaSpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_ABattleAreaSpawnPoint_NoRegister()
	{
		return ABattleAreaSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ABattleAreaSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentBattle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentBattle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeBattle_MetaData[];
#endif
		static void NewProp_activeBattle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activeBattle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BattleAreaSpawnPoint.h" },
		{ "ModuleRelativePath", "BattleAreaSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_currentBattle_MetaData[] = {
		{ "ModuleRelativePath", "BattleAreaSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_currentBattle = { "currentBattle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattleAreaSpawnPoint, currentBattle), Z_Construct_UClass_ABattleArea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_currentBattle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_currentBattle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle_MetaData[] = {
		{ "ModuleRelativePath", "BattleAreaSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle_SetBit(void* Obj)
	{
		((ABattleAreaSpawnPoint*)Obj)->activeBattle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle = { "activeBattle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABattleAreaSpawnPoint), &Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_currentBattle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::NewProp_activeBattle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleAreaSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::ClassParams = {
		&ABattleAreaSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleAreaSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleAreaSpawnPoint, 2773882729);
	template<> GEMCHASERS_API UClass* StaticClass<ABattleAreaSpawnPoint>()
	{
		return ABattleAreaSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleAreaSpawnPoint(Z_Construct_UClass_ABattleAreaSpawnPoint, &ABattleAreaSpawnPoint::StaticClass, TEXT("/Script/GemChasers"), TEXT("ABattleAreaSpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleAreaSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
