// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITask/AIC_PatrollingEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIC_PatrollingEnemy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AITASK_API UClass* Z_Construct_UClass_AAIC_PatrollingEnemy();
	AITASK_API UClass* Z_Construct_UClass_AAIC_PatrollingEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITask();
// End Cross Module References
	void AAIC_PatrollingEnemy::StaticRegisterNativesAAIC_PatrollingEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIC_PatrollingEnemy);
	UClass* Z_Construct_UClass_AAIC_PatrollingEnemy_NoRegister()
	{
		return AAIC_PatrollingEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAIC_PatrollingEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AITask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIC_PatrollingEnemy.h" },
		{ "ModuleRelativePath", "AIC_PatrollingEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "AIC_PatrollingEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIC_PatrollingEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIC_PatrollingEnemy, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::NewProp_AIPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::NewProp_AIPerceptionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::NewProp_AIPerceptionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_PatrollingEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::ClassParams = {
		&AAIC_PatrollingEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIC_PatrollingEnemy()
	{
		if (!Z_Registration_Info_UClass_AAIC_PatrollingEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_PatrollingEnemy.OuterSingleton, Z_Construct_UClass_AAIC_PatrollingEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIC_PatrollingEnemy.OuterSingleton;
	}
	template<> AITASK_API UClass* StaticClass<AAIC_PatrollingEnemy>()
	{
		return AAIC_PatrollingEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_PatrollingEnemy);
	AAIC_PatrollingEnemy::~AAIC_PatrollingEnemy() {}
	struct Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AIC_PatrollingEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AIC_PatrollingEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_PatrollingEnemy, AAIC_PatrollingEnemy::StaticClass, TEXT("AAIC_PatrollingEnemy"), &Z_Registration_Info_UClass_AAIC_PatrollingEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_PatrollingEnemy), 3789880141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AIC_PatrollingEnemy_h_4166535701(TEXT("/Script/AITask"),
		Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AIC_PatrollingEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_AIC_PatrollingEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
