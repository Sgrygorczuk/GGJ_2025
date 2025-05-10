// Fill out your copyright notice in the Description page of Project Settings.

#include "AmbulanceComponent.h"
#include "Math/UnrealMathUtility.h"
#include "NiagaraFunctionLibrary.h"

UAmbulanceComponent::UAmbulanceComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    // Setup defaults
    HealRadius = 1000.0f;
    HealAmount = 10.0f;
    HealCooldown = 1.0f;
    LastHealTime = 0.0f;
}

void UAmbulanceComponent::BeginPlay()
{
    Super::BeginPlay();

    // Setup Niagara component
    HealingVisualComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
        HealingEffect,
        GetOwner()->GetRootComponent(),
        NAME_None,
        FVector::ZeroVector,
        FRotator::ZeroRotator,
        EAttachLocation::SnapToTarget,
        true
    );

    if (HealingVisualComponent)
    {
        HealingVisualComponent->SetActive(false);
    }
}

void UAmbulanceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsRecharging)
    {
        //recover heal amount at intervals
        if (GetWorld()->TimeSince(LastHealTime) > HealInterval)
        {
            //log healRemaingAmount
            UE_LOG(LogTemp, Warning, TEXT("HealRemainingAmount: %f"), HealRemainingAmount);

            HealRemainingAmount = FMath::Clamp(HealRemainingAmount + HealAmount, 0.0f, HealMaxAmount);
            LastHealTime = GetWorld()->GetTimeSeconds();


            if ((HealMaxAmount - HealRemainingAmount < 0.001))//epsiln
            {
                bIsRecharging = false;
            }
        }
    }

    if (bIsHealing)
    {
        //Update visual effect
        //UpdateHealingEffect();

        //Debug sphere
        FVector Center = GetOwner()->GetActorLocation();
        float Radius = 1000.0f; // Set your desired radius
        int32 Segments = 32; // Number of segments to draw the sphere
        FColor Color = FColor::Red; // Color of the debug sphere
        float Duration = -1; // How long the sphere should be visible
        float Thickness = 1.0f; // Thickness of the lines

        DrawDebugSphere(GetWorld(), Center, Radius, Segments, Color, false, Duration, 0, Thickness);


        //Heal at intervals
        if (GetWorld()->TimeSince(LastHealTime) > HealInterval)
        {
            //Aoe heal
            ApplyRadialHealing();

            //log healRemaingAmount
            UE_LOG(LogTemp, Warning, TEXT("HealRemainingAmount: %f"), HealRemainingAmount);

            HealRemainingAmount -= HealAmount;
            LastHealTime = GetWorld()->GetTimeSeconds();

            if (HealRemainingAmount <= 0.01f)
            {
                SetHealingActive(false);
            }
        }
    }
}

void UAmbulanceComponent::ApplyRadialHealing()
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    TArray<FOverlapResult> OverlapResults;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(Owner);

    bool bHit = GetWorld()->OverlapMultiByChannel(
        OverlapResults,
        Owner->GetActorLocation(),
        FQuat::Identity,
        ECC_Pawn,
        FCollisionShape::MakeSphere(HealRadius),
        QueryParams
    );

    for (const FOverlapResult& Result : OverlapResults)
    {
        AActor* OverlappedActor = Result.GetActor();
        if (OverlappedActor && OverlappedActor != Owner)
        {
            if (UCharacterComponent* CharacterComp = OverlappedActor->FindComponentByClass<UCharacterComponent>())
            {
                CharacterComp->Heal(HealAmount);
            }
        }
    }
}

void UAmbulanceComponent::SetHealingActive(bool bActive)
{
    if (bActive && HealMaxAmount - HealRemainingAmount < 0.001)//epsiln
    {
        bIsHealing = true;
    }
    else
    {
        if (bIsHealing == false) return;

        bIsHealing = false;
        //start cooldown
        GetWorld()->GetTimerManager().SetTimer(HealTimerHandler, this, &UAmbulanceComponent::ResetHeal, HealCooldown, false);
    }
}

void UAmbulanceComponent::UpdateHealingEffect()
{
    if (!HealingVisualComponent) return;

    if (!HealingVisualComponent->IsActive())
    {
        HealingVisualComponent->SetActive(true);
    }

    // Update effect parameters
    HealingVisualComponent->SetNiagaraVariableFloat(FString("Radius"), HealRadius);
    HealingVisualComponent->SetNiagaraVariableLinearColor(FString("EffectColor"), HealingColor);
}

void UAmbulanceComponent::ResetHeal()
{
    bIsRecharging = true;
}
