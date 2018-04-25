// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitFrame() {}
// Cross Module References
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitFrame();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
class UScriptStruct* FAppleARKitFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APPLEARKIT_API uint32 Get_Z_Construct_UScriptStruct_FAppleARKitFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitFrame, Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitFrame"), sizeof(FAppleARKitFrame), Get_Z_Construct_UScriptStruct_FAppleARKitFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAppleARKitFrame(FAppleARKitFrame::StaticStruct, TEXT("/Script/AppleARKit"), TEXT("AppleARKitFrame"), false, nullptr, nullptr);
static struct FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitFrame
{
	FScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AppleARKitFrame")),new UScriptStruct::TCppStructOps<FAppleARKitFrame>);
	}
} ScriptStruct_AppleARKit_StaticRegisterNativesFAppleARKitFrame;
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAppleARKitFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AppleARKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AppleARKitFrame"), sizeof(FAppleARKitFrame), Get_Z_Construct_UScriptStruct_FAppleARKitFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AppleARKit" },
				{ "ModuleRelativePath", "Public/AppleARKitFrame.h" },
				{ "ToolTip", "An object representing a frame processed by FAppleARKitSystem.\n@discussion Each frame contains information about the current state of the scene." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitFrame>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AppleARKitFrame",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAppleARKitFrame),
				alignof(FAppleARKitFrame),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAppleARKitFrame_CRC() { return 2849393003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
