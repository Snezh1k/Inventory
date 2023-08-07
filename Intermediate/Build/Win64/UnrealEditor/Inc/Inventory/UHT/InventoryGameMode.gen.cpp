// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Framework/InventoryGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	INVENTORY_API UClass* Z_Construct_UClass_AInventoryGameMode();
	INVENTORY_API UClass* Z_Construct_UClass_AInventoryGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	void AInventoryGameMode::StaticRegisterNativesAInventoryGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryGameMode);
	UClass* Z_Construct_UClass_AInventoryGameMode_NoRegister()
	{
		return AInventoryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Framework/InventoryGameMode.h" },
		{ "ModuleRelativePath", "Public/Framework/InventoryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryGameMode_Statics::ClassParams = {
		&AInventoryGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryGameMode()
	{
		if (!Z_Registration_Info_UClass_AInventoryGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryGameMode.OuterSingleton, Z_Construct_UClass_AInventoryGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInventoryGameMode.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<AInventoryGameMode>()
	{
		return AInventoryGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryGameMode);
	AInventoryGameMode::~AInventoryGameMode() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Framework_InventoryGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Framework_InventoryGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryGameMode, AInventoryGameMode::StaticClass, TEXT("AInventoryGameMode"), &Z_Registration_Info_UClass_AInventoryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryGameMode), 369933604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Framework_InventoryGameMode_h_2077294139(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Framework_InventoryGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Framework_InventoryGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
