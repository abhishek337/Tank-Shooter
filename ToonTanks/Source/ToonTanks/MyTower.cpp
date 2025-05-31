// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTower.h"
#include "MyTank.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

void AMyTower::BeginPlay()
{
	Super::BeginPlay();

	Tank = Cast<AMyTank>(UGameplayStatics::GetPlayerPawn(this,0));

	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &AMyTower::startFire, FireRate, true);
}

void AMyTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		if (canFire()) {

			RotateTurret(Tank->GetActorLocation());
		}
}

void AMyTower::handleDestruction()
{
	Super::handleDestruction();

	Destroy();
}

bool AMyTower::canFire()
{
	if (Tank) {

		float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());

		if (Distance <= FireRange) {

			return true;
		}
	}
	return false;
}

void AMyTower::startFire()
{
	if (Tank == nullptr) {
		return;
	}

	if (canFire() && Tank->bisAlive) {
		Fire();
	}
}
