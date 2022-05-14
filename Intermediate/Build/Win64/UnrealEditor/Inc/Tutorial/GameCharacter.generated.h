// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIAL_GameCharacter_generated_h
#error "GameCharacter.generated.h already included, missing '#pragma once' in GameCharacter.h"
#endif
#define TUTORIAL_GameCharacter_generated_h

#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_SPARSE_DATA
#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_RPC_WRAPPERS
#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tutorial"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tutorial"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public:


#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCharacter)


#define FID_Tutorial_Source_Tutorial_GameCharacter_h_12_PROLOG
#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_SPARSE_DATA \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_RPC_WRAPPERS \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_INCLASS \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tutorial_Source_Tutorial_GameCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_SPARSE_DATA \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Tutorial_Source_Tutorial_GameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIAL_API UClass* StaticClass<class AGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tutorial_Source_Tutorial_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
