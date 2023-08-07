// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Player/InventoryPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	INVENTORY_API UClass* Z_Construct_UClass_AInventoryPlayerController();
	INVENTORY_API UClass* Z_Construct_UClass_AInventoryPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References
	void AInventoryPlayerController::StaticRegisterNativesAInventoryPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryPlayerController);
	UClass* Z_Construct_UClass_AInventoryPlayerController_NoRegister()
	{
		return AInventoryPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/InventoryPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/InventoryPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryPlayerController_Statics::ClassParams = {
		&AInventoryPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryPlayerController()
	{
		if (!Z_Registration_Info_UClass_AInventoryPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryPlayerController.OuterSingleton, Z_Construct_UClass_AInventoryPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInventoryPlayerController.OuterSingleton;
	}
	template<> INVENTORY_API UClass* StaticClass<AInventoryPlayerController>()
	{
		return AInventoryPlayerController::StaticClass();
	}
	AInventoryPlayerController::AInventoryPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryPlayerController);
	AInventoryPlayerController::~AInventoryPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryPlayerController, AInventoryPlayerController::StaticClass, TEXT("AInventoryPlayerController"), &Z_Registration_Info_UClass_AInventoryPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryPlayerController), 3194611704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryPlayerController_h_1684975042(TEXT("/Script/Inventory"),
		Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Inventory_Source_Inventory_Public_Player_InventoryPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
