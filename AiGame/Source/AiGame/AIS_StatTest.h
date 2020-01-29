// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "AIS_StatTest.generated.h"

/**
 * 
 */
UCLASS(meta = (DisplayName = "Amount of Needed Stat"))
class AIGAME_API UAIS_StatTest : public UEnvQueryTest
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Stat")
		FAIDataProviderIntValue NeededStatIndex;
public:
	UAIS_StatTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void RunTest(FEnvQueryInstance& EnvQueryInstance) const override;

	virtual FText GetDescriptionTitle() const override;
	
};
