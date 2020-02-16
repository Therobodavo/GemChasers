// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/PathToFollow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathToFollow() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_APathToFollow_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_APathToFollow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APathToFollow::StaticRegisterNativesAPathToFollow()
	{
	}
	UClass* Z_Construct_UClass_APathToFollow_NoRegister()
	{
		return APathToFollow::StaticClass();
	}
	struct Z_Construct_UClass_APathToFollow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startSpot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_startSpot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathSpots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pathSpots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pathSpots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathToFollow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathToFollow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathToFollow.h" },
		{ "ModuleRelativePath", "PathToFollow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathToFollow_Statics::NewProp_startSpot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PathToFollow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathToFollow_Statics::NewProp_startSpot = { "startSpot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathToFollow, startSpot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathToFollow_Statics::NewProp_startSpot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathToFollow_Statics::NewProp_startSpot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PathToFollow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots = { "pathSpots", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathToFollow, pathSpots), METADATA_PARAMS(Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots_Inner = { "pathSpots", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathToFollow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathToFollow_Statics::NewProp_startSpot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathToFollow_Statics::NewProp_pathSpots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathToFollow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathToFollow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathToFollow_Statics::ClassParams = {
		&APathToFollow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APathToFollow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APathToFollow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APathToFollow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APathToFollow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathToFollow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathToFollow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathToFollow, 1523652919);
	template<> GEMCHASERS_API UClass* StaticClass<APathToFollow>()
	{
		return APathToFollow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathToFollow(Z_Construct_UClass_APathToFollow, &APathToFollow::StaticClass, TEXT("/Script/GemChasers"), TEXT("APathToFollow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathToFollow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
