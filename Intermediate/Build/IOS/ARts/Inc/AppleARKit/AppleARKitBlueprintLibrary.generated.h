// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector2D;
enum class EAppleARKitHitTestResultType : uint8;
struct FAppleARKitHitTestResult;
struct FAppleARKitFrame;
#ifdef APPLEARKIT_AppleARKitBlueprintLibrary_generated_h
#error "AppleARKitBlueprintLibrary.generated.h already included, missing '#pragma once' in AppleARKitBlueprintLibrary.h"
#endif
#define APPLEARKIT_AppleARKitBlueprintLibrary_generated_h

#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitTestAtScreenPosition_TrackingSpace) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_ENUM(EAppleARKitHitTestResultType,Z_Param_Types); \
		P_GET_TARRAY_REF(FAppleARKitHitTestResult,Z_Param_Out_OutResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAppleARKitBlueprintLibrary::HitTestAtScreenPosition_TrackingSpace(Z_Param_WorldContextObject,Z_Param_ScreenPosition,EAppleARKitHitTestResultType(Z_Param_Types),Z_Param_Out_OutResults); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrame) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FAppleARKitFrame,Z_Param_Out_OutCurrentFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAppleARKitBlueprintLibrary::GetCurrentFrame(Z_Param_WorldContextObject,Z_Param_Out_OutCurrentFrame); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitTestAtScreenPosition_TrackingSpace) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition); \
		P_GET_ENUM(EAppleARKitHitTestResultType,Z_Param_Types); \
		P_GET_TARRAY_REF(FAppleARKitHitTestResult,Z_Param_Out_OutResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAppleARKitBlueprintLibrary::HitTestAtScreenPosition_TrackingSpace(Z_Param_WorldContextObject,Z_Param_ScreenPosition,EAppleARKitHitTestResultType(Z_Param_Types),Z_Param_Out_OutResults); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrame) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FAppleARKitFrame,Z_Param_Out_OutCurrentFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAppleARKitBlueprintLibrary::GetCurrentFrame(Z_Param_WorldContextObject,Z_Param_Out_OutCurrentFrame); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitBlueprintLibrary(); \
	friend APPLEARKIT_API class UClass* Z_Construct_UClass_UAppleARKitBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UAppleARKitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitBlueprintLibrary(); \
	friend APPLEARKIT_API class UClass* Z_Construct_UClass_UAppleARKitBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UAppleARKitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitBlueprintLibrary(UAppleARKitBlueprintLibrary&&); \
	NO_API UAppleARKitBlueprintLibrary(const UAppleARKitBlueprintLibrary&); \
public:


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitBlueprintLibrary(UAppleARKitBlueprintLibrary&&); \
	NO_API UAppleARKitBlueprintLibrary(const UAppleARKitBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitBlueprintLibrary)


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_13_PROLOG
#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_INCLASS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AppleARKit_Source_AppleARKit_Public_AppleARKitBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
