// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANK_GAME_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
	
	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);

	//TODO add set turrest refernce

	void AimAt(FVector HitLocation, float LaunchSpeed);
protected:
	

private:
	UStaticMeshComponent* Barrel = nullptr;
	
	void MoveBarrelTowards(FVector AimDirection);
};