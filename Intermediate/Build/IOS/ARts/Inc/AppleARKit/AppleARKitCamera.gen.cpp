// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitCamera() {}
// Cross Module References
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitCamera();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
// End Cross Module References
class UScriptStruct* FAppleARKitCamera::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APPLEARKIT_API uint32 Get_Z_Construct_UScriptStruct_FAppleARKitCamera_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitCamera, Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitCamera"), sizeof(FAppleARKitCamera), Get_Z_Construct_UScriptStruct_FAppleARKitCamera_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAppleARKitCamera(FAppleARKitCamera::StaticStruct, TEXT("/Script/AppleARKit"), TEXT("AppleARKitCamera"), false, nullptr, nullptr);
static struct FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitCamera
{
	FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitCamera()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AppleARKitCamera")),new UScriptStruct::TCppStructOps<FAppleARKitCamera>);
	}
} ScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitCamera;
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitCamera()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAppleARKitCamera_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AppleARKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AppleARKitCamera"), sizeof(FAppleARKitCamera), Get_Z_Construct_UScriptStruct_FAppleARKitCamera_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AppleARKit" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "A model representing the camera and its properties at a single point in time." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitCamera>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "Camera principal point in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrincipalPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PrincipalPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, PrincipalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_PrincipalPoint_MetaData, ARRAY_COUNT(NewProp_PrincipalPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "Camera focal length in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocalLength = { UE4CodeGen_Private::EPropertyClass::Struct, "FocalLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, FocalLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_FocalLength_MetaData, ARRAY_COUNT(NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageResolution_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "Camera image resolution in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "ImageResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, ImageResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ImageResolution_MetaData, ARRAY_COUNT(NewProp_ImageResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "Raw position of the camera" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "Raw orientation of the camera" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "The transformation matrix that defines the camera's rotation and translation in world coordinates." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingQuality_MetaData[] = {
				{ "Category", "AppleARKit|Camera" },
				{ "ModuleRelativePath", "Public/AppleARKitCamera.h" },
				{ "ToolTip", "The tracking quality of the camera." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingQuality = { UE4CodeGen_Private::EPropertyClass::Enum, "TrackingQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitCamera, TrackingQuality), Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, METADATA_PARAMS(NewProp_TrackingQuality_MetaData, ARRAY_COUNT(NewProp_TrackingQuality_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingQuality_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrincipalPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocalLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingQuality_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AppleARKitCamera",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAppleARKitCamera),
				alignof(FAppleARKitCamera),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAppleARKitCamera_CRC() { return 1462392966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
