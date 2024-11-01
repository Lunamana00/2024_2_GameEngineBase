#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class UInputAction;
class UInputMappingContext;
class AScreenSpawner;

UCLASS()
class YOURPROJECTNAME_API AMyCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMyCharacter();

protected:
    virtual void BeginPlay() override;

    // Enhanced Input���� ����� ���� ����
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputMappingContext* MyInputMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* RightClickAction;

    // �̵��� ��Ŭ���� ó���� �Լ�
    void Move(const FInputActionValue& Value);
    void OnRightClick();

    // ScreenSpawner ����
    UPROPERTY(EditAnywhere, Category = "Screen")
    AScreenSpawner* ScreenSpawner;

public:
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
