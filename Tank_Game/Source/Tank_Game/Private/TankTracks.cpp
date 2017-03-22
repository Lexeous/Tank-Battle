// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_Game.h"
#include "TankTracks.h"


void UTankTracks::SetThrottle(float Throttle)
{
	
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);

}

