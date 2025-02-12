// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthAttributeSet.h"

//set default values in constructor
UHealthAttributeSet::UHealthAttributeSet(): Health(400), MaxHealth(400)
{

}

void UHealthAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	//clamp health values
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealth());
	}
}