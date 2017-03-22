// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

//Forwad Declarations
class ATank;
/**
 * 
 */
UCLASS()
class TANK_GAME_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//How close AI tanks can get
	float AcceptanceRadius = 5000;
};
