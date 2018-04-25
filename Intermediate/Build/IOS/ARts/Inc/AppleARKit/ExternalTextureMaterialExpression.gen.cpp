// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ExternalTextureMaterialExpression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalTextureMaterialExpression() {}
// Cross Module References
	APPLEARKIT_API UEnum* Z_Construct_UEnum_AppleARKit_EARKitTextureType();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
	APPLEARKIT_API UClass* Z_Construct_UClass_UMaterialExpressionARKitPassthroughCamera_NoRegister();
	APPLEARKIT_API UClass* Z_Construct_UClass_UMaterialExpressionARKitPassthroughCamera();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EARKitTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AppleARKit_EARKitTextureType, Z_Construct_UPackage__Script_AppleARKit(), TEXT("EARKitTextureType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARKitTextureType(EARKitTextureType_StaticEnum, TEXT("/Script/AppleARKit"), TEXT("EARKitTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AppleARKit_EARKitTextureType_CRC() { return 2999356448U; }
	UEnum* Z_Construct_UEnum_AppleARKit_EARKitTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AppleARKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARKitTextureType"), 0, Get_Z_Construct_UEnum_AppleARKit_EARKitTextureType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureY", (int64)TextureY },
				{ "TextureCbCr", (int64)TextureCbCr },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/ExternalTextureMaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AppleARKit,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARKitTextureType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EARKitTextureType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionARKitPassthroughCamera::StaticRegisterNativesUMaterialExpressionARKitPassthroughCamera()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionARKitPassthroughCamera_NoRegister()
	{
		return UMaterialExpressionARKitPassthroughCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionARKitPassthroughCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "ExternalTextureMaterialExpression.h" },
				{ "ModuleRelativePath", "Private/ExternalTextureMaterialExpression.h" },
				{ "ToolTip", "Implements a node sampling from the ARKit Passthrough external textures." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[] = {
				{ "Category", "UMaterialExpressionARKitPassthroughCamera" },
				{ "ModuleRelativePath", "Private/ExternalTextureMaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureType = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionARKitPassthroughCamera, TextureType), Z_Construct_UEnum_AppleARKit_EARKitTextureType, METADATA_PARAMS(NewProp_TextureType_MetaData, ARRAY_COUNT(NewProp_TextureType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
				{ "Category", "UMaterialExpressionARKitPassthroughCamera" },
				{ "ModuleRelativePath", "Private/ExternalTextureMaterialExpression.h" },
				{ "ToolTip", "Only used if Coordinates is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate = { UE4CodeGen_Private::EPropertyClass::UInt32, "ConstCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionARKitPassthroughCamera, ConstCoordinate), METADATA_PARAMS(NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "ModuleRelativePath", "Private/ExternalTextureMaterialExpression.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionARKitPassthroughCamera, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionARKitPassthroughCamera>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionARKitPassthroughCamera::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionARKitPassthroughCamera, 3562362234);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionARKitPassthroughCamera(Z_Construct_UClass_UMaterialExpressionARKitPassthroughCamera, &UMaterialExpressionARKitPassthroughCamera::StaticClass, TEXT("/Script/AppleARKit"), TEXT("UMaterialExpressionARKitPassthroughCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionARKitPassthroughCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
