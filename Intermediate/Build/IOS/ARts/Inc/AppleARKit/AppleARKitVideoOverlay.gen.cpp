// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AppleARKitVideoOverlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitVideoOverlay() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_NoRegister();
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UARKitCameraOverlayMaterialLoader::StaticRegisterNativesUARKitCameraOverlayMaterialLoader()
	{
	}
	UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_NoRegister()
	{
		return UARKitCameraOverlayMaterialLoader::StaticClass();
	}
	UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AppleARKitVideoOverlay.h" },
				{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
				{ "ToolTip", "Helper class to ensure the ARKit camera material is cooked." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraOverlayMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultCameraOverlayMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultCameraOverlayMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UARKitCameraOverlayMaterialLoader, DefaultCameraOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_DefaultCameraOverlayMaterial_MetaData, ARRAY_COUNT(NewProp_DefaultCameraOverlayMaterial_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultCameraOverlayMaterial,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARKitCameraOverlayMaterialLoader>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARKitCameraOverlayMaterialLoader::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UARKitCameraOverlayMaterialLoader, 569941086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARKitCameraOverlayMaterialLoader(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader, &UARKitCameraOverlayMaterialLoader::StaticClass, TEXT("/Script/AppleARKit"), TEXT("UARKitCameraOverlayMaterialLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARKitCameraOverlayMaterialLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
