// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TanksGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATanksGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	void ActorDied(AActor* DeadActor);

protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent)
	void EndGame(bool bEndGame);

	UFUNCTION(BlueprintImplementableEvent)
	void WonGame(bool bWonGame);

private:

	class AMyTank* Tank;
	class ATankPlayerController* TankPlayerController;
	int	targetTowers = 0;
	int getTowerCount();
};
