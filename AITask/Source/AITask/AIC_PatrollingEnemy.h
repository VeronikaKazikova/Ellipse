// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "GenericTeamAgentInterface.h"
#include "AIC_PatrollingEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AITASK_API AAIC_PatrollingEnemy : public AAIController
{
	GENERATED_BODY()

public:
	AAIC_PatrollingEnemy();
	
	//function for deciding which attitude should AI have towards perceived pawn
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

protected:
	FGenericTeamId TeamId;
	
	UPROPERTY(VisibleAnywhere)
	UAIPerceptionComponent* AIPerceptionComponent;
};
