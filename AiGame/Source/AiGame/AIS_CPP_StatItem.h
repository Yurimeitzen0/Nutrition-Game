// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIS_CPP_StatItem.generated.h"

UCLASS()
class AIGAME_API AAIS_CPP_StatItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIS_CPP_StatItem();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "Stat")
	TArray<float> StatRestore;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//FORCEINLINE int32 GetPrimaryIndex() const { return PrimaryStatIndex; }
	float GetStatRestore(const int32 StatIndex) const { return StatRestore.IsValidIndex(StatIndex) ? StatRestore[StatIndex] : 0.f; }
	
	
};
