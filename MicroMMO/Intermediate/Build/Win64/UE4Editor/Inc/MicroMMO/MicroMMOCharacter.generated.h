// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MICROMMO_MicroMMOCharacter_generated_h
#error "MicroMMOCharacter.generated.h already included, missing '#pragma once' in MicroMMOCharacter.h"
#endif
#define MICROMMO_MicroMMOCharacter_generated_h

#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_SPARSE_DATA
#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_RPC_WRAPPERS
#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMicroMMOCharacter(); \
	friend struct Z_Construct_UClass_AMicroMMOCharacter_Statics; \
public: \
	DECLARE_CLASS(AMicroMMOCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MicroMMO"), NO_API) \
	DECLARE_SERIALIZER(AMicroMMOCharacter)


#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMicroMMOCharacter(); \
	friend struct Z_Construct_UClass_AMicroMMOCharacter_Statics; \
public: \
	DECLARE_CLASS(AMicroMMOCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MicroMMO"), NO_API) \
	DECLARE_SERIALIZER(AMicroMMOCharacter)


#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMicroMMOCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMicroMMOCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMicroMMOCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMicroMMOCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMicroMMOCharacter(AMicroMMOCharacter&&); \
	NO_API AMicroMMOCharacter(const AMicroMMOCharacter&); \
public:


#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMicroMMOCharacter(AMicroMMOCharacter&&); \
	NO_API AMicroMMOCharacter(const AMicroMMOCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMicroMMOCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMicroMMOCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMicroMMOCharacter)


#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AMicroMMOCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMicroMMOCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AMicroMMOCharacter, CursorToWorld); }


#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_9_PROLOG
#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_SPARSE_DATA \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_RPC_WRAPPERS \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_INCLASS \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_SPARSE_DATA \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MicroMMO_Source_MicroMMO_MicroMMOCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MICROMMO_API UClass* StaticClass<class AMicroMMOCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MicroMMO_Source_MicroMMO_MicroMMOCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
