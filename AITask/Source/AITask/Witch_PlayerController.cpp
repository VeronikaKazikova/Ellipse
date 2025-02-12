// Fill out your copyright notice in the Description page of Project Settings.


#include "Witch_PlayerController.h"

AWitch_PlayerController::AWitch_PlayerController()
{
	//setting team ID for playerr controller differently to the one of AI fot them to be enemies
	TeamId = FGenericTeamId(10);
}

FGenericTeamId AWitch_PlayerController::GetGenericTeamId() const
{
	return TeamId;
}