// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiGame/AIS_DataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_DataProvider() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_UAIS_DataProvider_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_UAIS_DataProvider();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void UAIS_DataProvider::StaticRegisterNativesUAIS_DataProvider()
	{
	}
	UClass* Z_Construct_UClass_UAIS_DataProvider_NoRegister()
	{
		return UAIS_DataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAIS_DataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIS_DataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider_QueryParams,
		(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIS_DataProvider_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "DisplayName", "Owner's Properties" },
		{ "IncludePath", "AIS_DataProvider.h" },
		{ "ModuleRelativePath", "AIS_DataProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIS_DataProvider_Statics::NewProp_RequiredIndex_MetaData[] = {
		{ "ModuleRelativePath", "AIS_DataProvider.h" },
		{ "ToolTip", "UPROPERTY empty because the data provider class already exposes their functions" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIS_DataProvider_Statics::NewProp_RequiredIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RequiredIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAIS_DataProvider, RequiredIndex), METADATA_PARAMS(Z_Construct_UClass_UAIS_DataProvider_Statics::NewProp_RequiredIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIS_DataProvider_Statics::NewProp_RequiredIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIS_DataProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIS_DataProvider_Statics::NewProp_RequiredIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIS_DataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIS_DataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIS_DataProvider_Statics::ClassParams = {
		&UAIS_DataProvider::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000030A0u,
		nullptr, 0,
		Z_Construct_UClass_UAIS_DataProvider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAIS_DataProvider_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAIS_DataProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIS_DataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIS_DataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIS_DataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIS_DataProvider, 1327167059);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIS_DataProvider(Z_Construct_UClass_UAIS_DataProvider, &UAIS_DataProvider::StaticClass, TEXT("/Script/AiGame"), TEXT("UAIS_DataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIS_DataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
