// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UFInteractorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNDEADFACTORY_API UUFInteractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUFInteractorComponent();

	// Set/Get/Has Current Interactible

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// BI Interactible

	// Smart Object Claim Handle
};
