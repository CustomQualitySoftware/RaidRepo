// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidV01/Character/RaidCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidCharacter() {}
// Cross Module References
	RAIDV01_API UClass* Z_Construct_UClass_ARaidCharacter_NoRegister();
	RAIDV01_API UClass* Z_Construct_UClass_ARaidCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RaidV01();
	RAIDV01_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARaidCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	void ARaidCharacter::StaticRegisterNativesARaidCharacter()
	{
		UClass* Class = ARaidCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_OverlappingWeapon", &ARaidCharacter::execOnRep_OverlappingWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct RaidCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeapon* LastWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaidCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::RaidCharacter_eventOnRep_OverlappingWeapon_Parms), Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaidCharacter);
	UClass* Z_Construct_UClass_ARaidCharacter_NoRegister()
	{
		return ARaidCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARaidCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaidCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidV01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARaidCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaidCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 2337447713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/RaidCharacter.h" },
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaidCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaidCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaidCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaidCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere)\n//class UCombatComponent* Combat;\n" },
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere)\nclass UCombatComponent* Combat;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARaidCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaidCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARaidCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaidCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/RaidCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaidCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaidCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaidCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidCharacter_Statics::NewProp_OverlappingWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaidCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaidCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaidCharacter_Statics::ClassParams = {
		&ARaidCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARaidCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaidCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaidCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaidCharacter()
	{
		if (!Z_Registration_Info_UClass_ARaidCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaidCharacter.OuterSingleton, Z_Construct_UClass_ARaidCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaidCharacter.OuterSingleton;
	}
	template<> RAIDV01_API UClass* StaticClass<ARaidCharacter>()
	{
		return ARaidCharacter::StaticClass();
	}

	void ARaidCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));

		const bool bIsValid = true
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARaidCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaidCharacter);
	struct Z_CompiledInDeferFile_FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaidCharacter, ARaidCharacter::StaticClass, TEXT("ARaidCharacter"), &Z_Registration_Info_UClass_ARaidCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaidCharacter), 511918446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_599915198(TEXT("/Script/RaidV01"),
		Z_CompiledInDeferFile_FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaidV01_Source_RaidV01_Character_RaidCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
