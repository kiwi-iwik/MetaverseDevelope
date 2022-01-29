// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAXY_GalaxyCharacter_generated_h
#error "GalaxyCharacter.generated.h already included, missing '#pragma once' in GalaxyCharacter.h"
#endif
#define GALAXY_GalaxyCharacter_generated_h

#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_SPARSE_DATA
#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_RPC_WRAPPERS
#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaxyCharacter(); \
	friend struct Z_Construct_UClass_AGalaxyCharacter_Statics; \
public: \
	DECLARE_CLASS(AGalaxyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyCharacter)


#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAGalaxyCharacter(); \
	friend struct Z_Construct_UClass_AGalaxyCharacter_Statics; \
public: \
	DECLARE_CLASS(AGalaxyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyCharacter)


#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaxyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaxyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyCharacter(AGalaxyCharacter&&); \
	NO_API AGalaxyCharacter(const AGalaxyCharacter&); \
public:


#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyCharacter(AGalaxyCharacter&&); \
	NO_API AGalaxyCharacter(const AGalaxyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaxyCharacter)


#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGalaxyCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGalaxyCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGalaxyCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGalaxyCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGalaxyCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGalaxyCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGalaxyCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGalaxyCharacter, L_MotionController); }


#define Galaxy_Source_Galaxy_GalaxyCharacter_h_17_PROLOG
#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_RPC_WRAPPERS \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_INCLASS \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaxy_Source_Galaxy_GalaxyCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAXY_API UClass* StaticClass<class AGalaxyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaxy_Source_Galaxy_GalaxyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
