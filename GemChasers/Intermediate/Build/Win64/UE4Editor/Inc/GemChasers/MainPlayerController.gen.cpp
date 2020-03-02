// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/MainPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerController() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_AMainPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
	GEMCHASERS_API UClass* Z_Construct_UClass_UGemChasersInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AMainPlayerController::StaticRegisterNativesAMainPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMainPlayerController_NoRegister()
	{
		return AMainPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_battleUIWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_battleUIWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainPlayerController.h" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_instance_MetaData[] = {
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, instance), Z_Construct_UClass_UGemChasersInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_battleUIWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_battleUIWidget = { "battleUIWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, battleUIWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_battleUIWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_battleUIWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_battleUIWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerController_Statics::ClassParams = {
		&AMainPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayerController, 3521910301);
	template<> GEMCHASERS_API UClass* StaticClass<AMainPlayerController>()
	{
		return AMainPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayerController(Z_Construct_UClass_AMainPlayerController, &AMainPlayerController::StaticClass, TEXT("/Script/GemChasers"), TEXT("AMainPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
