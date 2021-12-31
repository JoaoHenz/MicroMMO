// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicroMMO/MicroMMOPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicroMMOPlayerController() {}
// Cross Module References
	MICROMMO_API UClass* Z_Construct_UClass_AMicroMMOPlayerController_NoRegister();
	MICROMMO_API UClass* Z_Construct_UClass_AMicroMMOPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MicroMMO();
// End Cross Module References
	void AMicroMMOPlayerController::StaticRegisterNativesAMicroMMOPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMicroMMOPlayerController_NoRegister()
	{
		return AMicroMMOPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMicroMMOPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMicroMMOPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MicroMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMicroMMOPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MicroMMOPlayerController.h" },
		{ "ModuleRelativePath", "MicroMMOPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMicroMMOPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMicroMMOPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMicroMMOPlayerController_Statics::ClassParams = {
		&AMicroMMOPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMicroMMOPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMicroMMOPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMicroMMOPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMicroMMOPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMicroMMOPlayerController, 431517204);
	template<> MICROMMO_API UClass* StaticClass<AMicroMMOPlayerController>()
	{
		return AMicroMMOPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMicroMMOPlayerController(Z_Construct_UClass_AMicroMMOPlayerController, &AMicroMMOPlayerController::StaticClass, TEXT("/Script/MicroMMO"), TEXT("AMicroMMOPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMicroMMOPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
