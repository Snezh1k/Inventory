// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Data/ItemDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataStructs() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EItemQuality();
	INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EItemType();
	INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData();
	INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData();
	INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemStatistics();
	INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemTextData();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemQuality;
	static UEnum* EItemQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EItemQuality, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EItemQuality"));
		}
		return Z_Registration_Info_UEnum_EItemQuality.OuterSingleton;
	}
	template<> INVENTORY_API UEnum* StaticEnum<EItemQuality>()
	{
		return EItemQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_Inventory_EItemQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enumerators[] = {
		{ "EItemQuality::Common", (int64)EItemQuality::Common },
		{ "EItemQuality::Uncommon", (int64)EItemQuality::Uncommon },
		{ "EItemQuality::Rare", (int64)EItemQuality::Rare },
		{ "EItemQuality::Epic", (int64)EItemQuality::Epic },
		{ "EItemQuality::Legendary", (int64)EItemQuality::Legendary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enum_MetaDataParams[] = {
		{ "Common.DisplayName", "Common" },
		{ "Common.Name", "EItemQuality::Common" },
		{ "Epic.DisplayName", "Epic" },
		{ "Epic.Name", "EItemQuality::Epic" },
		{ "Legendary.DisplayName", "Legendary" },
		{ "Legendary.Name", "EItemQuality::Legendary" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
		{ "Rare.DisplayName", "Rare" },
		{ "Rare.Name", "EItemQuality::Rare" },
		{ "Uncommon.DisplayName", "Uncommon" },
		{ "Uncommon.Name", "EItemQuality::Uncommon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EItemQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		"EItemQuality",
		"EItemQuality",
		Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Inventory_EItemQuality()
	{
		if (!Z_Registration_Info_UEnum_EItemQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemQuality.InnerSingleton, Z_Construct_UEnum_Inventory_EItemQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemQuality.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EItemType, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> INVENTORY_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Inventory_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Inventory_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Potion", (int64)EItemType::Potion },
		{ "EItemType::Weapon", (int64)EItemType::Weapon },
		{ "EItemType::Cloth", (int64)EItemType::Cloth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Inventory_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "Cloth.DisplayName", "Cloth" },
		{ "Cloth.Name", "EItemType::Cloth" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
		{ "Potion.DisplayName", "Potion" },
		{ "Potion.Name", "EItemType::Potion" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EItemType::Weapon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_Inventory_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Inventory_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Inventory_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Inventory_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStatistics;
class UScriptStruct* FItemStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStatistics, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("ItemStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStatistics.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FItemStatistics>()
{
	return FItemStatistics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemStatistics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothRank_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothRank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SellValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatistics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStatistics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_HealPercent_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_HealPercent = { "HealPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStatistics, HealPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_HealPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_HealPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStatistics, DamageValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ClothRank_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ClothRank = { "ClothRank", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStatistics, ClothRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ClothRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ClothRank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue = { "SellValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStatistics, SellValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_HealPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ClothRank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		&NewStructOps,
		"ItemStatistics",
		sizeof(FItemStatistics),
		alignof(FItemStatistics),
		Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStatistics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemStatistics()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemStatistics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStatistics.InnerSingleton, Z_Construct_UScriptStruct_FItemStatistics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemStatistics.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemTextData;
class UScriptStruct* FItemTextData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemTextData, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("ItemTextData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FItemTextData>()
{
	return FItemTextData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemTextData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UsageText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemTextData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemTextData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemTextData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemTextData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemTextData, InteractionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemTextData, UsageText), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemTextData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		&NewStructOps,
		"ItemTextData",
		sizeof(FItemTextData),
		alignof(FItemTextData),
		Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemTextData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton, Z_Construct_UScriptStruct_FItemTextData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemNumericData;
class UScriptStruct* FItemNumericData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemNumericData, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("ItemNumericData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FItemNumericData>()
{
	return FItemNumericData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemNumericData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[];
#endif
		static void NewProp_bIsStackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemNumericData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemNumericData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemNumericData, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemNumericData, MaxStackSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
	{
		((FItemNumericData*)Obj)->bIsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FItemNumericData), &Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemNumericData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		&NewStructOps,
		"ItemNumericData",
		sizeof(FItemNumericData),
		alignof(FItemNumericData),
		Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton, Z_Construct_UScriptStruct_FItemNumericData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAssetData;
class UScriptStruct* FItemAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAssetData, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("ItemAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FItemAssetData>()
{
	return FItemAssetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemAssetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAssetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAssetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAssetData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAssetData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAssetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		&NewStructOps,
		"ItemAssetData",
		sizeof(FItemAssetData),
		alignof(FItemAssetData),
		Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton, Z_Construct_UScriptStruct_FItemAssetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStatistics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStatistics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumericData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_Inventory_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData)) }; // 1833787036
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, ItemQuality), Z_Construct_UEnum_Inventory_EItemQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_MetaData)) }; // 3230174023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics = { "ItemStatistics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, ItemStatistics), Z_Construct_UScriptStruct_FItemStatistics, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics_MetaData)) }; // 837371113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData = { "TextData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, TextData), Z_Construct_UScriptStruct_FItemTextData, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData_MetaData)) }; // 378377489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData = { "NumericData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, NumericData), Z_Construct_UScriptStruct_FItemNumericData, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData_MetaData)) }; // 404669468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, AssetData), Z_Construct_UScriptStruct_FItemAssetData, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData_MetaData)) }; // 3284415843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemData",
		sizeof(FItemData),
		alignof(FItemData),
		Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics::EnumInfo[] = {
		{ EItemQuality_StaticEnum, TEXT("EItemQuality"), &Z_Registration_Info_UEnum_EItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3230174023U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1833787036U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo[] = {
		{ FItemStatistics::StaticStruct, Z_Construct_UScriptStruct_FItemStatistics_Statics::NewStructOps, TEXT("ItemStatistics"), &Z_Registration_Info_UScriptStruct_ItemStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStatistics), 837371113U) },
		{ FItemTextData::StaticStruct, Z_Construct_UScriptStruct_FItemTextData_Statics::NewStructOps, TEXT("ItemTextData"), &Z_Registration_Info_UScriptStruct_ItemTextData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemTextData), 378377489U) },
		{ FItemNumericData::StaticStruct, Z_Construct_UScriptStruct_FItemNumericData_Statics::NewStructOps, TEXT("ItemNumericData"), &Z_Registration_Info_UScriptStruct_ItemNumericData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemNumericData), 404669468U) },
		{ FItemAssetData::StaticStruct, Z_Construct_UScriptStruct_FItemAssetData_Statics::NewStructOps, TEXT("ItemAssetData"), &Z_Registration_Info_UScriptStruct_ItemAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAssetData), 3284415843U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 1041367933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_3248970494(TEXT("/Script/Inventory"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Data_ItemDataStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
