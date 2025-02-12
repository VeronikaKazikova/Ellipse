// Fill out your copyright notice in the Description page of Project Settings.


#include "AIC_PatrollingEnemy.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

AAIC_PatrollingEnemy::AAIC_PatrollingEnemy()
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));

	//setting team ID for AI differently to the one of player, for them to be enemies
	SetGenericTeamId(FGenericTeamId(5));
}

ETeamAttitude::Type AAIC_PatrollingEnemy::GetTeamAttitudeTowards(const AActor& Other) const
{

	if (const APawn* OtherPawn = Cast<APawn>(&Other)) {

		if (const IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			return Super::GetTeamAttitudeTowards(*OtherPawn->GetController());
		}
	}

	return ETeamAttitude::Neutral;
}