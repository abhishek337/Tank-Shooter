// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPawn.h"
#include "MyTank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AMyTank : public AMyPawn
{
	GENERATED_BODY()

public:
	AMyTank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* Camera;

	FVector DeltaLocation = FVector::ZeroVector;
	FRotator DeltaRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float Speed = 350.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float TurnRate = 45.f;

	void Move(float Value);
	void Turn(float Value);
	//void MoveLeftRight(float Value);

	UFUNCTION()
	void HandleTouch(ETouchIndex::Type FingerIndex, FVector Location);

	APlayerController* TankPlayerController;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void handleDestruction();

	APlayerController* GetTankPlayerController() const { return TankPlayerController; }

	bool bisAlive = true;
};
