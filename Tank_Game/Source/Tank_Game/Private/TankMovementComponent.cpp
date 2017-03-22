// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_Game.h"
#include "TankTracks.h"
#include "TankMovementComponent.h"


void UTankMovementComponent::Initialise(UTankTracks* LeftTrackToSet, UTankTracks* RightTrackToSet)
{
	
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;
}

void UTankMovementComponent::IntendMoveForward(float Throw)
{	
	if (!LeftTrack || !RightTrack) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
	//TODO prevent doubling of speed
}

void UTankMovementComponent::IntendTurnRight(float Throw)
{
	if (!LeftTrack || !RightTrack) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(-Throw);
	//TODO prevent doubling of speed
}

void UTankMovementComponent::RequestDirectMove(const FVector & MoveVelocity, bool bForceMaxSpeed)
{
	//No need to call Super, we are replacing the functionality
	auto TankName = GetOwner()->GetName();
	auto MoveVelocityString = MoveVelocity.ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s Vectoring to: %s"), *TankName, *MoveVelocityString)
}

