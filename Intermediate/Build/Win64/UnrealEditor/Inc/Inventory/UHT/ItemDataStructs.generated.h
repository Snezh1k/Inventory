// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ItemDataStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_ItemDataStructs_generated_h
#error "ItemDataStructs.generated.h already included, missing '#pragma once' in ItemDataStructs.h"
#endif
#define INVENTORY_ItemDataStructs_generated_h

#define FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStatistics_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemStatistics>();

#define FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemTextData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemTextData>();

#define FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemNumericData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemNumericData>();

#define FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAssetData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemAssetData>();

#define FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h


#define FOREACH_ENUM_EITEMQUALITY(op) \
	op(EItemQuality::Common) \
	op(EItemQuality::Uncommon) \
	op(EItemQuality::Rare) \
	op(EItemQuality::Epic) \
	op(EItemQuality::Legendary) 

enum class EItemQuality : uint8;
template<> struct TIsUEnumClass<EItemQuality> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EItemQuality>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Consumable) \
	op(EItemType::Potion) \
	op(EItemType::Weapon) \
	op(EItemType::Cloth) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
