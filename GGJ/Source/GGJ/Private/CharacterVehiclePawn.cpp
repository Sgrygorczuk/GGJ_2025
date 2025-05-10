// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterVehiclePawn.h"

void ACharacterVehiclePawn::BeginPlay()
{
	Super::BeginPlay();
}

void ACharacterVehiclePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

////Todo add DamageInfo damageInfo
//void ACharacterVehiclePawn::TakeDamage(float damageAmount)
//{
//	if (isDead) { return; }
//
//	currentHealth -= damageAmount;
//	if (currentHealth <= 0)
//	{
//		// Call the death function
//		isDead = true;
//		OnDeath.Broadcast();
//	}
//}
//
//void ACharacterVehiclePawn::Heal(float healAmount)
//{
//	if (isDead) { return; }
//
//	currentHealth += healAmount;
//	if (currentHealth > maxHealth)
//	{
//		currentHealth = maxHealth;
//	}
//}
