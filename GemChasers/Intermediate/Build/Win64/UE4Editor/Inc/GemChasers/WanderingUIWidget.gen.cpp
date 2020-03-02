// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/WanderingUIWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWanderingUIWidget() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_UWanderingUIWidget_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_UWanderingUIWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
// End Cross Module References
	void UWanderingUIWidget::StaticRegisterNativesUWanderingUIWidget()
	{
	}
	UClass* Z_Construct_UClass_UWanderingUIWidget_NoRegister()
	{
		return UWanderingUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWanderingUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWanderingUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWanderingUIWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WanderingUIWidget.h" },
		{ "ModuleRelativePath", "WanderingUIWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWanderingUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWanderingUIWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWanderingUIWidget_Statics::ClassParams = {
		&UWanderingUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWanderingUIWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWanderingUIWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWanderingUIWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWanderingUIWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWanderingUIWidget, 2573381189);
	template<> GEMCHASERS_API UClass* StaticClass<UWanderingUIWidget>()
	{
		return UWanderingUIWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWanderingUIWidget(Z_Construct_UClass_UWanderingUIWidget, &UWanderingUIWidget::StaticClass, TEXT("/Script/GemChasers"), TEXT("UWanderingUIWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWanderingUIWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
