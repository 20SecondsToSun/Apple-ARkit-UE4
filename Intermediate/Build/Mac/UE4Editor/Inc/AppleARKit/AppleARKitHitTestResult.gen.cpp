// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitHitTestResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitHitTestResult() {}
// Cross Module References
	APPLEARKIT_API UEnum* Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitHitTestResult();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitAnchor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* EAppleARKitHitTestResultType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType, Z_Construct_UPackage__Script_AppleARKit(), TEXT("EAppleARKitHitTestResultType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAppleARKitHitTestResultType(EAppleARKitHitTestResultType_StaticEnum, TEXT("/Script/AppleARKit"), TEXT("EAppleARKitHitTestResultType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType_CRC() { return 540195408U; }
	UEnum* Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AppleARKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAppleARKitHitTestResultType"), 0, Get_Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAppleARKitHitTestResultType::None", (int64)EAppleARKitHitTestResultType::None },
				{ "EAppleARKitHitTestResultType::FeaturePoint", (int64)EAppleARKitHitTestResultType::FeaturePoint },
				{ "EAppleARKitHitTestResultType::EstimatedHorizontalPlane", (int64)EAppleARKitHitTestResultType::EstimatedHorizontalPlane },
				{ "EAppleARKitHitTestResultType::ExistingPlane", (int64)EAppleARKitHitTestResultType::ExistingPlane },
				{ "EAppleARKitHitTestResultType::ExistingPlaneUsingExtent", (int64)EAppleARKitHitTestResultType::ExistingPlaneUsingExtent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Category", "AppleARKit" },
				{ "EstimatedHorizontalPlane.DisplayName", "Estimated Horizontal Plane" },
				{ "EstimatedHorizontalPlane.ToolTip", "Result type from intersecting a horizontal plane estimate, determined for the current frame." },
				{ "ExistingPlane.DisplayName", "Existing Plane" },
				{ "ExistingPlane.ToolTip", "Result type from intersecting with an existing plane anchor." },
				{ "ExistingPlaneUsingExtent.DisplayName", "Existing Plane Using Extent" },
				{ "ExistingPlaneUsingExtent.ToolTip", "Result type from intersecting with an existing plane anchor." },
				{ "FeaturePoint.DisplayName", "Feature Point" },
				{ "FeaturePoint.ToolTip", "Result type from intersecting the nearest feature point." },
				{ "ModuleRelativePath", "Public/AppleARKitHitTestResult.h" },
				{ "ToolTip", "Option set of hit-test result types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AppleARKit,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAppleARKitHitTestResultType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAppleARKitHitTestResultType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAppleARKitHitTestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APPLEARKIT_API uint32 Get_Z_Construct_UScriptStruct_FAppleARKitHitTestResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitHitTestResult, Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitHitTestResult"), sizeof(FAppleARKitHitTestResult), Get_Z_Construct_UScriptStruct_FAppleARKitHitTestResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAppleARKitHitTestResult(FAppleARKitHitTestResult::StaticStruct, TEXT("/Script/AppleARKit"), TEXT("AppleARKitHitTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitHitTestResult
{
	FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitHitTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AppleARKitHitTestResult")),new UScriptStruct::TCppStructOps<FAppleARKitHitTestResult>);
	}
} ScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitHitTestResult;
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitHitTestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAppleARKitHitTestResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AppleARKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AppleARKitHitTestResult"), sizeof(FAppleARKitHitTestResult), Get_Z_Construct_UScriptStruct_FAppleARKitHitTestResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AppleARKit" },
				{ "ModuleRelativePath", "Public/AppleARKitHitTestResult.h" },
				{ "ToolTip", "A result of an intersection found during a hit-test." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitHitTestResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
				{ "Category", "AppleARKitHitTestResult" },
				{ "ModuleRelativePath", "Public/AppleARKitHitTestResult.h" },
				{ "ToolTip", "The anchor that the hit-test intersected.\n\nAn anchor will only be provided for existing plane result types." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anchor = { UE4CodeGen_Private::EPropertyClass::Object, "Anchor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitHitTestResult, Anchor), Z_Construct_UClass_UAppleARKitAnchor_NoRegister, METADATA_PARAMS(NewProp_Anchor_MetaData, ARRAY_COUNT(NewProp_Anchor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "Category", "AppleARKitHitTestResult" },
				{ "ModuleRelativePath", "Public/AppleARKitHitTestResult.h" },
				{ "ToolTip", "The transformation matrix that defines the intersection's rotation, translation and scale\nrelative to the world." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitHitTestResult, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
				{ "Category", "AppleARKitHitTestResult" },
				{ "ModuleRelativePath", "Public/AppleARKitHitTestResult.h" },
				{ "ToolTip", "The distance from the camera to the intersection in meters." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitHitTestResult, Distance), METADATA_PARAMS(NewProp_Distance_MetaData, ARRAY_COUNT(NewProp_Distance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "Category", "AppleARKitHitTestResult" },
				{ "ModuleRelativePath", "Public/AppleARKitHitTestResult.h" },
				{ "ToolTip", "The type of the hit-test result." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitHitTestResult, Type), Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Anchor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AppleARKitHitTestResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAppleARKitHitTestResult),
				alignof(FAppleARKitHitTestResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAppleARKitHitTestResult_CRC() { return 289490244U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
