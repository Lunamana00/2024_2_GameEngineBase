#include "CanvasComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

UCanvasComponent::UCanvasComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    bIsPlacingCanvas = false;
    CanvasDistance = 1000.0f; // 기본 거리

    PreviewActor = nullptr;
}

void UCanvasComponent::BeginPlay()
{
    Super::BeginPlay();

    // PlayerController 가져오기
    if (APawn* PawnOwner = Cast<APawn>(GetOwner()))
    {
        PlayerController = Cast<APlayerController>(PawnOwner->GetController());
    }
}

void UCanvasComponent::StartPlacingCanvas()
{
    bIsPlacingCanvas = true;

    // 기존 미리보기 액터 제거
    if (PreviewActor)
    {
        UE_LOG(LogTemp, Log, TEXT("StartPlacingCanvas: Destroying existing Preview Actor."));
        PreviewActor->Destroy();
        PreviewActor = nullptr;
    }

    if (PreviewBlueprintClass && GetWorld())
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = GetOwner();
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        // 카메라 위치와 방향 가져오기
        FVector CameraLocation;
        FRotator CameraRotation;

        if (PlayerController)
        {
            PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

            // 카메라의 Forward 벡터(바라보는 방향)
            FVector ForwardDirection = CameraRotation.Vector();

            // 스폰 위치: 카메라 앞쪽 일정 거리
            FVector SpawnLocation = CameraLocation + (ForwardDirection * CanvasDistance);

            // 스폰 회전: 카메라 방향과 일치
            FRotator SpawnRotation = CameraRotation;

            // 액터 스폰
            PreviewActor = GetWorld()->SpawnActor<AActor>(PreviewBlueprintClass, SpawnLocation, SpawnRotation, SpawnParams);

            if (PreviewActor)
            {
                PreviewActor->SetActorEnableCollision(false); // 충돌 비활성화
                PreviewActor->SetActorHiddenInGame(false);    // 표시
                UE_LOG(LogTemp, Log, TEXT("Preview Actor successfully spawned at location (%s)."), *SpawnLocation.ToString());
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to spawn Preview Actor."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("PlayerController is null."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PreviewBlueprintClass is not set or GetWorld() is null."));
    }
}



void UCanvasComponent::StopPlacingCanvas()
{
    if (!bIsPlacingCanvas || !PreviewActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("StopPlacingCanvas: Invalid state or PreviewActor is null."));
        return;
    }

    // 배치 종료
    bIsPlacingCanvas = false;

    // 미리보기 액터의 위치와 회전 유지 (고정)
    FVector FinalLocation = PreviewActor->GetActorLocation();
    FRotator FinalRotation = PreviewActor->GetActorRotation();

    // 미리보기 액터를 고정 상태로 전환
    PreviewActor->SetActorEnableCollision(true); // 충돌 활성화 (필요 시)
    PreviewActor->SetActorHiddenInGame(false);   // 표시 상태 유지

    UE_LOG(LogTemp, Log, TEXT("Preview Actor fixed at location (%s) with rotation (%s)."),
           *FinalLocation.ToString(), *FinalRotation.ToString());
    CanvasDistance = 1000.0f;
}



void UCanvasComponent::AdjustCanvasDistance(float Value)
{
    CanvasDistance += Value * -50.0f; // 휠 스크롤에 따른 거리 조절
}


void UCanvasComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsPlacingCanvas && PlayerController && PreviewActor)
    {
        FVector CameraLocation;
        FRotator CameraRotation;
        PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

        // 카메라의 Forward 벡터(바라보는 방향)
        FVector ForwardDirection = CameraRotation.Vector();

        // 새 위치 계산: 카메라 앞쪽 일정 거리
        FVector NewLocation = CameraLocation + (ForwardDirection * CanvasDistance);

        // 미리보기 액터 위치 설정
        PreviewActor->SetActorLocation(NewLocation);
        
        PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

        // LookAt 방식으로 Z축(Yaw) 회전만 계산
        FVector ToCameraDirection = (CameraLocation - NewLocation).GetSafeNormal();
        FRotator LookAtRotation = ToCameraDirection.Rotation();
        FRotator FinalRotation = FRotator(-90.0f, LookAtRotation.Yaw, 0.0f); // Z축(Yaw)만 유지, Pitch와 Roll 고정

        // 미리보기 액터 회전 설정
        PreviewActor->SetActorRotation(FinalRotation);
    }
}
