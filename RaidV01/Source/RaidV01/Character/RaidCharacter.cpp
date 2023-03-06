// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"	
#include "GameFramework/CharacterMovementComponent.h"
#include "RaidV01/RaidComponents/CombatComponent.h"
#include "Net/UnrealNetwork.h"
#include "RaidV01/Weapon/Weapon.h"


// Sets default values
ARaidCharacter::ARaidCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	//Combat = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	//Combat->SetIsReplicated(true);
}

void ARaidCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ARaidCharacter, OverlappingWeapon, COND_OwnerOnly);
}

// Called when the game starts or when spawned
void ARaidCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void ARaidCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARaidCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARaidCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ARaidCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ARaidCharacter::LookUp);

	PlayerInputComponent->BindAction("Equip", IE_Pressed, this, &ARaidCharacter::EquipButtonPressed);
}

//void ARaidCharacter::PostInitilizeComponents()
//{
	//Super::PostInitializeComponents();
	//if (Combat) {
	//	Combat->Character = this;
	//}
//}

void ARaidCharacter::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.f) {
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, Value);
	}
}

void ARaidCharacter::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.f) {
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Direction, Value);
	}
}

void ARaidCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ARaidCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void ARaidCharacter::EquipButtonPressed()
{
	//if (Combat) {
		//revisit weapon again Combat->EquipWeapon(OverlappingWeapon);
	//}
}

bool ARaidCharacter::IsWeaponEquipped()
{
	return true; //setting is default the player has the weapon
}

// Called every frame
void ARaidCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARaidCharacter::SetOverlappingWeapon(AWeapon* Weapon) {
	if (OverlappingWeapon) {
		OverlappingWeapon->ShowPickUpWidget(false);
	}
	OverlappingWeapon = Weapon;
	if (IsLocallyControlled()) {
		if (OverlappingWeapon) {
			OverlappingWeapon->ShowPickUpWidget(true);
		}
	}
}

void ARaidCharacter::OnRep_OverlappingWeapon(AWeapon* LastWeapon) {
	if (OverlappingWeapon) {
		OverlappingWeapon->ShowPickUpWidget(true);
	}
	if (LastWeapon) {
		LastWeapon->ShowPickUpWidget(false);
	}
}