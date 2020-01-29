// Fill out your copyright notice in the Description page of Project Settings.

#include "AIS_StatTest.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "AIS_CPP_StatItem.h"




UAIS_StatTest::UAIS_StatTest(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Cost = EEnvTestCost::Low;
	ValidItemType = UEnvQueryItemType_Actor::StaticClass();
	FloatValueMax.DefaultValue = 1.f;
}

void UAIS_StatTest::RunTest(FEnvQueryInstance & EnvQueryInstance) const
{
	UObject* UQueryOwner = EnvQueryInstance.Owner.Get();

	if (UQueryOwner == nullptr)
	{
		return;
	}
	FloatValueMin.BindData(UQueryOwner, EnvQueryInstance.QueryID);
	const float MinThresholdValue = FloatValueMin.GetValue();

	FloatValueMax.BindData(UQueryOwner, EnvQueryInstance.QueryID);
	const float MaxThresholdValue = FloatValueMin.GetValue();

	NeededStatIndex.BindData(UQueryOwner, EnvQueryInstance.QueryID);
	const int32 NeededStat = NeededStatIndex.GetValue();

	for (FEnvQueryInstance::ItemIterator It(this,EnvQueryInstance); It; ++It)
	{
		const AActor* ItemActor = GetItemActor(EnvQueryInstance, It.GetIndex());
		const AAIS_CPP_StatItem* AIS_Stat_Item = Cast<AAIS_CPP_StatItem>(ItemActor);

		const float ItemScore = AIS_Stat_Item ? AIS_Stat_Item->GetStatRestore(NeededStat) : 0.f;
		It.SetScore(TestPurpose, FilterType, ItemScore, MinThresholdValue, MaxThresholdValue);
	}
}

FText UAIS_StatTest::GetDescriptionTitle() const
{
	return FText::FromString(TEXT("Amount of needed stat"));
}
