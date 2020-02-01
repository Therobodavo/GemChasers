// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/TestEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestEnemy() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_ATestEnemy_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_ATestEnemy();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
// End Cross Module References
	void ATestEnemy::StaticRegisterNativesATestEnemy()
	{
	}
	UClass* Z_Construct_UClass_ATestEnemy_NoRegister()
	{
		return ATestEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ATestEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inBattle_MetaData[];
#endif
		static void NewProp_inBattle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inBattle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestEnemy.h" },
		{ "ModuleRelativePath", "TestEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle_MetaData[] = {
		{ "Category", "TestEnemy" },
		{ "ModuleRelativePath", "TestEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle_SetBit(void* Obj)
	{
		((ATestEnemy*)Obj)->inBattle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle = { "inBattle", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATestEnemy), &Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestEnemy_Statics::NewProp_inBattle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestEnemy_Statics::ClassParams = {
		&ATestEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestEnemy, 3926260547);
	template<> GEMCHASERS_API UClass* StaticClass<ATestEnemy>()
	{
		return ATestEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestEnemy(Z_Construct_UClass_ATestEnemy, &ATestEnemy::StaticClass, TEXT("/Script/GemChasers"), TEXT("ATestEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
