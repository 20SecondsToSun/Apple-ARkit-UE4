// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
#ifdef APPLEARKIT_AppleARKitPlaneAnchor_generated_h
#error "AppleARKitPlaneAnchor.generated.h already included, missing '#pragma once' in AppleARKitPlaneAnchor.h"
#endif
#define APPLEARKIT_AppleARKitPlaneAnchor_generated_h

#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransformToCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformToCenter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransformToCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformToCenter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitPlaneAnchor(); \
	friend APPLEARKIT_API class UClass* Z_Construct_UClass_UAppleARKitPlaneAnchor(); \
public: \
	DECLARE_CLASS(UAppleARKitPlaneAnchor, UAppleARKitAnchor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitPlaneAnchor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitPlaneAnchor(); \
	friend APPLEARKIT_API class UClass* Z_Construct_UClass_UAppleARKitPlaneAnchor(); \
public: \
	DECLARE_CLASS(UAppleARKitPlaneAnchor, UAppleARKitAnchor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitPlaneAnchor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitPlaneAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitPlaneAnchor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitPlaneAnchor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitPlaneAnchor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitPlaneAnchor(UAppleARKitPlaneAnchor&&); \
	NO_API UAppleARKitPlaneAnchor(const UAppleARKitPlaneAnchor&); \
public:


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitPlaneAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitPlaneAnchor(UAppleARKitPlaneAnchor&&); \
	NO_API UAppleARKitPlaneAnchor(const UAppleARKitPlaneAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitPlaneAnchor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitPlaneAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitPlaneAnchor)


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_16_PROLOG
#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_INCLASS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitPlaneAnchor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
