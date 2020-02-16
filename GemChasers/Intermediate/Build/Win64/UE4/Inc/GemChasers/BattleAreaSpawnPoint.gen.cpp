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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleAreaSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleAreaSpawnPoint_Statics::ClassParams = {
		&ABattleAreaSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ABattleAreaSpawnPoint, 684051546);
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
