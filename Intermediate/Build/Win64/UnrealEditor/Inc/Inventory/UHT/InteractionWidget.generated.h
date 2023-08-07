// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/Interaction/InteractionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_InteractionWidget_generated_h
#error "InteractionWidget.generated.h already included, missing '#pragma once' in InteractionWidget.h"
#endif
#define INVENTORY_InteractionWidget_generated_h

#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_SPARSE_DATA
#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateInteractionProgress);


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateInteractionProgress);


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_ACCESSORS
#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionWidget(); \
	friend struct Z_Construct_UClass_UInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(UInteractionWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInteractionWidget)


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionWidget(); \
	friend struct Z_Construct_UClass_UInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(UInteractionWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInteractionWidget)


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionWidget(UInteractionWidget&&); \
	NO_API UInteractionWidget(const UInteractionWidget&); \
public: \
	NO_API virtual ~UInteractionWidget();


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionWidget(UInteractionWidget&&); \
	NO_API UInteractionWidget(const UInteractionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionWidget) \
	NO_API virtual ~UInteractionWidget();


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_16_PROLOG
#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_RPC_WRAPPERS \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_INCLASS \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UInteractionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Inventory_Source_Inventory_Public_UserInterface_Interaction_InteractionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
