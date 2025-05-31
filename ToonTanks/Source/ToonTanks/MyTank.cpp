// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTank.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"



AMyTank::AMyTank()
{

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);

}


void AMyTank::BeginPlay()
{
    Super::BeginPlay();

    TankPlayerController = Cast<APlayerController>(GetController());
}

// Called every frame
void AMyTank::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    /*
    if (playercontroller)
    {
        FHitResult HitResult;
        playercontroller->GetHitResultUnderCursor(
            ECollisionChannel::ECC_Visibility,
            false,
            HitResult);

        RotateTurret(HitResult.ImpactPoint);
    }
    */
}

void AMyTank::handleDestruction()
{
    Super::handleDestruction();

    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
    bisAlive = false;
}

void AMyTank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyTank::Move);
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyTank::Turn);
    PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AMyTank::Fire);
    PlayerInputComponent->BindTouch(IE_Pressed, this, &AMyTank::HandleTouch);
}

void AMyTank::Move(float Value)
{
    // X = Value * DeltaTime * Speed
    DeltaLocation.X = Value * Speed * UGameplayStatics::GetWorldDeltaSeconds(this);
    AddActorLocalOffset(DeltaLocation, true);

}

void AMyTank::Turn(float Value)
{
    // Yaw = Value * DeltaTime * TurnRate
    DeltaRotation.Yaw = Value * TurnRate * UGameplayStatics::GetWorldDeltaSeconds(this);
    AddActorLocalRotation(DeltaRotation, true);

}

void AMyTank::HandleTouch(ETouchIndex::Type FingerIndex, FVector Location)
{
    //APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (!TankPlayerController) return;

    float TouchX, TouchY;
    bool bIsPressed;
    TankPlayerController->GetInputTouchState(FingerIndex, TouchX, TouchY, bIsPressed);

    if (bIsPressed)
    {
        FVector2D ScreenLocation(TouchX, TouchY);

        FHitResult HitResult;
        if (TankPlayerController->GetHitResultAtScreenPosition(ScreenLocation, ECC_Visibility, false, HitResult))
        {
            RotateTurret(HitResult.ImpactPoint);

            // Optional debug marker
            //DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.f, 12, FColor::Red, false, 2.f);
        }
    }
}

/* 
* Move at 10 units per second right or left
void AMyTank::MoveLeftRight(float Value)
{
    DeltaLocation.Y = FMath::Clamp(Value, -1.0f, 1.0f) * 10.0f;
}
*/

