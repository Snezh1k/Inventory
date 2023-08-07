// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Interfaces/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INVENTORY_API UClass* Z_Construct_UClass_UInteractionInterface();
	INVENTORY_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInteractableType();
	INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractableType;
	static UEnum* EInteractableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EInteractableType, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EInteractableType"));
		}
		return Z_Registration_Info_UEnum_EInteractableType.OuterSingleton;
	}
	template<> INVENTORY_API UEnum* StaticEnum<EInteractableType>()
	{
		return EInteractableType_StaticEnum();
	}
	struct Z_Construct_UEnum_Inventory_EInteractableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Inventory_EInteractableType_Statics::Enumerators[] = {
		{ "EInteractableType::Pickup", (int64)EInteractableType::Pickup },
		{ "EInteractableType::Storage", (int64)EInteractableType::Storage },
		{ "EInteractableType::Device", (int64)EInteractableType::Device },
		{ "EInteractableType::NonPlayerCharacter", (int64)EInteractableType::NonPlayerCharacter },
		{ "EInteractableType::Toggle", (int64)EInteractableType::Toggle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Inventory_EInteractableType_Statics::Enum_MetaDataParams[] = {
		{ "Device.DisplayName", "Device" },
		{ "Device.Name", "EInteractableType::Device" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
		{ "NonPlayerCharacter.DisplayName", "NonPlayerCharacter" },
		{ "NonPlayerCharacter.Name", "EInteractableType::NonPlayerCharacter" },
		{ "Pickup.DisplayName", "Pickup" },
		{ "Pickup.Name", "EInteractableType::Pickup" },
		{ "Storage.DisplayName", "Storage" },
		{ "Storage.Name", "EInteractableType::Storage" },
		{ "Toggle.DisplayName", "Toggle" },
		{ "Toggle.Name", "EInteractableType::Toggle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EInteractableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		"EInteractableType",
		"EInteractableType",
		Z_Construct_UEnum_Inventory_EInteractableType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInteractableType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Inventory_EInteractableType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInteractableType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Inventory_EInteractableType()
	{
		if (!Z_Registration_Info_UEnum_EInteractableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractableType.InnerSingleton, Z_Construct_UEnum_Inventory_EInteractableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractableType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractableData;
class UScriptStruct* FInteractableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableData, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("InteractableData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FInteractableData>()
{
	return FInteractableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractableType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractableType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType = { "InteractableType", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableData, InteractableType), Z_Construct_UEnum_Inventory_EInteractableType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_MetaData)) }; // 1692969256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableData, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableData, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration = { "InteractionDuration", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableData, InteractionDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
		nullptr,
		&NewStructOps,
		"InteractableData",
		sizeof(FInteractableData),
		alignof(FInteractableData),
		Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractableData()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton, Z_Construct_UScriptStruct_FInteractableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton;
	}
	void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInterface);
	UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
	{
		return UInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
		&UInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<UInteractionInterface>()
	{
		return UInteractionInterface::StaticClass();
	}
	UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
	UInteractionInterface::~UInteractionInterface() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo[] = {
		{ EInteractableType_StaticEnum, TEXT("EInteractableType"), &Z_Registration_Info_UEnum_EInteractableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1692969256U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo[] = {
		{ FInteractableData::StaticStruct, Z_Construct_UScriptStruct_FInteractableData_Statics::NewStructOps, TEXT("InteractableData"), &Z_Registration_Info_UScriptStruct_InteractableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractableData), 2779390674U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 3203336083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_3343953483(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
