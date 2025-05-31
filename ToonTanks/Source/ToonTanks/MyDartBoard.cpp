// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDartBoard.h"
#include "Components/BoxComponent.h"

// Sets default values
AMyDartBoard::AMyDartBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	RootComponent = BoxComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(BoxComp);
}

// Called when the game starts or when spawned
void AMyDartBoard::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();
}

// Called every frame
void AMyDartBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("Value: %f"), DeltaTime);  0.1667
}

void AMyDartBoard::MovePlatform(float DeltaTime)
{
	if (shouldPlatformReturn())
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MoveDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	else 
	{
		FVector currentLocation = GetActorLocation();
		currentLocation = currentLocation + (PlatformVelocity * DeltaTime);
		SetActorLocation(currentLocation);
	}
}

bool AMyDartBoard::shouldPlatformReturn() const
{
	return getDistance() > MoveDistance;
}

float AMyDartBoard::getDistance() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
