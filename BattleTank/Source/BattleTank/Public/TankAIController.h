// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000.0f;

private:
	virtual void Tick(float DeltaSeconds) override;
	
	virtual void SetPawn(APawn* InPawn) override;

	UFUNCTION()
	void WhenTankDied();

	FTankDeath OnTankDeath;
};
