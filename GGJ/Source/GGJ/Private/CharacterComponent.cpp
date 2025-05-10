// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values for this component's properties
UCharacterComponent::UCharacterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bCanFire = true;

	CreateDefaultSubobject<UArrowComponent>(TEXT("FirePoint"));
	FirePointNameRef = "FirePoint";

	// ...
}


// Called when the game starts
void UCharacterComponent::BeginPlay()
{
	Super::BeginPlay();

	// Ensure the firing point is valid
	if (FirePointNameRef.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("FiringPoint is not assigned in %s."), *GetOwner()->GetName());
	}
	else
	{
		FirePoint = Cast<UArrowComponent>(GetOwner()->GetDefaultSubobjectByName(FName(*FirePointNameRef)));
	}

	// Ensure the projectile class is valid
	if (!FiringProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ProjectileClass is not assigned in %s."), *GetOwner()->GetName());
	}

}


// Called every frame
void UCharacterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//Todo add DamageInfo damageInfo
void UCharacterComponent::TakeDamage(float damageAmount)
{
	if (isDead) { return; }

	currentHealth -= damageAmount;
	if (currentHealth <= 0)
	{
		// Call the death function
		isDead = true;
		OnDeath.Broadcast();
	}
}

void UCharacterComponent::Heal(float healAmount)
{
	if (isDead) { return; }

	currentHealth += healAmount;
	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}
}

void UCharacterComponent::Fire()
{
	if (!bCanFire)
		return;

	// Spawn the projectile
	FVector spawnLocation = FirePoint->GetComponentLocation();
	FRotator spawnRotation = FirePoint->GetComponentRotation();

	AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(FiringProjectileClass, spawnLocation, spawnRotation);

	//set Projectile speed and remove gravity
	auto movComp = Cast<UProjectileMovementComponent>(Projectile->GetComponentByClass(UProjectileMovementComponent::StaticClass()));
	movComp->ProjectileGravityScale = 0.0f;

	//normal of up plane
	movComp->SetPlaneConstraintNormal(FVector(0, 0, 1));

	bCanFire = false;
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &UCharacterComponent::ResetFire, FireCooldown, false);

}

void UCharacterComponent::ResetFire()
{
	bCanFire = true;
}

