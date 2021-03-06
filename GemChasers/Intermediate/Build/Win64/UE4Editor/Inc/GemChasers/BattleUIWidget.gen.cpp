// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GemChasers/BattleUIWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleUIWidget() {}
// Cross Module References
	GEMCHASERS_API UClass* Z_Construct_UClass_UBattleUIWidget_NoRegister();
	GEMCHASERS_API UClass* Z_Construct_UClass_UBattleUIWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GemChasers();
	GEMCHASERS_API UFunction* Z_Construct_UFunction_UBattleUIWidget_SelectMove();
	GEMCHASERS_API UFunction* Z_Construct_UFunction_UBattleUIWidget_StartRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GEMCHASERS_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
// End Cross Module References
	void UBattleUIWidget::StaticRegisterNativesUBattleUIWidget()
	{
		UClass* Class = UBattleUIWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectMove", &UBattleUIWidget::execSelectMove },
			{ "StartRotation", &UBattleUIWidget::execStartRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBattleUIWidget_SelectMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBattleUIWidget_SelectMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBattleUIWidget_SelectMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleUIWidget, nullptr, "SelectMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBattleUIWidget_SelectMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleUIWidget_SelectMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBattleUIWidget_SelectMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBattleUIWidget_SelectMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBattleUIWidget_StartRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBattleUIWidget_StartRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBattleUIWidget_StartRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleUIWidget, nullptr, "StartRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBattleUIWidget_StartRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleUIWidget_StartRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBattleUIWidget_StartRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBattleUIWidget_StartRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBattleUIWidget_NoRegister()
	{
		return UBattleUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBattleUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mousePos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mousePos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stops_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_stops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hoverImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hoverImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outerWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outerWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_innerWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_innerWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outerSpotStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_outerSpotStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_innerSpotStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_innerSpotStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeRotationStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeRotationStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRotating_MetaData[];
#endif
		static void NewProp_isRotating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRotating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_innerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_innerRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBattleUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GemChasers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBattleUIWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBattleUIWidget_SelectMove, "SelectMove" }, // 1651046739
		{ &Z_Construct_UFunction_UBattleUIWidget_StartRotation, "StartRotation" }, // 3037225187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BattleUIWidget.h" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mousePos_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mousePos = { "mousePos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, mousePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mousePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mousePos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_playerActor_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_playerActor = { "playerActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, playerActor), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_playerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_playerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_stops_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_stops = { "stops", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(stops, UBattleUIWidget), STRUCT_OFFSET(UBattleUIWidget, stops), METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_stops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_stops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_selectedImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_selectedImage = { "selectedImage", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, selectedImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_selectedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_selectedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_hoverImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_hoverImage = { "hoverImage", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, hoverImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_hoverImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_hoverImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_moveOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_moveOverlay = { "moveOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, moveOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_moveOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_moveOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mainWheel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mainWheel = { "mainWheel", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, mainWheel), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mainWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mainWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerWheel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerWheel = { "outerWheel", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, outerWheel), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerWheel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerWheel = { "innerWheel", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, innerWheel), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerSpotStop_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerSpotStop = { "outerSpotStop", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, outerSpotStop), METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerSpotStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerSpotStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerSpotStop_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerSpotStop = { "innerSpotStop", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, innerSpotStop), METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerSpotStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerSpotStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_timeRotationStarted_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_timeRotationStarted = { "timeRotationStarted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, timeRotationStarted), METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_timeRotationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_timeRotationStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	void Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating_SetBit(void* Obj)
	{
		((UBattleUIWidget*)Obj)->isRotating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating = { "isRotating", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBattleUIWidget), &Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerRotation_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerRotation = { "outerRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, outerRotation), METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerRotation_MetaData[] = {
		{ "ModuleRelativePath", "BattleUIWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerRotation = { "innerRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBattleUIWidget, innerRotation), METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBattleUIWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mousePos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_playerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_stops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_selectedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_hoverImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_moveOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_mainWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerSpotStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerSpotStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_timeRotationStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_isRotating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_outerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleUIWidget_Statics::NewProp_innerRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBattleUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBattleUIWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBattleUIWidget_Statics::ClassParams = {
		&UBattleUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBattleUIWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBattleUIWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleUIWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBattleUIWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBattleUIWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBattleUIWidget, 3591611273);
	template<> GEMCHASERS_API UClass* StaticClass<UBattleUIWidget>()
	{
		return UBattleUIWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBattleUIWidget(Z_Construct_UClass_UBattleUIWidget, &UBattleUIWidget::StaticClass, TEXT("/Script/GemChasers"), TEXT("UBattleUIWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBattleUIWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
