// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHit);

UCLASS()
class GGJ_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UProjectileMovementComponent* ProjectileMovementComponent;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage")
    float Damage;

    UPROPERTY(EditAnywhere, Category = "Events")
    FOnHit OnHit;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
