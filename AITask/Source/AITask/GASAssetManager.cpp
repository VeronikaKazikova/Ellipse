// Fill out your copyright notice in the Description page of Project Settings.


#include "GASAssetManager.h"
#include "AbilitySystemGlobals.h"

void UGASAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	//init gas globals
	UAbilitySystemGlobals::Get().InitGlobalData();
}

