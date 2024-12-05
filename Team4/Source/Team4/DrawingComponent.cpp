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

    // 화면 중앙 계산
    FVector2D ScreenCenter;
    if (GEngine && GEngine->GameViewport)
    {
        FVector2D ViewportSize;
        GEngine->GameViewport->GetViewportSize(ViewportSize);
        ScreenCenter = ViewportSize * 0.5f;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("StartDrawing: Unable to get viewport size"));
        return;
    }

    // 화면 중앙에서 레이캐스트 실행
    FHitResult HitResult;
    if (PlayerController && PlayerController->GetHitResultAtScreenPosition(ScreenCenter, ECC_Visibility, false, HitResult))
    {
        CurrentCanvasActor = Cast<ACanvasActor>(HitResult.GetActor());
        if (CurrentCanvasActor)
        {
            UE_LOG(LogTemp, Log, TEXT("StartDrawing: Found CurrentCanvasActor at center: %s"), *GetNameSafe(CurrentCanvasActor));
            UE_LOG(LogTemp, Log, TEXT("StartDrawing: Distance to actor is %f"), HitResult.Distance);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("StartDrawing: No valid canvas actor found at center"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("StartDrawing: No actor hit at screen center or PlayerController is null"));
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
        UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: Drawing is in progress and CurrentCanvasActor is valid"));

        // 마우스 커서 위치에서 캔버스에 그림을 그립니다.
        FHitResult HitResult;
        if (PlayerController)
        {
            UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: PlayerController is valid"));

            bool bHit = PlayerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
            UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: GetHitResultUnderCursor returned %s"), bHit ? TEXT("true") : TEXT("false"));

            if (bHit)
            {
                UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: HitResult Actor = %s"), *GetNameSafe(HitResult.GetActor()));

                if (HitResult.GetActor() == CurrentCanvasActor)
                {
                    UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: HitResult Actor matches CurrentCanvasActor"));

                    FVector2D UV;
                    bool bGotUV = CurrentCanvasActor->GetUVAtWorldLocation(HitResult.Location, UV);
                    UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: GetUVAtWorldLocation returned %s"), bGotUV ? TEXT("true") : TEXT("false"));

                    if (bGotUV)
                    {
                        UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: UV = (%f, %f)"), UV.X, UV.Y);
                        CurrentCanvasActor->DrawAtUV(UV);
                        UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: Called DrawAtUV"));
                    }
                    else
                    {
                        UE_LOG(LogTemp, Warning, TEXT("UpdateDrawing: Failed to get UV at world location"));
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Log, TEXT("UpdateDrawing: HitResult Actor does not match CurrentCanvasActor"));
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("UpdateDrawing: No actor hit under cursor"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("UpdateDrawing: PlayerController is null"));
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
