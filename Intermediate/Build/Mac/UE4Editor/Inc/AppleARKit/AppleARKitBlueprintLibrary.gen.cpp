// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitBlueprintLibrary() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitBlueprintLibrary_NoRegister();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	APPLEARKIT_API UFunction* Z_Construct_UFunction_UAppleARKitBlueprintLibrary_GetCurrentFrame();
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitFrame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	APPLEARKIT_API UFunction* Z_Construct_UFunction_UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace();
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitHitTestResult();
	APPLEARKIT_API UEnum* Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UAppleARKitBlueprintLibrary::StaticRegisterNativesUAppleARKitBlueprintLibrary()
	{
		UClass* Class = UAppleARKitBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentFrame", &UAppleARKitBlueprintLibrary::execGetCurrentFrame },
			{ "HitTestAtScreenPosition_TrackingSpace", &UAppleARKitBlueprintLibrary::execHitTestAtScreenPosition_TrackingSpace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAppleARKitBlueprintLibrary_GetCurrentFrame()
	{
		struct AppleARKitBlueprintLibrary_eventGetCurrentFrame_Parms
		{
			UObject* WorldContextObject;
			FAppleARKitFrame OutCurrentFrame;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AppleARKitBlueprintLibrary_eventGetCurrentFrame_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AppleARKitBlueprintLibrary_eventGetCurrentFrame_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCurrentFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "OutCurrentFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AppleARKitBlueprintLibrary_eventGetCurrentFrame_Parms, OutCurrentFrame), Z_Construct_UScriptStruct_FAppleARKitFrame, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AppleARKitBlueprintLibrary_eventGetCurrentFrame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutCurrentFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AppleARKit" },
				{ "Keywords", "ar augmentedreality augmented reality frame" },
				{ "ModuleRelativePath", "Public/AppleARKitBlueprintLibrary.h" },
				{ "ToolTip", "Returns the last processed FAppleARKitFrame from the session.\n\nWhen called from the game thread, we ensure a single frame is returned for the duration\nof the game thread update by watching for changes to GFrameNumber to trigger pulling a\nnew frame from the session. yuri test" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitBlueprintLibrary, "GetCurrentFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04442401, sizeof(AppleARKitBlueprintLibrary_eventGetCurrentFrame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace()
	{
		struct AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			EAppleARKitHitTestResultType Types;
			TArray<FAppleARKitHitTestResult> OutResults;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutResults = { UE4CodeGen_Private::EPropertyClass::Array, "OutResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms, OutResults), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAppleARKitHitTestResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Types = { UE4CodeGen_Private::EPropertyClass::Enum, "Types", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms, Types), Z_Construct_UEnum_AppleARKit_EAppleARKitHitTestResultType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Types_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ScreenPosition_MetaData, ARRAY_COUNT(NewProp_ScreenPosition_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutResults,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutResults_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Types,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Types_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AppleARKit" },
				{ "Keywords", "ar augmentedreality augmented reality trace hittest hit line" },
				{ "ModuleRelativePath", "Public/AppleARKitBlueprintLibrary.h" },
				{ "ToolTip", "Searches the last processed frame for anchors corresponding to a point in the captured image.\n\nA 2D point in the captured image's coordinate space can refer to any point along a line segment\nin the 3D coordinate space. Hit-testing is the process of finding anchors of a frame located along this line segment.\n\nNOTE: The hit test locations are reported in ARKit space. For hit test results\nin game world coordinates, you're after UAppleARKitCameraComponent::HitTestAtScreenPosition\n\n@param ScreenPosition The viewport pixel coordinate of the trace origin." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitBlueprintLibrary, "HitTestAtScreenPosition_TrackingSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C42401, sizeof(AppleARKitBlueprintLibrary_eventHitTestAtScreenPosition_TrackingSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAppleARKitBlueprintLibrary_NoRegister()
	{
		return UAppleARKitBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAppleARKitBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAppleARKitBlueprintLibrary_GetCurrentFrame, "GetCurrentFrame" }, // 235623947
				{ &Z_Construct_UFunction_UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace, "HitTestAtScreenPosition_TrackingSpace" }, // 4114053149
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AppleARKitBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Public/AppleARKitBlueprintLibrary.h" },
				{ "ScriptName", "AppleARKitLibrary" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAppleARKitBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAppleARKitBlueprintLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAppleARKitBlueprintLibrary, 3037464706);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppleARKitBlueprintLibrary(Z_Construct_UClass_UAppleARKitBlueprintLibrary, &UAppleARKitBlueprintLibrary::StaticClass, TEXT("/Script/AppleARKit"), TEXT("UAppleARKitBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
