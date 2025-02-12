// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AITaskCharacter.h"
#include "AbilitySystemInterface.h"
#include "GenericTeamAgentInterface.h"
#include "AbilitySystemComponent.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AITASK_API APlayerCharacter : public AAITaskCharacter, public IGenericTeamAgentInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	//getter for ability system component
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	virtual void PreInitializeComponents() override;
};
