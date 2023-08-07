// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/UserInterface/Inventory/InventoryItemSlotWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemSlotWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORY_API UClass* Z_Construct_UClass_UDragItemVisualWidget_NoRegister();
	INVENTORY_API UClass* Z_Construct_UClass_UInventoryItemSlotWidget();
	INVENTORY_API UClass* Z_Construct_UClass_UInventoryItemSlotWidget_NoRegister();
	INVENTORY_API UClass* Z_Construct_UClass_UInventoryTooltipWidget_NoRegister();
	INVENTORY_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	void UInventoryItemSlotWidget::StaticRegisterNativesUInventoryItemSlotWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemSlotWidget);
	UClass* Z_Construct_UClass_UInventoryItemSlotWidget_NoRegister()
	{
		return UInventoryItemSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragItemVisualClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DragItemVisualClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserInterface/Inventory/InventoryItemSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_DragItemVisualClass_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_DragItemVisualClass = { "DragItemVisualClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItemSlotWidget, DragItemVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDragItemVisualWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_DragItemVisualClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_DragItemVisualClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_TooltipClass_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_TooltipClass = { "TooltipClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItemSlotWidget, TooltipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_TooltipClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_TooltipClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemReference_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemReference = { "ItemReference", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItemSlotWidget, ItemReference), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemBorder = { "ItemBorder", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItemSlotWidget, ItemBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItemSlotWidget, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlotWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItemSlotWidget, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemQuantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemSlotWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_DragItemVisualClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_TooltipClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlotWidget_Statics::NewProp_ItemQuantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemSlotWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemSlotWidget_Statics::ClassParams = {
		&UInventoryItemSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryItemSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItemSlotWidget()
	{
		if (!Z_Registration_Info_UClass_UInventoryItemSlotWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemSlotWidget.OuterSingleton, Z_Construct_UClass_UInventoryItemSlotWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItemSlotWidget.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<UInventoryItemSlotWidget>()
	{
		return UInventoryItemSlotWidget::StaticClass();
	}
	UInventoryItemSlotWidget::UInventoryItemSlotWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemSlotWidget);
	UInventoryItemSlotWidget::~UInventoryItemSlotWidget() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryItemSlotWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryItemSlotWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemSlotWidget, UInventoryItemSlotWidget::StaticClass, TEXT("UInventoryItemSlotWidget"), &Z_Registration_Info_UClass_UInventoryItemSlotWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemSlotWidget), 1430394385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryItemSlotWidget_h_766838632(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryItemSlotWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_InventoryItemSlotWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
