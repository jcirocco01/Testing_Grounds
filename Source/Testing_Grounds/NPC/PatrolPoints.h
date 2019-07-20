// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolPoints.generated.h"


/**
* A 'Route Card' To assign patrol routes to AI characters
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTING_GROUNDS_API UPatrolPoints : public UActorComponent
{
	GENERATED_BODY()

public:	
	TArray<AActor*> GetPatrolPoints() const; //Getter of Array to protect it from being changed by other methods

private:
	UPROPERTY(EditAnywhere, Category = "Patrolling")
	TArray<AActor*> PatrolPoints;
		
};
