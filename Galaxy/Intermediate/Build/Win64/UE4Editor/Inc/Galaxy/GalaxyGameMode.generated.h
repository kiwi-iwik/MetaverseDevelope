// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAXY_GalaxyGameMode_generated_h
#error "GalaxyGameMode.generated.h already included, missing '#pragma once' in GalaxyGameMode.h"
#endif
#define GALAXY_GalaxyGameMode_generated_h

#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_SPARSE_DATA
#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_RPC_WRAPPERS
#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaxyGameMode(); \
	friend struct Z_Construct_UClass_AGalaxyGameMode_Statics; \
public: \
	DECLARE_CLASS(AGalaxyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), GALAXY_API) \
	DECLARE_SERIALIZER(AGalaxyGameMode)


#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGalaxyGameMode(); \
	friend struct Z_Construct_UClass_AGalaxyGameMode_Statics; \
public: \
	DECLARE_CLASS(AGalaxyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), GALAXY_API) \
	DECLARE_SERIALIZER(AGalaxyGameMode)


#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAXY_API AGalaxyGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaxyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAXY_API, AGalaxyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAXY_API AGalaxyGameMode(AGalaxyGameMode&&); \
	GALAXY_API AGalaxyGameMode(const AGalaxyGameMode&); \
public:


#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAXY_API AGalaxyGameMode(AGalaxyGameMode&&); \
	GALAXY_API AGalaxyGameMode(const AGalaxyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAXY_API, AGalaxyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaxyGameMode)


#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Galaxy_Source_Galaxy_GalaxyGameMode_h_9_PROLOG
#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_RPC_WRAPPERS \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_INCLASS \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaxy_Source_Galaxy_GalaxyGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAXY_API UClass* StaticClass<class AGalaxyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaxy_Source_Galaxy_GalaxyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
