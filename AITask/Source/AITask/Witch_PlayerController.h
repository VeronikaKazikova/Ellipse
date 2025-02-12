// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "Witch_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AITASK_API AWitch_PlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:
	AWitch_PlayerController();

private:

	FGenericTeamId TeamId;

	//getter for team ID
	FGenericTeamId GetGenericTeamId() const;
};
