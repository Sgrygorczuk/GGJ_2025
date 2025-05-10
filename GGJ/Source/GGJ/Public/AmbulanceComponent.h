// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterComponent.h"
#include "NiagaraComponent.h"
#include "AmbulanceComponent.generated.h"

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GGJ_API UAmbulanceComponent : public UCharacterComponent
{
	GENERATED_BODY()

public:
	UAmbulanceComponent();

	void BeginPlay() override;
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ApplyRadialHealing();

	UFUNCTION(BlueprintCallable)
	void SetHealingActive(bool bActive);

	void UpdateHealingEffect();

	void ResetHeal();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealRemainingAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealMaxAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealCooldown;

	UPROPERTY(EditAnywhere, Category = "Visuals")
	UNiagaraSystem* HealingEffect;

	UPROPERTY(VisibleAnywhere, Category = "Visuals")
	UNiagaraComponent* HealingVisualComponent;

	UPROPERTY(EditAnywhere, Category = "Visuals")
	FLinearColor HealingColor;

private:
	bool bIsHealing;
	bool bIsRecharging;
	bool bCanHeal;
	float LastHealTime;

	//Timer handles
	FTimerHandle HealTimerHandler;

};
