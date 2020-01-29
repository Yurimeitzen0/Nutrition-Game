// Fill out your copyright notice in the Description page of Project Settings.

#include "AIS_DataProvider.h"
#include "AIS_Character_CPP.h"


void UAIS_DataProvider::BindData(const UObject & Owner, int32 RequestId)
{
	const AAIS_Character_CPP* Character = Cast<const AAIS_Character_CPP>(&Owner);
	if (Character)
	{
		RequiredIndex = Character->GetMostDesiredStatIndex();

	}
}
