// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiGame/AIS_StatTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_StatTest() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_UAIS_StatTest_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_UAIS_StatTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AiGame();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
// End Cross Module References
	void UAIS_StatTest::StaticRegisterNativesUAIS_StatTest()
	{
	}
	UClass* Z_Construct_UClass_UAIS_StatTest_NoRegister()
	{
		return UAIS_StatTest::StaticClass();
	}
	struct Z_Construct_UClass_UAIS_StatTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededStatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeededStatIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIS_StatTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIS_StatTest_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Amount of Needed Stat" },
		{ "IncludePath", "AIS_StatTest.h" },
		{ "ModuleRelativePath", "AIS_StatTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIS_StatTest_Statics::NewProp_NeededStatIndex_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "AIS_StatTest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIS_StatTest_Statics::NewProp_NeededStatIndex = { UE4CodeGen_Private::EPropertyClass::Struct, "NeededStatIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UAIS_StatTest, NeededStatIndex), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UAIS_StatTest_Statics::NewProp_NeededStatIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIS_StatTest_Statics::NewProp_NeededStatIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIS_StatTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIS_StatTest_Statics::NewProp_NeededStatIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIS_StatTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIS_StatTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIS_StatTest_Statics::ClassParams = {
		&UAIS_StatTest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAIS_StatTest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAIS_StatTest_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAIS_StatTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIS_StatTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIS_StatTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIS_StatTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIS_StatTest, 1983566767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIS_StatTest(Z_Construct_UClass_UAIS_StatTest, &UAIS_StatTest::StaticClass, TEXT("/Script/AiGame"), TEXT("UAIS_StatTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIS_StatTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
