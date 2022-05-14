// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial/TutorialGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialGameModeBase() {}
// Cross Module References
	TUTORIAL_API UClass* Z_Construct_UClass_ATutorialGameModeBase_NoRegister();
	TUTORIAL_API UClass* Z_Construct_UClass_ATutorialGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tutorial();
// End Cross Module References
	void ATutorialGameModeBase::StaticRegisterNativesATutorialGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorialGameModeBase);
	UClass* Z_Construct_UClass_ATutorialGameModeBase_NoRegister()
	{
		return ATutorialGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TutorialGameModeBase.h" },
		{ "ModuleRelativePath", "TutorialGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorialGameModeBase_Statics::ClassParams = {
		&ATutorialGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATutorialGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorialGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATutorialGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorialGameModeBase.OuterSingleton, Z_Construct_UClass_ATutorialGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATutorialGameModeBase.OuterSingleton;
	}
	template<> TUTORIAL_API UClass* StaticClass<ATutorialGameModeBase>()
	{
		return ATutorialGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialGameModeBase);
	struct Z_CompiledInDeferFile_FID_Tutorial_Source_Tutorial_TutorialGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tutorial_Source_Tutorial_TutorialGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATutorialGameModeBase, ATutorialGameModeBase::StaticClass, TEXT("ATutorialGameModeBase"), &Z_Registration_Info_UClass_ATutorialGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorialGameModeBase), 1395303074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tutorial_Source_Tutorial_TutorialGameModeBase_h_3780864808(TEXT("/Script/Tutorial"),
		Z_CompiledInDeferFile_FID_Tutorial_Source_Tutorial_TutorialGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tutorial_Source_Tutorial_TutorialGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
