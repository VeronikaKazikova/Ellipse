// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITask/GASAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAssetManager() {}
// Cross Module References
	AITASK_API UClass* Z_Construct_UClass_UGASAssetManager();
	AITASK_API UClass* Z_Construct_UClass_UGASAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_AITask();
// End Cross Module References
	void UGASAssetManager::StaticRegisterNativesUGASAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAssetManager);
	UClass* Z_Construct_UClass_UGASAssetManager_NoRegister()
	{
		return UGASAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UGASAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_AITask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GASAssetManager.h" },
		{ "ModuleRelativePath", "GASAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAssetManager_Statics::ClassParams = {
		&UGASAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASAssetManager()
	{
		if (!Z_Registration_Info_UClass_UGASAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAssetManager.OuterSingleton, Z_Construct_UClass_UGASAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASAssetManager.OuterSingleton;
	}
	template<> AITASK_API UClass* StaticClass<UGASAssetManager>()
	{
		return UGASAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAssetManager);
	UGASAssetManager::~UGASAssetManager() {}
	struct Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_GASAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_GASAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASAssetManager, UGASAssetManager::StaticClass, TEXT("UGASAssetManager"), &Z_Registration_Info_UClass_UGASAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAssetManager), 3842153371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_GASAssetManager_h_2548340396(TEXT("/Script/AITask"),
		Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_GASAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_GASAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
