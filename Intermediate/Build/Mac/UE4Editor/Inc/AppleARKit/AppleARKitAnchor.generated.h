// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef APPLEARKIT_AppleARKitAnchor_generated_h
#error "AppleARKitAnchor.generated.h already included, missing '#pragma once' in AppleARKitAnchor.h"
#endif
#define APPLEARKIT_AppleARKitAnchor_generated_h

#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitAnchor(); \
	friend APPLEARKIT_API class UClass* Z_Construct_UClass_UAppleARKitAnchor(); \
public: \
	DECLARE_CLASS(UAppleARKitAnchor, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitAnchor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitAnchor(); \
	friend APPLEARKIT_API class UClass* Z_Construct_UClass_UAppleARKitAnchor(); \
public: \
	DECLARE_CLASS(UAppleARKitAnchor, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitAnchor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitAnchor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitAnchor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitAnchor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitAnchor(UAppleARKitAnchor&&); \
	NO_API UAppleARKitAnchor(const UAppleARKitAnchor&); \
public:


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitAnchor(UAppleARKitAnchor&&); \
	NO_API UAppleARKitAnchor(const UAppleARKitAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitAnchor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitAnchor)


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_19_PROLOG
#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_INCLASS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitAnchor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
