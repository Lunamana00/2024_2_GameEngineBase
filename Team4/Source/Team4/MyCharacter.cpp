#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ScreenSpawner.h"
#include "InputMappingContext.h"
#include "InputAction.h"

AMyCharacter::AMyCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMyCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
        if (Subsystem)
        {
            Subsystem->AddMappingContext(MyInputMappingContext, 0);
        }
    }
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
        EnhancedInputComponent->BindAction(RightClickAction, ETriggerEvent::Triggered, this, &AMyCharacter::OnRightClick);
    }
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
    // X, Y �� ���� ����
    FVector2D MovementVector = Value.Get<FVector2D>();

    // ĳ������ ������ ������� �̵�
    if (Controller)
    {
        AddMovementInput(GetActorForwardVector(), MovementVector.Y);
        AddMovementInput(GetActorRightVector(), MovementVector.X);
    }
}

void AMyCharacter::OnRightClick()
{
    if (ScreenSpawner)
    {
        ScreenSpawner->SpawnScreen(this);
    }
}
