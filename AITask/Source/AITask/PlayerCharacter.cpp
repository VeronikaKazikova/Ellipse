// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "HealthAttributeSet.h"
#include "SpellsAttributeSet.h"

APlayerCharacter::APlayerCharacter()
{
	//creating ability system component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
}

UAbilitySystemComponent* APlayerCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void APlayerCharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	//add attribude sets for health and mana to player's ability system component
	AbilitySystemComponent->AddSet<UHealthAttributeSet>();
	AbilitySystemComponent->AddSet<USpellsAttributeSet>();
}