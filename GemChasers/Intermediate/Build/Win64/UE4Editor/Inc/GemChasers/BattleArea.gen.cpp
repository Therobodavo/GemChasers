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
// End Cross Module References
	void ABattleArea::StaticRegisterNativesABattleArea()
	{
	}
	UClass* Z_Construct_UClass_ABattleArea_NoRegister()
	{
		return ABattleArea::StaticClass();
	}
	struct Z_Construct_UClass_ABattleArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BattleArea.h" },
		{ "ModuleRelativePath", "BattleArea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleArea_Statics::ClassParams = {
		&ABattleArea::StaticClass,
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
	IMPLEMENT_CLASS(ABattleArea, 1290567521);
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
