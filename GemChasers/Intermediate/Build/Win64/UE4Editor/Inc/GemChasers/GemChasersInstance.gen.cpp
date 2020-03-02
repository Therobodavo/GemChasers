// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/GemChasersInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGemChasersInstance() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_UGemChasersInstance_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_UGemChasersInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
	void UGemChasersInstance::StaticRegisterNativesUGemChasersInstance()
	{
	}
	UClass* Z_Construct_UClass_UGemChasersInstance_NoRegister()
	{
		return UGemChasersInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGemChasersInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wanderingUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_wanderingUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_battleUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_battleUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_battleArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_battleArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemy1BP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy1BP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemySpawnerBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemySpawnerBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGemChasersInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGemChasersInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GemChasersInstance.h" },
		{ "ModuleRelativePath", "GemChasersInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_wanderingUI_MetaData[] = {
		{ "ModuleRelativePath", "GemChasersInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_wanderingUI = { "wanderingUI", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGemChasersInstance, wanderingUI), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_wanderingUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_wanderingUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleUI_MetaData[] = {
		{ "ModuleRelativePath", "GemChasersInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleUI = { "battleUI", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGemChasersInstance, battleUI), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleArea_MetaData[] = {
		{ "ModuleRelativePath", "GemChasersInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleArea = { "battleArea", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGemChasersInstance, battleArea), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemy1BP_MetaData[] = {
		{ "ModuleRelativePath", "GemChasersInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemy1BP = { "enemy1BP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGemChasersInstance, enemy1BP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemy1BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemy1BP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemySpawnerBP_MetaData[] = {
		{ "ModuleRelativePath", "GemChasersInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemySpawnerBP = { "enemySpawnerBP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGemChasersInstance, enemySpawnerBP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemySpawnerBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemySpawnerBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGemChasersInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_wanderingUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_battleArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemy1BP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGemChasersInstance_Statics::NewProp_enemySpawnerBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGemChasersInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGemChasersInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGemChasersInstance_Statics::ClassParams = {
		&UGemChasersInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGemChasersInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGemChasersInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGemChasersInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGemChasersInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGemChasersInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGemChasersInstance, 356556458);
	template<> GEMCHASERS_API UClass* StaticClass<UGemChasersInstance>()
	{
		return UGemChasersInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGemChasersInstance(Z_Construct_UClass_UGemChasersInstance, &UGemChasersInstance::StaticClass, TEXT("/Script/GemChasers"), TEXT("UGemChasersInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGemChasersInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
