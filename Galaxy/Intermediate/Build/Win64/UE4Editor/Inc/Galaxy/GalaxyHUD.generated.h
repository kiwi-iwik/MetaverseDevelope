// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAXY_GalaxyHUD_generated_h
#error "GalaxyHUD.generated.h already included, missing '#pragma once' in GalaxyHUD.h"
#endif
#define GALAXY_GalaxyHUD_generated_h

#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_SPARSE_DATA
#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_RPC_WRAPPERS
#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaxyHUD(); \
	friend struct Z_Construct_UClass_AGalaxyHUD_Statics; \
public: \
	DECLARE_CLASS(AGalaxyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyHUD)


#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGalaxyHUD(); \
	friend struct Z_Construct_UClass_AGalaxyHUD_Statics; \
public: \
	DECLARE_CLASS(AGalaxyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyHUD)


#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaxyHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaxyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyHUD(AGalaxyHUD&&); \
	NO_API AGalaxyHUD(const AGalaxyHUD&); \
public:


#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyHUD(AGalaxyHUD&&); \
	NO_API AGalaxyHUD(const AGalaxyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaxyHUD)


#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define Galaxy_Source_Galaxy_GalaxyHUD_h_9_PROLOG
#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_RPC_WRAPPERS \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_INCLASS \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaxy_Source_Galaxy_GalaxyHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_INCLASS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAXY_API UClass* StaticClass<class AGalaxyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaxy_Source_Galaxy_GalaxyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
