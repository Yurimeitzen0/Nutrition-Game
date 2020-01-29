// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "AIS_DataProvider.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, Meta = (DisplayName = "Owner\'s Properties"))
class UAIS_DataProvider : public UAIDataProvider_QueryParams
{
	GENERATED_BODY()
protected:
	//UPROPERTY empty because the data provider class already exposes their functions
	UPROPERTY()
	int32 RequiredIndex;
public:
	virtual void BindData(const UObject& Owner, int32 RequestId) override;
	//virtual FString ToString(FName PropName) const override;
	
	
};
