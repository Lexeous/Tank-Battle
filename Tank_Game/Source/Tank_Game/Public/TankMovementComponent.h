// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTracks;

/**
 * Responsible for driving the tank tracks
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANK_GAME_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialise(UTankTracks* LeftTrackToSet, UTankTracks* RightTrackToSet);

	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float Throw);

	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendTurnRight(float Throw);

	//TODO check best protection
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;

private:

	UTankTracks* LeftTrack = nullptr;
	UTankTracks* RightTrack = nullptr;

};
