// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SpellsAttributeSet.generated.h"


// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
	
/**
 * 
 */
UCLASS()
class AITASK_API USpellsAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USpellsAttributeSet();

	//attributes for Mana and Max Mana

	UPROPERTY(BlueprintReadOnly, Category = "Spells")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(USpellsAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, Category = "Spells")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(USpellsAttributeSet, MaxMana);
	
protected:
	//function in which I clamp values of attributes
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

};
