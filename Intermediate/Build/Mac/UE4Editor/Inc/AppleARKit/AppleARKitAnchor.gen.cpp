// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AppleARKitAnchor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitAnchor() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitAnchor_NoRegister();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitAnchor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	APPLEARKIT_API UFunction* Z_Construct_UFunction_UAppleARKitAnchor_GetTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UAppleARKitAnchor::StaticRegisterNativesUAppleARKitAnchor()
	{
		UClass* Class = UAppleARKitAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransform", &UAppleARKitAnchor::execGetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAppleARKitAnchor_GetTransform()
	{
		struct AppleARKitAnchor_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AppleARKitAnchor_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AppleARKitAnchor" },
				{ "ModuleRelativePath", "Public/AppleARKitAnchor.h" },
				{ "ToolTip", "The transformation matrix that defines the anchor's rotation, translation and scale.\n\nNOTE: This does not have Session::BaseTransform applied due to thread safety issues. You'll\nneed to apply this yourself in the game thread.\n\n@todo arkit Fix this ^" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitAnchor, "GetTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AppleARKitAnchor_eventGetTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAppleARKitAnchor_NoRegister()
	{
		return UAppleARKitAnchor::StaticClass();
	}
	UClass* Z_Construct_UClass_UAppleARKitAnchor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAppleARKitAnchor_GetTransform, "GetTransform" }, // 202452987
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AppleARKitAnchor.h" },
				{ "ModuleRelativePath", "Public/AppleARKitAnchor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/AppleARKitAnchor.h" },
				{ "ToolTip", "Unique identifier of the anchor." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Struct, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAppleARKitAnchor, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Identifier_MetaData, ARRAY_COUNT(NewProp_Identifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAppleARKitAnchor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAppleARKitAnchor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAppleARKitAnchor, 2045437985);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppleARKitAnchor(Z_Construct_UClass_UAppleARKitAnchor, &UAppleARKitAnchor::StaticClass, TEXT("/Script/AppleARKit"), TEXT("UAppleARKitAnchor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitAnchor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
