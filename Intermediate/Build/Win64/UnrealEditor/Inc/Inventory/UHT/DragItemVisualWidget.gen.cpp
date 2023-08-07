// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/UserInterface/Inventory/DragItemVisualWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragItemVisualWidget() {}
// Cross Module References
	INVENTORY_API UClass* Z_Construct_UClass_UDragItemVisualWidget();
	INVENTORY_API UClass* Z_Construct_UClass_UDragItemVisualWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	void UDragItemVisualWidget::StaticRegisterNativesUDragItemVisualWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragItemVisualWidget);
	UClass* Z_Construct_UClass_UDragItemVisualWidget_NoRegister()
	{
		return UDragItemVisualWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDragItemVisualWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UDragItemVisualWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisualWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserInterface/Inventory/DragItemVisualWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisualWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisualWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemBorder = { "ItemBorder", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragItemVisualWidget, ItemBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisualWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragItemVisualWidget, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisualWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragItemVisualWidget, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemQuantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragItemVisualWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisualWidget_Statics::NewProp_ItemQuantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragItemVisualWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragItemVisualWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragItemVisualWidget_Statics::ClassParams = {
		&UDragItemVisualWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragItemVisualWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisualWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragItemVisualWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisualWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragItemVisualWidget()
	{
		if (!Z_Registration_Info_UClass_UDragItemVisualWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragItemVisualWidget.OuterSingleton, Z_Construct_UClass_UDragItemVisualWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragItemVisualWidget.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<UDragItemVisualWidget>()
	{
		return UDragItemVisualWidget::StaticClass();
	}
	UDragItemVisualWidget::UDragItemVisualWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragItemVisualWidget);
	UDragItemVisualWidget::~UDragItemVisualWidget() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_DragItemVisualWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_DragItemVisualWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragItemVisualWidget, UDragItemVisualWidget::StaticClass, TEXT("UDragItemVisualWidget"), &Z_Registration_Info_UClass_UDragItemVisualWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragItemVisualWidget), 1191381573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_DragItemVisualWidget_h_1384411462(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_DragItemVisualWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Inventory_DragItemVisualWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
