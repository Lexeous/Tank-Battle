// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_Game.h"
#include "Tank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}



void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto ControlledTank = Cast<ATank>(GetPawn());
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	
	if (!ensure(PlayerTank)) { return; } //Protects pointer
	
	if (PlayerTank)
	{

		MoveToActor(PlayerTank, AcceptanceRadius); //TODO check if radius is in cm

		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		ControlledTank->Fire(); 
	}
}
