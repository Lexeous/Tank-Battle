// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent)/*, hidecategories = ("Category name") to hide options from designers.*/)
class TANK_GAME_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Rotate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 20;// Default

	//TODO Figure out a way to limit rotation fo some tanks while also allowing full 360 degree movement for others. 

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxRotationDegrees = 360;//Default. Allows full rotation clockwise
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinRotationDegrees = -360;//Default. Allows full rotation counter-clockwise
};