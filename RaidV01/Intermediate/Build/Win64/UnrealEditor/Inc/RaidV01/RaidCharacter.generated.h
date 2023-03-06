// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef RAIDV01_RaidCharacter_generated_h
#error "RaidCharacter.generated.h already included, missing '#pragma once' in RaidCharacter.h"
#endif
#define RAIDV01_RaidCharacter_generated_h

#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_SPARSE_DATA
#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon);


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon);


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaidCharacter(); \
	friend struct Z_Construct_UClass_ARaidCharacter_Statics; \
public: \
	DECLARE_CLASS(ARaidCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaidV01"), NO_API) \
	DECLARE_SERIALIZER(ARaidCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARaidCharacter(); \
	friend struct Z_Construct_UClass_ARaidCharacter_Statics; \
public: \
	DECLARE_CLASS(ARaidCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaidV01"), NO_API) \
	DECLARE_SERIALIZER(ARaidCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARaidCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARaidCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaidCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaidCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaidCharacter(ARaidCharacter&&); \
	NO_API ARaidCharacter(const ARaidCharacter&); \
public:


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaidCharacter(ARaidCharacter&&); \
	NO_API ARaidCharacter(const ARaidCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaidCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaidCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARaidCharacter)


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_9_PROLOG
#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_SPARSE_DATA \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_RPC_WRAPPERS \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_INCLASS \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_SPARSE_DATA \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDV01_API UClass* StaticClass<class ARaidCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
