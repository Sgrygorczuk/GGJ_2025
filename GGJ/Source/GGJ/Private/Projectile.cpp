// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Constructor
AProjectile::AProjectile()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create mesh component
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Create projectile movement component
    ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    ProjectileMovementComponent->InitialSpeed = 1000.f;
    ProjectileMovementComponent->MaxSpeed = 1000.f;

    Damage = 20.f; // Default damage
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (ProjectileMovementComponent)
    {
        FVector Velocity = ProjectileMovementComponent->Velocity;

        if (Velocity.IsNearlyZero())
        {
            FRotator NewRotation = Velocity.Rotation();
            SetActorRotation(NewRotation);
        }
        else {
            OnHit.Broadcast();
        }
    }
}

