// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ZombiePortero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiePortero() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombiePortero_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombiePortero();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AZombiePortero::StaticRegisterNativesAZombiePortero()
	{
	}
	UClass* Z_Construct_UClass_AZombiePortero_NoRegister()
	{
		return AZombiePortero::StaticClass();
	}
	struct Z_Construct_UClass_AZombiePortero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombiePortero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombiePortero_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombiePortero.h" },
		{ "ModuleRelativePath", "ZombiePortero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombiePortero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombiePortero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombiePortero_Statics::ClassParams = {
		&AZombiePortero::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombiePortero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombiePortero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombiePortero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombiePortero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombiePortero, 3436627487);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AZombiePortero>()
	{
		return AZombiePortero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombiePortero(Z_Construct_UClass_AZombiePortero, &AZombiePortero::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AZombiePortero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombiePortero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
