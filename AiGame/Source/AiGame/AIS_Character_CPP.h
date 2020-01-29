// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIS_Character_CPP.generated.h"

UCLASS()
class AIGAME_API AAIS_Character_CPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIS_Character_CPP();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	TArray<float> StatDesirability;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	int32 GetMostDesiredStatIndex() const;
	
	
};
