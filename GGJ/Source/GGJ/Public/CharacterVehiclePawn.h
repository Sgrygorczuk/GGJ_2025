// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "CharacterVehiclePawn.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

/**
 * 
 */
UCLASS()
class GGJ_API ACharacterVehiclePawn : public AWheeledVehiclePawn
{
	GENERATED_BODY()

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
//
//public:
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
//	float currentHealth = 100.0f;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
//	float maxHealth = 100.0f;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
//	bool isDead = false;
//
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	
//
//	UFUNCTION(BlueprintCallable, Category = "Character Actions")
//	void TakeDamage(float damageAmount);
//
//	//UFUNCTION(BlueprintCallable, Category = "Character Actions")
//	//virtual void ApplyDamage() override;
//
//
//	UFUNCTION(BlueprintCallable, Category = "Character Actions")
//	void Heal(float healAmount);
//
//	// Death event 
//	UPROPERTY(BlueprintAssignable, Category = "Character Events")
//	FOnDeath OnDeath;
	
};
