// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEMCHASERS_BattleUIWidget_generated_h
#error "BattleUIWidget.generated.h already included, missing '#pragma once' in BattleUIWidget.h"
#endif
#define GEMCHASERS_BattleUIWidget_generated_h

#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_SPARSE_DATA
#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRotation(); \
		P_NATIVE_END; \
	}


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRotation(); \
		P_NATIVE_END; \
	}


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBattleUIWidget(); \
	friend struct Z_Construct_UClass_UBattleUIWidget_Statics; \
public: \
	DECLARE_CLASS(UBattleUIWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GemChasers"), NO_API) \
	DECLARE_SERIALIZER(UBattleUIWidget)


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBattleUIWidget(); \
	friend struct Z_Construct_UClass_UBattleUIWidget_Statics; \
public: \
	DECLARE_CLASS(UBattleUIWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GemChasers"), NO_API) \
	DECLARE_SERIALIZER(UBattleUIWidget)


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBattleUIWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBattleUIWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBattleUIWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBattleUIWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBattleUIWidget(UBattleUIWidget&&); \
	NO_API UBattleUIWidget(const UBattleUIWidget&); \
public:


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBattleUIWidget(UBattleUIWidget&&); \
	NO_API UBattleUIWidget(const UBattleUIWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBattleUIWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBattleUIWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBattleUIWidget)


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define GemChasers_Source_GemChasers_BattleUIWidget_h_12_PROLOG
#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_SPARSE_DATA \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_RPC_WRAPPERS \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_INCLASS \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GemChasers_Source_GemChasers_BattleUIWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_SPARSE_DATA \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_INCLASS_NO_PURE_DECLS \
	GemChasers_Source_GemChasers_BattleUIWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEMCHASERS_API UClass* StaticClass<class UBattleUIWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GemChasers_Source_GemChasers_BattleUIWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
