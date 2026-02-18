// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredFoe.h"
#include "ArmouredHealth.h"

/// <summary>
/// notice how the constructors super works differently
/// </summary>
AArmouredFoe::AArmouredFoe() : Super()
{
	
}

void AArmouredFoe::BeginPlay()
{
	Super::BeginPlay();
	if (Cast<UArmouredHealth>(Health))
	{
		Cast<UArmouredHealth>(Health)->ArmourBroke.AddDynamic(this, &AArmouredFoe::ArmourBroken); // note Armour broke is my delegate name
		UE_LOG(LogTemp, Warning, TEXT("I am Armoured Health"));
	}
}
void AArmouredFoe::ArmourBroken()
{
	if (UnArmouredMaterial)
	{
		UE_LOG(LogTemp, Warning, TEXT("I am Armoured Health"));
	}
}