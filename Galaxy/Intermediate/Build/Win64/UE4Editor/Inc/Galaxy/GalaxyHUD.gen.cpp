// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaxy/GalaxyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaxyHUD() {}
// Cross Module References
	GALAXY_API UClass* Z_Construct_UClass_AGalaxyHUD_NoRegister();
	GALAXY_API UClass* Z_Construct_UClass_AGalaxyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Galaxy();
// End Cross Module References
	void AGalaxyHUD::StaticRegisterNativesAGalaxyHUD()
	{
	}
	UClass* Z_Construct_UClass_AGalaxyHUD_NoRegister()
	{
		return AGalaxyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGalaxyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaxyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaxy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaxyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GalaxyHUD.h" },
		{ "ModuleRelativePath", "GalaxyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaxyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaxyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaxyHUD_Statics::ClassParams = {
		&AGalaxyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaxyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaxyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaxyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaxyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaxyHUD, 1288343792);
	template<> GALAXY_API UClass* StaticClass<AGalaxyHUD>()
	{
		return AGalaxyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaxyHUD(Z_Construct_UClass_AGalaxyHUD, &AGalaxyHUD::StaticClass, TEXT("/Script/Galaxy"), TEXT("AGalaxyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaxyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
