// Fill out your copyright notice in the Description page of Project Settings.


#include "UFResourceGatheringAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UUFResourceGatheringAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UUFResourceGatheringAttributeSet, GatherLevelMining, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUFResourceGatheringAttributeSet, GatherSpeedMining, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUFResourceGatheringAttributeSet, GatherBonusMining, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UUFResourceGatheringAttributeSet, GatherLevelWoodcutting, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUFResourceGatheringAttributeSet, GatherSpeedWoodcutting, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUFResourceGatheringAttributeSet, GatherBonusWoodcutting, COND_None, REPNOTIFY_Always);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherLevelMining(const FGameplayAttributeData& OldGatherLevelMining)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherLevelMining, OldGatherLevelMining);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherSpeedMining(const FGameplayAttributeData& OldGatherSpeedMining)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherSpeedMining, OldGatherSpeedMining);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherBonusMining(const FGameplayAttributeData& OldGatherBonusMining)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherBonusMining, OldGatherBonusMining);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherLevelWoodcutting(const FGameplayAttributeData& OldGatherLevelWoodcutting)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherLevelWoodcutting, OldGatherLevelWoodcutting);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherSpeedWoodcutting(const FGameplayAttributeData& OldGatherSpeedWoodcutting)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherSpeedWoodcutting, OldGatherSpeedWoodcutting);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherBonusWoodcutting(const FGameplayAttributeData& OldGatherBonusWoodcutting)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherBonusWoodcutting, OldGatherBonusWoodcutting);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherLevelHunting(const FGameplayAttributeData& OldGatherLevelHunting)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherLevelHunting, OldGatherLevelHunting);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherSpeedHunting(const FGameplayAttributeData& OldGatherSpeedHunting)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherSpeedHunting, OldGatherSpeedHunting);
}

void UUFResourceGatheringAttributeSet::OnRep_GatherBonusHunting(const FGameplayAttributeData& OldGatherBonusHunting)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUFResourceGatheringAttributeSet, GatherBonusHunting, OldGatherBonusHunting);
}