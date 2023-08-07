// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
struct FItemAddResult;
#ifdef INVENTORY_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORY_InventoryComponent_generated_h

#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAddResult_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemAddResult>();

#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_SPARSE_DATA
#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWeightCapacity); \
	DECLARE_FUNCTION(execSetSlotCapacity); \
	DECLARE_FUNCTION(execGetInventoryContents); \
	DECLARE_FUNCTION(execGetSlotCapacity); \
	DECLARE_FUNCTION(execGetWeightCapacity); \
	DECLARE_FUNCTION(execGetInventoryTotalWeight); \
	DECLARE_FUNCTION(execSplitExistingStack); \
	DECLARE_FUNCTION(execRemoveAmountOfItem); \
	DECLARE_FUNCTION(execRemoveSingleInstanceOfItem); \
	DECLARE_FUNCTION(execFindNextPartialStack); \
	DECLARE_FUNCTION(execFindNextItemByID); \
	DECLARE_FUNCTION(execFindMatchingItem); \
	DECLARE_FUNCTION(execHandleAddItem);


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWeightCapacity); \
	DECLARE_FUNCTION(execSetSlotCapacity); \
	DECLARE_FUNCTION(execGetInventoryContents); \
	DECLARE_FUNCTION(execGetSlotCapacity); \
	DECLARE_FUNCTION(execGetWeightCapacity); \
	DECLARE_FUNCTION(execGetInventoryTotalWeight); \
	DECLARE_FUNCTION(execSplitExistingStack); \
	DECLARE_FUNCTION(execRemoveAmountOfItem); \
	DECLARE_FUNCTION(execRemoveSingleInstanceOfItem); \
	DECLARE_FUNCTION(execFindNextPartialStack); \
	DECLARE_FUNCTION(execFindNextItemByID); \
	DECLARE_FUNCTION(execFindMatchingItem); \
	DECLARE_FUNCTION(execHandleAddItem);


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_ACCESSORS
#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	NO_API virtual ~UInventoryComponent();


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_58_PROLOG
#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_RPC_WRAPPERS \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_INCLASS \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Inventory_Source_Inventory_Public_Components_InventoryComponent_h


#define FOREACH_ENUM_EITEMADDRESULT(op) \
	op(EItemAddResult::IAR_NoItemAdded) \
	op(EItemAddResult::IAR_PartialAmoundItemAdded) \
	op(EItemAddResult::IAR_AllItemAdded) 

enum class EItemAddResult : uint8;
template<> struct TIsUEnumClass<EItemAddResult> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EItemAddResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
