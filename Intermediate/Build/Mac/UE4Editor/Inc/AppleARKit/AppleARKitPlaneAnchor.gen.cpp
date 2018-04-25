// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitPlaneAnchor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitPlaneAnchor() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitPlaneAnchor_NoRegister();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitPlaneAnchor();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitAnchor();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	APPLEARKIT_API UFunction* Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetCenter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	APPLEARKIT_API UFunction* Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetExtent();
	APPLEARKIT_API UFunction* Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetTransformToCenter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UAppleARKitPlaneAnchor::StaticRegisterNativesUAppleARKitPlaneAnchor()
	{
		UClass* Class = UAppleARKitPlaneAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCenter", &UAppleARKitPlaneAnchor::execGetCenter },
			{ "GetExtent", &UAppleARKitPlaneAnchor::execGetExtent },
			{ "GetTransformToCenter", &UAppleARKitPlaneAnchor::execGetTransformToCenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetCenter()
	{
		struct AppleARKitPlaneAnchor_eventGetCenter_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AppleARKitPlaneAnchor_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AppleARKitPlaneAnchor" },
				{ "ModuleRelativePath", "Public/AppleARKitPlaneAnchor.h" },
				{ "ToolTip", "The center of the plane in the anchor\xe2\x80\x99s coordinate space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitPlaneAnchor, "GetCenter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AppleARKitPlaneAnchor_eventGetCenter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetExtent()
	{
		struct AppleARKitPlaneAnchor_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AppleARKitPlaneAnchor_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AppleARKitPlaneAnchor" },
				{ "ModuleRelativePath", "Public/AppleARKitPlaneAnchor.h" },
				{ "ToolTip", "The extent of the plane in the anchor\xe2\x80\x99s coordinate space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitPlaneAnchor, "GetExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AppleARKitPlaneAnchor_eventGetExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetTransformToCenter()
	{
		struct AppleARKitPlaneAnchor_eventGetTransformToCenter_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AppleARKitPlaneAnchor_eventGetTransformToCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AppleARKitPlaneAnchor" },
				{ "ModuleRelativePath", "Public/AppleARKitPlaneAnchor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitPlaneAnchor, "GetTransformToCenter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AppleARKitPlaneAnchor_eventGetTransformToCenter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAppleARKitPlaneAnchor_NoRegister()
	{
		return UAppleARKitPlaneAnchor::StaticClass();
	}
	UClass* Z_Construct_UClass_UAppleARKitPlaneAnchor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAppleARKitAnchor,
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetCenter, "GetCenter" }, // 1834903299
				{ &Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetExtent, "GetExtent" }, // 1208551639
				{ &Z_Construct_UFunction_UAppleARKitPlaneAnchor_GetTransformToCenter, "GetTransformToCenter" }, // 2489889474
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AppleARKitPlaneAnchor.h" },
				{ "ModuleRelativePath", "Public/AppleARKitPlaneAnchor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAppleARKitPlaneAnchor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAppleARKitPlaneAnchor::StaticClass,
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
	IMPLEMENT_CLASS(UAppleARKitPlaneAnchor, 2182264559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppleARKitPlaneAnchor(Z_Construct_UClass_UAppleARKitPlaneAnchor, &UAppleARKitPlaneAnchor::StaticClass, TEXT("/Script/AppleARKit"), TEXT("UAppleARKitPlaneAnchor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitPlaneAnchor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
