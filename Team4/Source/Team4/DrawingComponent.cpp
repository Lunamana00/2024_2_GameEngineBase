#include "DrawingComponent.h"
#include "CanvasActor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"

UDrawingComponent::UDrawingComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    bIsDrawing = false;
    CurrentCanvasActor = nullptr;
}

void UDrawingComponent::BeginPlay()
{
    Super::BeginPlay();

    // 플레이어 컨트롤러 가져오기
    if (AActor* Owner = GetOwner())
    {
        if (APawn* Pawn = Cast<APawn>(Owner))
        {
            PlayerController = Cast<APlayerController>(Pawn->GetController());
            if (PlayerController)
            {
                UE_LOG(LogTemp, Log, TEXT("BeginPlay: PlayerController found"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("BeginPlay: PlayerController not found"));
            }
        }
    }
}

void UDrawingComponent::StartDrawing()
{
    UE_LOG(LogTemp, Log, TEXT("StartDrawing called"));

    bIsDrawing = true;

    // 마우스 커서 아래의 캔버스 액터를 찾습니다.
    FHitResult HitResult;
    if (PlayerController && PlayerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        CurrentCanvasActor = Cast<ACanvasActor>(HitResult.GetActor());
        UE_LOG(LogTemp, Log, TEXT("StartDrawing: CurrentCanvasActor is %s"), *GetNameSafe(CurrentCanvasActor));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("StartDrawing: No actor under cursor or PlayerController is null"));
    }
}

void UDrawingComponent::StopDrawing()
{
    UE_LOG(LogTemp, Log, TEXT("StopDrawing called"));

    bIsDrawing = false;
    CurrentCanvasActor = nullptr;
}

void UDrawingComponent::UpdateDrawing()
{
    UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: bIsDrawing = %s, CurrentCanvasActor = %s"), bIsDrawing ? TEXT("true") : TEXT("false"), *GetNameSafe(CurrentCanvasActor));

    if (bIsDrawing && CurrentCanvasActor)
    {
        // 마우스 커서 위치에서 캔버스에 그림을 그립니다.
        FHitResult HitResult;
        if (PlayerController && PlayerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
        {
            if (HitResult.GetActor() == CurrentCanvasActor)
            {
                FVector2D UV;
                if (CurrentCanvasActor->GetUVAtWorldLocation(HitResult.Location, UV))
                {
                    CurrentCanvasActor->DrawAtUV(UV);
                }
            }
        }
    }
    else
    {
        if (!bIsDrawing)
        {
            UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: Not drawing (bIsDrawing is false)"));
        }
        if (!CurrentCanvasActor)
        {
            UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: CurrentCanvasActor is null"));
        }
    }
}


void UDrawingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateDrawing();
}
