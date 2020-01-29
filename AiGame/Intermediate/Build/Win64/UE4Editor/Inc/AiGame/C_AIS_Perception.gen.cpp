// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiGame/C_AIS_Perception.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_AIS_Perception() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_UC_AIS_Perception_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_UC_AIS_Perception();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void UC_AIS_Perception::StaticRegisterNativesUC_AIS_Perception()
	{
	}
	UClass* Z_Construct_UClass_UC_AIS_Perception_NoRegister()
	{
		return UC_AIS_Perception::StaticClass();
	}
	struct Z_Construct_UClass_UC_AIS_Perception_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_AIS_Perception_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AIS_Perception_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "C_AIS_Perception.h" },
		{ "ModuleRelativePath", "C_AIS_Perception.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_AIS_Perception_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_AIS_Perception>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_AIS_Perception_Statics::ClassParams = {
		&UC_AIS_Perception::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UC_AIS_Perception_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UC_AIS_Perception_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_AIS_Perception()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_AIS_Perception_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_AIS_Perception, 903539169);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_AIS_Perception(Z_Construct_UClass_UC_AIS_Perception, &UC_AIS_Perception::StaticClass, TEXT("/Script/AiGame"), TEXT("UC_AIS_Perception"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_AIS_Perception);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
