// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "UFResourceGatheringAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class UNDEADFACTORY_API UUFResourceGatheringAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	/** Sets up replication for the attribute set */
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	virtual void OnRep_GatherLevelMining(const FGameplayAttributeData& OldGatherLevelMining);

	UFUNCTION()
	virtual void OnRep_GatherSpeedMining(const FGameplayAttributeData& OldGatherSpeedMining);

	UFUNCTION()
	virtual void OnRep_GatherBonusMining(const FGameplayAttributeData& OldGatherBonusMining);

	UFUNCTION()
	virtual void OnRep_GatherLevelWoodcutting(const FGameplayAttributeData& OldGatherLevelWoodcutting);

	UFUNCTION()
	virtual void OnRep_GatherSpeedWoodcutting(const FGameplayAttributeData& OldGatherSpeedWoodcutting);

	UFUNCTION()
	virtual void OnRep_GatherBonusWoodcutting(const FGameplayAttributeData& OldGatherBonusWoodcutting);

	UFUNCTION()
	virtual void OnRep_GatherLevelHunting(const FGameplayAttributeData& OldGatherLevelHunting);

	UFUNCTION()
	virtual void OnRep_GatherSpeedHunting(const FGameplayAttributeData& OldGatherSpeedHunting);

	UFUNCTION()
	virtual void OnRep_GatherBonusHunting(const FGameplayAttributeData& OldGatherBonusHunting);

public:
	// Mining Attributes

	UPROPERTY(BlueprintReadOnly, Category = "Mining", ReplicatedUsing = OnRep_GatherLevelMining)
	FGameplayAttributeData GatherLevelMining;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherLevelMining)
	
	UPROPERTY(BlueprintReadOnly, Category = "Mining", ReplicatedUsing = OnRep_GatherSpeedMining)
	FGameplayAttributeData GatherSpeedMining;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherSpeedMining)

	UPROPERTY(BlueprintReadOnly, Category = "Mining", ReplicatedUsing = OnRep_GatherBonusMining)
	FGameplayAttributeData GatherBonusMining;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherBonusMining)

	// Woodcutting Attributes

	UPROPERTY(BlueprintReadOnly, Category = "Woodcutting", ReplicatedUsing = OnRep_GatherLevelWoodcutting)
	FGameplayAttributeData GatherLevelWoodcutting;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherLevelWoodcutting)

	UPROPERTY(BlueprintReadOnly, Category = "Woodcutting", ReplicatedUsing = OnRep_GatherSpeedWoodcutting)
	FGameplayAttributeData GatherSpeedWoodcutting;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherSpeedWoodcutting)

	UPROPERTY(BlueprintReadOnly, Category = "Woodcutting", ReplicatedUsing = OnRep_GatherBonusWoodcutting)
	FGameplayAttributeData GatherBonusWoodcutting;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherBonusWoodcutting)

	// Hunting Attributes

	UPROPERTY(BlueprintReadOnly, Category = "Hunting", ReplicatedUsing = OnRep_GatherLevelHunting)
	FGameplayAttributeData GatherLevelHunting;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherLevelHunting)

	UPROPERTY(BlueprintReadOnly, Category = "Hunting", ReplicatedUsing = OnRep_GatherSpeedHunting)
	FGameplayAttributeData GatherSpeedHunting;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherSpeedHunting)

	UPROPERTY(BlueprintReadOnly, Category = "Hunting", ReplicatedUsing = OnRep_GatherBonusHunting)
	FGameplayAttributeData GatherBonusHunting;
	ATTRIBUTE_ACCESSORS(UUFResourceGatheringAttributeSet, GatherBonusHunting)
};