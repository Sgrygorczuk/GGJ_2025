// Fill out your copyright notice in the Description page of Project Settings.


#include "TankComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/SplineComponent.h"
#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Constructor
UTankComponent::UTankComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.SetTickFunctionEnable(true);

    FireCooldown = 2.0f;        // Normal shot every 2 seconds
    AttackDamage = 10.0f;   // Damage for normal shot
    MortarCooldown = 15.0f;  // Mortar available every 5 seconds
    //MortarDamage = 50.0f;   // AoE damage for mortar
    //MortarRadius = 300.0f;  // Radius for AoE
    MortarLaunchSpeed = 10000.0f; // Initial speed of the mortar

    MortarFirePointNameRef = "MortarFirePoint";

    bCanUseMortar = true;

    //ifDebuf
    IsShowingTrajectory = true;
}

// Called when the game starts
void UTankComponent::BeginPlay()
{
    Super::BeginPlay();

    //ATTENTION CHECK NAMES IN INSPECTOR
    if (MortarFirePointNameRef.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("FiringMortarPoint is not assigned in %s."), *GetOwner()->GetName());
    }
    else {
        MortarFirePoint = Cast<UArrowComponent>(GetOwner()->GetDefaultSubobjectByName(FName(*MortarFirePointNameRef)));

        MortarTrajectory = GetOwner()->FindComponentByClass<USplineComponent>();
        TrajectoryVisual = MortarTrajectory->GetOwner()->FindComponentByClass<UNiagaraComponent>();

        MortarTrajectory->SetHiddenInGame(true, true);
    }

    // Ensure the projectile class is valid
    if (!MortarProjectileClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProjectileClass is not assigned in %s."), *GetOwner()->GetName());
    }

}

/// <summary>
/// Mortar Fire
/// </summary>
/// <param name="TargetLocation"></param>
void UTankComponent::FireMortar()
{
    if (!bCanUseMortar)
        return;

    // Spawn the projectile
    FVector spawnLocation = MortarFirePoint->GetComponentLocation();
    FRotator spawnRotation = MortarFirePoint->GetComponentRotation();

    AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(MortarProjectileClass, spawnLocation, spawnRotation);

    //set Projectile speed and remove gravity
    auto movComp = Cast<UProjectileMovementComponent>(Projectile->GetComponentByClass(UProjectileMovementComponent::StaticClass()));
    movComp->ProjectileGravityScale = GravityOnMortar;

    movComp->InitialSpeed = MortarLaunchSpeed;
    movComp->MaxSpeed = MortarLaunchSpeed;

    bCanUseMortar = false;
    GetWorld()->GetTimerManager().SetTimer(MortarCooldownHandle, this, &UTankComponent::ResetMortar, MortarCooldown, false);
}

void UTankComponent::ShowTrajectory()
{
    MortarTrajectory->SetHiddenInGame(false, true);
    IsShowingTrajectory = true;
}

void UTankComponent::HideTrajectory()
{
    MortarTrajectory->SetHiddenInGame(true, true);
    IsShowingTrajectory = false;
}

void UTankComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (IsShowingTrajectory)
    {
        FPredictProjectilePathParams Params;

        Params.StartLocation = MortarFirePoint->GetComponentLocation();
        Params.LaunchVelocity = MortarFirePoint->GetForwardVector() * MortarLaunchSpeed;
        Params.ProjectileRadius = 10000.f;

        FPredictProjectilePathResult PathResult;

        // Predict the projectile path
        bool bHit = UGameplayStatics::PredictProjectilePath(GetWorld(), Params, PathResult);

        TArray<FVector> SplinePoints;

        for (auto point : PathResult.PathData)
        {
            SplinePoints.Add(point.Location);
        }

        MortarTrajectory->SetSplinePoints(SplinePoints, ESplineCoordinateSpace::World);
    }
}

// Apply AoE Damage
void UTankComponent::ApplyAoEDamage(FVector TargetLocation)
{
    TArray<AActor*> IgnoredActors;
    IgnoredActors.Add(GetOwner());

    //Apply radial damage
    UGameplayStatics::ApplyRadialDamage(
        GetWorld(),
        100.f,
        TargetLocation,
        10000.f,
        nullptr,
        IgnoredActors,
        GetOwner(),
        GetOwner()->GetInstigatorController(),
        true
    );

    // Optional: Add a visual effect or explosion effect here
}

void UTankComponent::ResetMortar()
{
    bCanUseMortar = true;
}


