// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiGame/AIS_CPP_StatItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_CPP_StatItem() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_AAIS_CPP_StatItem_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_AAIS_CPP_StatItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void AAIS_CPP_StatItem::StaticRegisterNativesAAIS_CPP_StatItem()
	{
	}
	UClass* Z_Construct_UClass_AAIS_CPP_StatItem_NoRegister()
	{
		return AAIS_CPP_StatItem::StaticClass();
	}
	struct Z_Construct_UClass_AAIS_CPP_StatItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRestore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatRestore;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRestore_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIS_CPP_StatItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIS_CPP_StatItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIS_CPP_StatItem.h" },
		{ "ModuleRelativePath", "AIS_CPP_StatItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore_MetaData[] = {
		{ "Category", "Stat" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "AIS_CPP_StatItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore = { UE4CodeGen_Private::EPropertyClass::Array, "StatRestore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AAIS_CPP_StatItem, StatRestore), METADATA_PARAMS(Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "StatRestore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIS_CPP_StatItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIS_CPP_StatItem_Statics::NewProp_StatRestore_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIS_CPP_StatItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIS_CPP_StatItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIS_CPP_StatItem_Statics::ClassParams = {
		&AAIS_CPP_StatItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAIS_CPP_StatItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAIS_CPP_StatItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAIS_CPP_StatItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIS_CPP_StatItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIS_CPP_StatItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIS_CPP_StatItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIS_CPP_StatItem, 2220345151);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIS_CPP_StatItem(Z_Construct_UClass_AAIS_CPP_StatItem, &AAIS_CPP_StatItem::StaticClass, TEXT("/Script/AiGame"), TEXT("AAIS_CPP_StatItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIS_CPP_StatItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
