// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/HordaMediaFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordaMediaFactory() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHordaMediaFactory_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHordaMediaFactory();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHordaFactory();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AHordaMediaFactory::StaticRegisterNativesAHordaMediaFactory()
	{
	}
	UClass* Z_Construct_UClass_AHordaMediaFactory_NoRegister()
	{
		return AHordaMediaFactory::StaticClass();
	}
	struct Z_Construct_UClass_AHordaMediaFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordaMediaFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHordaFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordaMediaFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HordaMediaFactory.h" },
		{ "ModuleRelativePath", "HordaMediaFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordaMediaFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordaMediaFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHordaMediaFactory_Statics::ClassParams = {
		&AHordaMediaFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHordaMediaFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHordaMediaFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHordaMediaFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHordaMediaFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHordaMediaFactory, 1993010308);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AHordaMediaFactory>()
	{
		return AHordaMediaFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHordaMediaFactory(Z_Construct_UClass_AHordaMediaFactory, &AHordaMediaFactory::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AHordaMediaFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordaMediaFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
