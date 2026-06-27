// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pickup.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePickup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
SIMPLEONESCREENGAME_API UClass* Z_Construct_UClass_APickup();
SIMPLEONESCREENGAME_API UClass* Z_Construct_UClass_APickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleOneScreenGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APickup Function OnSphereOverLap *****************************************
struct Z_Construct_UFunction_APickup_OnSphereOverLap_Statics
{
	struct Pickup_eventOnSphereOverLap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Overlap\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSphereOverLap constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSphereOverLap constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSphereOverLap Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnSphereOverLap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnSphereOverLap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnSphereOverLap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnSphereOverLap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Pickup_eventOnSphereOverLap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pickup_eventOnSphereOverLap_Parms), &Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnSphereOverLap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::PropPointers) < 2048);
// ********** End Function OnSphereOverLap Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnSphereOverLap", 	Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::Pickup_eventOnSphereOverLap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::Pickup_eventOnSphereOverLap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickup_OnSphereOverLap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_OnSphereOverLap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickup::execOnSphereOverLap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverLap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APickup Function OnSphereOverLap *******************************************

// ********** Begin Class APickup ******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APickup;
UClass* APickup::GetPrivateStaticClass()
{
	using TClass = APickup;
	if (!Z_Registration_Info_UClass_APickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Pickup"),
			Z_Registration_Info_UClass_APickup.InnerSingleton,
			StaticRegisterNativesAPickup,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APickup.InnerSingleton;
}
UClass* Z_Construct_UClass_APickup_NoRegister()
{
	return APickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSphere_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSprite_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pickupMessage_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Debug Messages\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotate_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Rotation\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Rotation speed\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sound\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class APickup constinit property declarations **********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSprite;
	static const UECodeGen_Private::FTextPropertyParams NewProp_pickupMessage;
	static void NewProp_bRotate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APickup constinit property declarations ************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnSphereOverLap"), .Pointer = &APickup::execOnSphereOverLap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_OnSphereOverLap, "OnSphereOverLap" }, // 687646959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APickup_Statics

// ********** Begin Class APickup Property Definitions *********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_PickupSphere = { "PickupSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, PickupSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSphere_MetaData), NewProp_PickupSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_PickupSprite = { "PickupSprite", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, PickupSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSprite_MetaData), NewProp_PickupSprite_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_pickupMessage = { "pickupMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, pickupMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pickupMessage_MetaData), NewProp_pickupMessage_MetaData) };
void Z_Construct_UClass_APickup_Statics::NewProp_bRotate_SetBit(void* Obj)
{
	((APickup*)Obj)->bRotate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bRotate = { "bRotate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotate_MetaData), NewProp_bRotate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_PickupSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_PickupSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_pickupMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_PickupSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers) < 2048);
// ********** End Class APickup Property Definitions ***********************************************
UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOneScreenGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
	&APickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams), Z_Construct_UClass_APickup_Statics::Class_MetaDataParams)
};
void APickup::StaticRegisterNativesAPickup()
{
	UClass* Class = APickup::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APickup_Statics::Funcs));
}
UClass* Z_Construct_UClass_APickup()
{
	if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APickup);
APickup::~APickup() {}
// ********** End Class APickup ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h__Script_SimpleOneScreenGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 4207845535U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h__Script_SimpleOneScreenGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h__Script_SimpleOneScreenGame_2841485040{
	TEXT("/Script/SimpleOneScreenGame"),
	Z_CompiledInDeferFile_FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h__Script_SimpleOneScreenGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pitif_Documents_SimpleOneScreenGame_Source_SimpleOneScreenGame_Public_Pickup_h__Script_SimpleOneScreenGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
