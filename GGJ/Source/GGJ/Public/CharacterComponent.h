// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ArrowComponent.h"
#include "Projectile.h"
#include "CharacterComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GGJ_API UCharacterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharacterComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	float currentHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	float maxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	bool isDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	float FireCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	float FireLaunchSpeed;

	// Damage value for the normal shot
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	float AttackDamage;

	//Firing point reference
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	FString FirePointNameRef;

	//Projectile class
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firing")
	TSubclassOf<class AProjectile> FiringProjectileClass;

private:
	TObjectPtr<class UArrowComponent> FirePoint;

	//Timer handle
	FTimerHandle FireTimerHandle;

	bool bCanFire;


public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Character Actions")
	void TakeDamage(float damageAmount);

	UFUNCTION(BlueprintCallable, Category = "Character Actions")
	void Heal(float healAmount);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void Fire();

	// Death event 
	UPROPERTY(BlueprintAssignable, Category = "Character Events")
	FOnDeath OnDeath;

private:
	void ResetFire();

};
