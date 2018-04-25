// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitLightEstimate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitLightEstimate() {}
// Cross Module References
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitLightEstimate();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
class UScriptStruct* FAppleARKitLightEstimate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APPLEARKIT_API uint32 Get_Z_Construct_UScriptStruct_FAppleARKitLightEstimate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLightEstimate, Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitLightEstimate"), sizeof(FAppleARKitLightEstimate), Get_Z_Construct_UScriptStruct_FAppleARKitLightEstimate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAppleARKitLightEstimate(FAppleARKitLightEstimate::StaticStruct, TEXT("/Script/AppleARKit"), TEXT("AppleARKitLightEstimate"), false, nullptr, nullptr);
static struct FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitLightEstimate
{
	FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitLightEstimate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AppleARKitLightEstimate")),new UScriptStruct::TCppStructOps<FAppleARKitLightEstimate>);
	}
} ScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitLightEstimate;
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitLightEstimate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAppleARKitLightEstimate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AppleARKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AppleARKitLightEstimate"), sizeof(FAppleARKitLightEstimate), Get_Z_Construct_UScriptStruct_FAppleARKitLightEstimate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AppleARKitLightEstimate.h" },
				{ "ToolTip", "A light estimate represented as spherical harmonics" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitLightEstimate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientColorTemperatureKelvin_MetaData[] = {
				{ "Category", "AppleARKit|Light Estimate" },
				{ "ModuleRelativePath", "Public/AppleARKitLightEstimate.h" },
				{ "ToolTip", "Color Temperature in Kelvin of light" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientColorTemperatureKelvin = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientColorTemperatureKelvin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitLightEstimate, AmbientColorTemperatureKelvin), METADATA_PARAMS(NewProp_AmbientColorTemperatureKelvin_MetaData, ARRAY_COUNT(NewProp_AmbientColorTemperatureKelvin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensity_MetaData[] = {
				{ "Category", "AppleARKit|Light Estimate" },
				{ "ModuleRelativePath", "Public/AppleARKitLightEstimate.h" },
				{ "ToolTip", "Ambient intensity of the lighting.\n\nIn a well lit environment, this value is close to 1000. It typically ranges from 0\n(very dark) to around 2000 (very bright)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAppleARKitLightEstimate, AmbientIntensity), METADATA_PARAMS(NewProp_AmbientIntensity_MetaData, ARRAY_COUNT(NewProp_AmbientIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
				{ "Category", "AppleARKit|Light Estimate" },
				{ "ModuleRelativePath", "Public/AppleARKitLightEstimate.h" },
				{ "ToolTip", "True if light estimation was enabled for the session and light estimation was successful" },
			};
#endif
			auto NewProp_bIsValid_SetBit = [](void* Obj){ ((FAppleARKitLightEstimate*)Obj)->bIsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAppleARKitLightEstimate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsValid_MetaData, ARRAY_COUNT(NewProp_bIsValid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbientColorTemperatureKelvin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbientIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsValid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AppleARKitLightEstimate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAppleARKitLightEstimate),
				alignof(FAppleARKitLightEstimate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAppleARKitLightEstimate_CRC() { return 3432956565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
