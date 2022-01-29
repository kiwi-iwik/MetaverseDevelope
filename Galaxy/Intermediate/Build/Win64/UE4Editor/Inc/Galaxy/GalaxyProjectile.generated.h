// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAXY_GalaxyProjectile_generated_h
#error "GalaxyProjectile.generated.h already included, missing '#pragma once' in GalaxyProjectile.h"
#endif
#define GALAXY_GalaxyProjectile_generated_h

#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_SPARSE_DATA
#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaxyProjectile(); \
	friend struct Z_Construct_UClass_AGalaxyProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaxyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalaxyProjectile(); \
	friend struct Z_Construct_UClass_AGalaxyProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaxyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaxy"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaxyProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaxyProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyProjectile(AGalaxyProjectile&&); \
	NO_API AGalaxyProjectile(const AGalaxyProjectile&); \
public:


#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyProjectile(AGalaxyProjectile&&); \
	NO_API AGalaxyProjectile(const AGalaxyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaxyProjectile)


#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGalaxyProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalaxyProjectile, ProjectileMovement); }


#define Galaxy_Source_Galaxy_GalaxyProjectile_h_12_PROLOG
#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_RPC_WRAPPERS \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_INCLASS \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaxy_Source_Galaxy_GalaxyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_SPARSE_DATA \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Galaxy_Source_Galaxy_GalaxyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAXY_API UClass* StaticClass<class AGalaxyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaxy_Source_Galaxy_GalaxyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
