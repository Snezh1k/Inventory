// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define INVENTORY_InteractionInterface_generated_h

#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractableData_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FInteractableData>();

#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_SPARSE_DATA
#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_RPC_WRAPPERS
#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_ACCESSORS
#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORY_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORY_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INVENTORY_API UInteractionInterface(UInteractionInterface&&); \
	INVENTORY_API UInteractionInterface(const UInteractionInterface&); \
public: \
	INVENTORY_API virtual ~UInteractionInterface();


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORY_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	INVENTORY_API UInteractionInterface(UInteractionInterface&&); \
	INVENTORY_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORY_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	INVENTORY_API virtual ~UInteractionInterface();


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Inventory"), INVENTORY_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_GENERATED_UINTERFACE_BODY() \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_GENERATED_UINTERFACE_BODY() \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_51_PROLOG
#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_RPC_WRAPPERS \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_SPARSE_DATA \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_ACCESSORS \
	FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Inventory_Source_Inventory_Public_Interfaces_InteractionInterface_h


#define FOREACH_ENUM_EINTERACTABLETYPE(op) \
	op(EInteractableType::Pickup) \
	op(EInteractableType::Storage) \
	op(EInteractableType::Device) \
	op(EInteractableType::NonPlayerCharacter) \
	op(EInteractableType::Toggle) 

enum class EInteractableType : uint8;
template<> struct TIsUEnumClass<EInteractableType> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EInteractableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
