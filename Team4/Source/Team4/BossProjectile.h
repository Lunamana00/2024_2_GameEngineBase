#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "BossProjectile.generated.h"

UCLASS(Blueprintable)
class TEAM4_API ABossProjectile : public AActor
{
    GENERATED_BODY()

public:
    ABossProjectile();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // �ݸ��� ������Ʈ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
    USphereComponent* CollisionComponent;

    // �޽� ������Ʈ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    UStaticMeshComponent* MeshComponent;

    // ����ü �̵� ������Ʈ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    UProjectileMovementComponent* ProjectileMovementComponent;

    // ����Ʈ
    UPROPERTY(EditAnywhere, Category = "Effects")
    UNiagaraSystem* TrailEffect;

    UPROPERTY(EditAnywhere, Category = "Effects")
    UNiagaraSystem* LaunchEffect;

private:
    UNiagaraComponent* TrailEffectComponent;
    UNiagaraComponent* LaunchEffectComponent;

    // Ÿ�̸� �ڵ�
    FTimerHandle LaunchEffectTimerHandle;
    FTimerHandle HomingReductionTimerHandle;

    // ȣ�� ���� ����
    float InitialHomingAcceleration;
    float ReductionDuration;
    float ElapsedTime;

    // ����ü �ʱ�ȭ
    void InitializeProjectile(AActor* Target);

    // ����Ʈ �� ȣ�� ó�� �Լ�
    void StopLaunchEffect();
    void ReduceHoming();
};
