// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Slash/DebugMacros.h"

// Sets default values
AItem::AItem()  
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	const FVector Forward = GetActorForwardVector();
	const FVector StartLocation = GetActorLocation();
	const FVector EndLocation = StartLocation + FVector(Forward.X * 100.0, Forward.Y * 100.0, Forward.Z * 100.0);

	DRAW_SPHERE(StartLocation);
	DRAW_VECTOR(StartLocation, EndLocation);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
