// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/UserInterface/Interaction/InteractionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionWidget() {}
// Cross Module References
	INVENTORY_API UClass* Z_Construct_UClass_AInventoryCharacter_NoRegister();
	INVENTORY_API UClass* Z_Construct_UClass_UInteractionWidget();
	INVENTORY_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionWidget::execUpdateInteractionProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->UpdateInteractionProgress();
		P_NATIVE_END;
	}
	void UInteractionWidget::StaticRegisterNativesUInteractionWidget()
	{
		UClass* Class = UInteractionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateInteractionProgress", &UInteractionWidget::execUpdateInteractionProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics
	{
		struct InteractionWidget_eventUpdateInteractionProgress_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionWidget_eventUpdateInteractionProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidget, nullptr, "UpdateInteractionProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::InteractionWidget_eventUpdateInteractionProgress_Parms), Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionWidget);
	UClass* Z_Construct_UClass_UInteractionWidget_NoRegister()
	{
		return UInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantityText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuantityText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPressText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPressText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentInteractionDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionWidget_UpdateInteractionProgress, "UpdateInteractionProgress" }, // 190962972
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserInterface/Interaction/InteractionWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_PlayerReference_MetaData[] = {
		{ "Category", "Interaction Widget | Player Reference" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_PlayerReference = { "PlayerReference", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, PlayerReference), Z_Construct_UClass_AInventoryCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_PlayerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_PlayerReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_NameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_NameText = { "NameText", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_NameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, ActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_ActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_ActionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_QuantityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_QuantityText = { "QuantityText", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, QuantityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_QuantityText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_QuantityText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_KeyPressText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_KeyPressText = { "KeyPressText", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, KeyPressText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_KeyPressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_KeyPressText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_InteractionProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_InteractionProgressBar = { "InteractionProgressBar", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, InteractionProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_InteractionProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_InteractionProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_CurrentInteractionDuration_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction Widget | Interactable Data" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_CurrentInteractionDuration = { "CurrentInteractionDuration", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionWidget, CurrentInteractionDuration), METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_CurrentInteractionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_CurrentInteractionDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_PlayerReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_NameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_ActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_QuantityText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_KeyPressText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_InteractionProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_CurrentInteractionDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionWidget_Statics::ClassParams = {
		&UInteractionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionWidget()
	{
		if (!Z_Registration_Info_UClass_UInteractionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionWidget.OuterSingleton, Z_Construct_UClass_UInteractionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionWidget.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<UInteractionWidget>()
	{
		return UInteractionWidget::StaticClass();
	}
	UInteractionWidget::UInteractionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionWidget);
	UInteractionWidget::~UInteractionWidget() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionWidget, UInteractionWidget::StaticClass, TEXT("UInteractionWidget"), &Z_Registration_Info_UClass_UInteractionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionWidget), 2333598884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_2823787791(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
