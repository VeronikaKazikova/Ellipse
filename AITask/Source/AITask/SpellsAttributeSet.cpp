// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellsAttributeSet.h"

//set default values in constructor
USpellsAttributeSet::USpellsAttributeSet(): Mana(100), MaxMana(100)
{

}

void USpellsAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	//clamp mana values
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxMana());
	}
}
