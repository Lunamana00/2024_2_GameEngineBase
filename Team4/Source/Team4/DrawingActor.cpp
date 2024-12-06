// DrawingActor.cpp

#include "DrawingActor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/Canvas.h"

// Constructor
ADrawingActor::ADrawingActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // Static Mesh Component 생성
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    
}

void ADrawingActor::BeginPlay()
{
    Super::BeginPlay();

    // Render Target 초기화
    RenderTarget = NewObject<UTextureRenderTarget2D>(this, UTextureRenderTarget2D::StaticClass(), TEXT("RenderTarget"));
    RenderTarget->InitAutoFormat(896, 896);
    RenderTarget->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
    RenderTarget->ClearColor = FLinearColor(1.0f, 1.0f, 1.0f, 0.5f); // 반투명 흰색
    RenderTarget->UpdateResourceImmediate(true);

    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] RenderTarget initialized with ClearColor: (%f, %f, %f, %f)"),
           RenderTarget->ClearColor.R, RenderTarget->ClearColor.G, RenderTarget->ClearColor.B, RenderTarget->ClearColor.A);

    // 머티리얼 로드 및 적용
    UMaterialInterface* BaseMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/kth/M_DrawingCanvas.M_DrawingCanvas"));
    if (!BaseMaterial)
    {
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Failed to load BaseMaterial!"));
        return;
    }

    // 동적 머티리얼 생성
    DynamicMaterial = UMaterialInstanceDynamic::Create(BaseMaterial, this);
    if (!DynamicMaterial)
    {
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Failed to create DynamicMaterial!"));
        return;
    }

    // RenderTarget을 머티리얼에 적용
    DynamicMaterial->SetTextureParameterValue(FName("RenderTarget"), RenderTarget);

    // 메시 컴포넌트에 머티리얼 설정
    if (!MeshComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] MeshComponent is null in BeginPlay!"));
        return;
    }

    MeshComponent->SetMaterial(0, DynamicMaterial);

    // RenderTarget 초기화 로그
    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] RenderTarget applied to DynamicMaterial successfully."));
}

    
void ADrawingActor::DrawAtLocation(const FVector& HitLocation)
{
    if (!RenderTarget)
    {
        UE_LOG(LogTemp, Warning, TEXT("RenderTarget is null!"));
        return;
    }

    // Canvas 초기화
    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;

    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, RenderTarget, Canvas, CanvasSize, Context);

    if (Canvas)
    {
        // 히트 위치를 로컬 좌표로 변환
        FTransform MeshTransform = MeshComponent->GetComponentTransform();
        FVector LocalHitLocation = MeshTransform.InverseTransformPosition(HitLocation);

        // 디버깅: Local Hit Location, MeshExtent, WorldScale
        FVector MeshExtent = MeshComponent->Bounds.BoxExtent;
        FVector WorldScale = MeshComponent->GetComponentScale();
        UE_LOG(LogTemp, Log, TEXT("Local Hit Location: (%f, %f, %f)"), LocalHitLocation.X, LocalHitLocation.Y, LocalHitLocation.Z);
        UE_LOG(LogTemp, Log, TEXT("Mesh Extent: (%f, %f, %f)"), MeshExtent.X, MeshExtent.Y, MeshExtent.Z);
        UE_LOG(LogTemp, Log, TEXT("World Scale: (%f, %f, %f)"), WorldScale.X, WorldScale.Y, WorldScale.Z);

        // 메시 크기와 스케일을 이용한 UV 계산
        FVector2D UV;
        UV.X = (LocalHitLocation.X + 50.0f) / 100.0f;
        UV.Y = (LocalHitLocation.Y + 50.0f) / 100.0f;

        // UV 좌표를 0~1 범위로 제한
        UV.X = FMath::Clamp(UV.X, 0.0f, 1.0f);
        UV.Y = FMath::Clamp(UV.Y, 0.0f, 1.0f);

        UE_LOG(LogTemp, Log, TEXT("UV Coordinates (Revised): (%f, %f)"), UV.X, UV.Y);

        // UV 좌표를 Canvas 좌표로 변환
        FVector2D CanvasPosition = UV * CanvasSize;
        UE_LOG(LogTemp, Log, TEXT("Canvas Position: (%f, %f)"), CanvasPosition.X, CanvasPosition.Y);

        // 사각형 크기와 색상 설정
        FVector2D RectSize = FVector2D(10.0f, 10.0f);
        FLinearColor RectColor = FLinearColor::White;

        // 사각형 그리기
        Canvas->K2_DrawBox(CanvasPosition - (RectSize * 0.5f), RectSize, 30.0f, RectColor);

        // Canvas 그리기 종료
        UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Context);

        // Render Target 업데이트
        RenderTarget->UpdateResourceImmediate(false);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Canvas is null!"));
    }
}


void ADrawingActor::SaveDrawing()
{
    if (!RenderTarget)
    {
        UE_LOG(LogTemp, Warning, TEXT("[ADrawingActor] RenderTarget is null in SaveDrawing!"));
        return;
    }

    FString DirectoryPath = FPaths::ProjectSavedDir();
    FString FileName = TEXT("SavedDrawing.png");

    UKismetRenderingLibrary::ExportRenderTarget(this, RenderTarget, DirectoryPath, FileName);

    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] RenderTarget saved at: %s%s"), *DirectoryPath, *FileName);
}

void ADrawingActor::BeginDestroy()
{
    Super::BeginDestroy();

    // RenderTarget 정리
    if (RenderTarget)
    {
        RenderTarget->ConditionalBeginDestroy();
        RenderTarget = nullptr;
    }

    // DynamicMaterial 정리
    if (DynamicMaterial)
    {
        DynamicMaterial->ConditionalBeginDestroy();
        DynamicMaterial = nullptr;
    }
}
void ADrawingActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}