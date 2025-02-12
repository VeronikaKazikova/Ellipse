// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITask/AITaskGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITaskGameMode() {}
// Cross Module References
	AITASK_API UClass* Z_Construct_UClass_AAITaskGameMode();
	AITASK_API UClass* Z_Construct_UClass_AAITaskGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AITask();
// End Cross Module References
	void AAITaskGameMode::StaticRegisterNativesAAITaskGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAITaskGameMode);
	UClass* Z_Construct_UClass_AAITaskGameMode_NoRegister()
	{
		return AAITaskGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAITaskGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITaskGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AITask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITaskGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AITaskGameMode.h" },
		{ "ModuleRelativePath", "AITaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITaskGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITaskGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAITaskGameMode_Statics::ClassParams = {
		&AAITaskGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAITaskGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAITaskGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAITaskGameMode()
	{
		if (!Z_Registration_Info_UClass_AAITaskGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAITaskGameMode.OuterSingleton, Z_Construct_UClass_AAITaskGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAITaskGameMode.OuterSingleton;
	}
	template<> AITASK_API UClass* StaticClass<AAITaskGameMode>()
	{
		return AAITaskGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITaskGameMode);
	AAITaskGameMode::~AAITaskGameMode() {}
	struct Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AITaskGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AITaskGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAITaskGameMode, AAITaskGameMode::StaticClass, TEXT("AAITaskGameMode"), &Z_Registration_Info_UClass_AAITaskGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAITaskGameMode), 3726909221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AITaskGameMode_h_2620598623(TEXT("/Script/AITask"),
		Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AITaskGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AITaskGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
