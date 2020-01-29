// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiGame/AIS_Character_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_Character_CPP() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_AAIS_Character_CPP_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_AAIS_Character_CPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void AAIS_Character_CPP::StaticRegisterNativesAAIS_Character_CPP()
	{
	}
	UClass* Z_Construct_UClass_AAIS_Character_CPP_NoRegister()
	{
		return AAIS_Character_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AAIS_Character_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatDesirability_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatDesirability;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatDesirability_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIS_Character_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIS_Character_CPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIS_Character_CPP.h" },
		{ "ModuleRelativePath", "AIS_Character_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "AIS_Character_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability = { UE4CodeGen_Private::EPropertyClass::Array, "StatDesirability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAIS_Character_CPP, StatDesirability), METADATA_PARAMS(Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "StatDesirability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIS_Character_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIS_Character_CPP_Statics::NewProp_StatDesirability_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIS_Character_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIS_Character_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIS_Character_CPP_Statics::ClassParams = {
		&AAIS_Character_CPP::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAIS_Character_CPP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAIS_Character_CPP_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAIS_Character_CPP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIS_Character_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIS_Character_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIS_Character_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIS_Character_CPP, 246773054);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIS_Character_CPP(Z_Construct_UClass_AAIS_Character_CPP, &AAIS_Character_CPP::StaticClass, TEXT("/Script/AiGame"), TEXT("AAIS_Character_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIS_Character_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
