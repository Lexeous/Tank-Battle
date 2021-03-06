// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent)/*, hidecategories = ("Category name") to hide options from designers.*/)
class TANK_GAME_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	//-1 is max downward movement, and +1 is max upward movement
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 20;// Default
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDegrees = 30;//Default
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDegrees = 0;//Default
};
