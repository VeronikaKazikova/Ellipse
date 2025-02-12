// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITask/Witch_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitch_PlayerController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	AITASK_API UClass* Z_Construct_UClass_AWitch_PlayerController();
	AITASK_API UClass* Z_Construct_UClass_AWitch_PlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AITask();
// End Cross Module References
	void AWitch_PlayerController::StaticRegisterNativesAWitch_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitch_PlayerController);
	UClass* Z_Construct_UClass_AWitch_PlayerController_NoRegister()
	{
		return AWitch_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AWitch_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitch_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AITask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Witch_PlayerController.h" },
		{ "ModuleRelativePath", "Witch_PlayerController.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWitch_PlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AWitch_PlayerController, IGenericTeamAgentInterface), false },  // 3302830175
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitch_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitch_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitch_PlayerController_Statics::ClassParams = {
		&AWitch_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitch_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitch_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitch_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AWitch_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitch_PlayerController.OuterSingleton, Z_Construct_UClass_AWitch_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitch_PlayerController.OuterSingleton;
	}
	template<> AITASK_API UClass* StaticClass<AWitch_PlayerController>()
	{
		return AWitch_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitch_PlayerController);
	AWitch_PlayerController::~AWitch_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_Witch_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_Witch_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitch_PlayerController, AWitch_PlayerController::StaticClass, TEXT("AWitch_PlayerController"), &Z_Registration_Info_UClass_AWitch_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitch_PlayerController), 4135917850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_Witch_PlayerController_h_719312144(TEXT("/Script/AITask"),
		Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_Witch_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_Witch_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
