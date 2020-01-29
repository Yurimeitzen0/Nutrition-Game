// Fill out your copyright notice in the Description page of Project Settings.

#include "AIS_Character_CPP.h"


// Sets default values
AAIS_Character_CPP::AAIS_Character_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIS_Character_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIS_Character_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIS_Character_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

int32 AAIS_Character_CPP::GetMostDesiredStatIndex() const
{
	float MostDesiredLevel = FLT_MIN;
	int32 MostDesiredStat = INDEX_NONE;
	for (int32 StatIndex = StatDesirability.Num()-1; StatIndex >=0; --StatIndex)
	{
		if (StatDesirability[StatIndex] > MostDesiredLevel)
		{
			MostDesiredLevel = StatDesirability[StatIndex];
			MostDesiredStat = StatIndex;
		}
	}
	return MostDesiredStat;
}

