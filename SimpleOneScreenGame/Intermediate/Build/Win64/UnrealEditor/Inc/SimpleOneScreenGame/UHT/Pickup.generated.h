// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup.h"

#ifdef SIMPLEONESCREENGAME_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define SIMPLEONESCREENGAME_Pickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class APickup ******************************************************************
#define FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereOverLap);


struct Z_Construct_UClass_APickup_Statics;
SIMPLEONESCREENGAME_API UClass* Z_Construct_UClass_APickup_NoRegister();

#define FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct ::Z_Construct_UClass_APickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLEONESCREENGAME_API UClass* ::Z_Construct_UClass_APickup_NoRegister(); \
public: \
	DECLARE_CLASS2(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleOneScreenGame"), Z_Construct_UClass_APickup_NoRegister) \
	DECLARE_SERIALIZER(APickup)


#define FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APickup(APickup&&) = delete; \
	APickup(const APickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_10_PROLOG
#define FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APickup;

// ********** End Class APickup ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
