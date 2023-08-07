// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/InventoryCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_InventoryCharacter_generated_h
#error "InventoryCharacter.generated.h already included, missing '#pragma once' in InventoryCharacter.h"
#endif
#define INVENTORY_InventoryCharacter_generated_h

#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FInteractionData>();

#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_SPARSE_DATA
#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_RPC_WRAPPERS
#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_ACCESSORS
#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryCharacter(); \
	friend struct Z_Construct_UClass_AInventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCharacter)


#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAInventoryCharacter(); \
	friend struct Z_Construct_UClass_AInventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCharacter)


#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventoryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventoryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryCharacter(AInventoryCharacter&&); \
	NO_API AInventoryCharacter(const AInventoryCharacter&); \
public: \
	NO_API virtual ~AInventoryCharacter();


#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryCharacter(AInventoryCharacter&&); \
	NO_API AInventoryCharacter(const AInventoryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventoryCharacter) \
	NO_API virtual ~AInventoryCharacter();


#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_31_PROLOG
#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_RPC_WRAPPERS \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_INCLASS \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class AInventoryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
