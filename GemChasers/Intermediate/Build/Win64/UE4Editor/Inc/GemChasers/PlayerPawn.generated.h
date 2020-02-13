// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABattleAreaSpawnPoint;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GEMCHASERS_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define GEMCHASERS_PlayerPawn_generated_h

#define GemChasers_Source_GemChasers_PlayerPawn_h_12_SPARSE_DATA
#define GemChasers_Source_GemChasers_PlayerPawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateBattleArea) \
	{ \
		P_GET_OBJECT(ABattleAreaSpawnPoint,Z_Param_spawnPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateBattleArea(Z_Param_spawnPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_r); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_r); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_f); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateBattleArea) \
	{ \
		P_GET_OBJECT(ABattleAreaSpawnPoint,Z_Param_spawnPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateBattleArea(Z_Param_spawnPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_r); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_r); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_f); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GemChasers"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GemChasers"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define GemChasers_Source_GemChasers_PlayerPawn_h_9_PROLOG
#define GemChasers_Source_GemChasers_PlayerPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_SPARSE_DATA \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_RPC_WRAPPERS \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_INCLASS \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GemChasers_Source_GemChasers_PlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_SPARSE_DATA \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	GemChasers_Source_GemChasers_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEMCHASERS_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GemChasers_Source_GemChasers_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
