// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/UserInterface/Inventory/InventoryTooltipWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryTooltipWidget() {}
// Cross Module References
	INVENTORY_API UClass* Z_Construct_UClass_UInventoryItemSlotWidget_NoRegister();
	INVENTORY_API UClass* Z_Construct_UClass_UInventoryTooltipWidget();
	INVENTORY_API UClass* Z_Construct_UClass_UInventoryTooltipWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	void UInventoryTooltipWidget::StaticRegisterNativesUInventoryTooltipWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryTooltipWidget);
	UClass* Z_Construct_UClass_UInventoryTooltipWidget_NoRegister()
	{
		return UInventoryTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotBeingHovered_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySlotBeingHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorRating_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmorRating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UsageText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackWeight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StackWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserInterface/Inventory/InventoryTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_InventorySlotBeingHovered_MetaData[] = {
		{ "Category", "InventoryTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_InventorySlotBeingHovered = { "InventorySlotBeingHovered", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, InventorySlotBeingHovered), Z_Construct_UClass_UInventoryItemSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_InventorySlotBeingHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_InventorySlotBeingHovered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemType_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, ItemType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_DamageValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, DamageValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_DamageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_DamageValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ArmorRating_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ArmorRating = { "ArmorRating", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, ArmorRating), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ArmorRating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ArmorRating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_UsageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, UsageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_UsageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_UsageText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, ItemDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_MaxStackSize_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, MaxStackSize), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_MaxStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_MaxStackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_StackWeight_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_StackWeight = { "StackWeight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryTooltipWidget, StackWeight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_StackWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_StackWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryTooltipWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_InventorySlotBeingHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_DamageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ArmorRating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_UsageText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_MaxStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltipWidget_Statics::NewProp_StackWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryTooltipWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryTooltipWidget_Statics::ClassParams = {
		&UInventoryTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryTooltipWidget()
	{
		if (!Z_Registration_Info_UClass_UInventoryTooltipWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryTooltipWidget.OuterSingleton, Z_Construct_UClass_UInventoryTooltipWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryTooltipWidget.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<UInventoryTooltipWidget>()
	{
		return UInventoryTooltipWidget::StaticClass();
	}
	UInventoryTooltipWidget::UInventoryTooltipWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryTooltipWidget);
	UInventoryTooltipWidget::~UInventoryTooltipWidget() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryTooltipWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryTooltipWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryTooltipWidget, UInventoryTooltipWidget::StaticClass, TEXT("UInventoryTooltipWidget"), &Z_Registration_Info_UClass_UInventoryTooltipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryTooltipWidget), 2482676833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryTooltipWidget_h_3004861784(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryTooltipWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryTooltipWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
