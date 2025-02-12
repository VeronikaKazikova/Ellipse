// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AITask/SpellsAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellsAttributeSet() {}
// Cross Module References
	AITASK_API UClass* Z_Construct_UClass_USpellsAttributeSet();
	AITASK_API UClass* Z_Construct_UClass_USpellsAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_AITask();
// End Cross Module References
	void USpellsAttributeSet::StaticRegisterNativesUSpellsAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpellsAttributeSet);
	UClass* Z_Construct_UClass_USpellsAttributeSet_NoRegister()
	{
		return USpellsAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USpellsAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellsAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_AITask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellsAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpellsAttributeSet.h" },
		{ "ModuleRelativePath", "SpellsAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Spells" },
		{ "Comment", "//attributes for Mana and Max Mana\n" },
		{ "ModuleRelativePath", "SpellsAttributeSet.h" },
		{ "ToolTip", "attributes for Mana and Max Mana" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpellsAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_Mana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Spells" },
		{ "ModuleRelativePath", "SpellsAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpellsAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_MaxMana_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpellsAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellsAttributeSet_Statics::NewProp_MaxMana,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellsAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellsAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpellsAttributeSet_Statics::ClassParams = {
		&USpellsAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpellsAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpellsAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpellsAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpellsAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpellsAttributeSet()
	{
		if (!Z_Registration_Info_UClass_USpellsAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpellsAttributeSet.OuterSingleton, Z_Construct_UClass_USpellsAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpellsAttributeSet.OuterSingleton;
	}
	template<> AITASK_API UClass* StaticClass<USpellsAttributeSet>()
	{
		return USpellsAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellsAttributeSet);
	USpellsAttributeSet::~USpellsAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_SpellsAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_SpellsAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpellsAttributeSet, USpellsAttributeSet::StaticClass, TEXT("USpellsAttributeSet"), &Z_Registration_Info_UClass_USpellsAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpellsAttributeSet), 985759627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_SpellsAttributeSet_h_2921599041(TEXT("/Script/AITask"),
		Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_SpellsAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repo_veronika_kazikova_AI_AITask_Source_AITask_SpellsAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
