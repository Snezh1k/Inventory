// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define INVENTORY_Pickup_generated_h

#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_SPARSE_DATA
#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_RPC_WRAPPERS
#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_ACCESSORS
#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	NO_API virtual ~APickup();


#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_12_PROLOG
#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_RPC_WRAPPERS \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_INCLASS \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Inventory_Source_Inventory_Public_World_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
