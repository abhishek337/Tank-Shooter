// Fill out your copyright notice in the Description page of Project Settings.


#include "TanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "MyTank.h"
#include "MyTower.h"
#include "TankPlayerController.h"


void ATanksGameMode::ActorDied(AActor* DeadActor)
{
	if (DeadActor == Tank) {

		Tank->handleDestruction();
		if (TankPlayerController)
		{
			TankPlayerController->setPlayerEnabledState(false);
		}
		EndGame(true);
	}
	else if (AMyTower* DestroyedTower = Cast<AMyTower>(DeadActor))
	{
		DestroyedTower->handleDestruction();
		--targetTowers;
		if (targetTowers == 0) {
			WonGame(true);
		}
	}
}

void ATanksGameMode::BeginPlay()
{
	Tank = Cast<AMyTank>(UGameplayStatics::GetPlayerPawn(this, 0));
	TankPlayerController = Cast<ATankPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	targetTowers = getTowerCount();
}

int ATanksGameMode::getTowerCount()
{
	TArray<AActor*> Towers;
	UGameplayStatics::GetAllActorsOfClass(this, AMyTower::StaticClass(), Towers);
	return Towers.Num();
}
