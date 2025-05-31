// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPawn.h"
#include "MyTower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AMyTower : public AMyPawn
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void handleDestruction();

private:

	class AMyTank* Tank;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float FireRange = 500.f;

	bool canFire();

	FTimerHandle FireRateTimerHandle;
	float FireRate = 2.f;
	void startFire();
};

