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

    // Enhanced Input에서 사용할 변수 선언
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputMappingContext* MyInputMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* RightClickAction;

    // 이동과 우클릭을 처리할 함수
    void Move(const FInputActionValue& Value);
    void OnRightClick();

    // ScreenSpawner 참조
    UPROPERTY(EditAnywhere, Category = "Screen")
    AScreenSpawner* ScreenSpawner;

public:
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
