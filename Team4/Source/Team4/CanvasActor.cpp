#include "CanvasActor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "ImageUtils.h"
#include "HighResScreenshot.h"
#include "Engine/Canvas.h"

ACanvasActor::ACanvasActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 캔버스 메쉬 생성
    CanvasMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanvasMesh"));
    RootComponent = CanvasMesh;

    // 메쉬 설정 (Plane 메쉬 사용)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMesh(TEXT("/Engine/BasicShapes/Plane"));
    if (PlaneMesh.Succeeded())
    {
        CanvasMesh->SetStaticMesh(PlaneMesh.Object);
    }

    // 머티리얼 설정 (기본 머티리얼 사용)
    static ConstructorHelpers::FObjectFinder<UMaterial> CanvasMaterial(TEXT("Material'/Game/Materials/M_CanvasMaterial.M_CanvasMaterial'"));
    if (CanvasMaterial.Succeeded())
    {
        CanvasMesh->SetMaterial(0, CanvasMaterial.Object);
    }

    // 충돌 설정
    CanvasMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CanvasMesh->SetCollisionObjectType(ECC_WorldDynamic);
    CanvasMesh->SetCollisionResponseToAllChannels(ECR_Block);
    CanvasMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

    // CanvasRenderTarget 생성은 BeginPlay에서 수행
}

void ACanvasActor::BeginPlay()
{
    Super::BeginPlay();

    // Render Target 생성
    CanvasRenderTarget = NewObject<UTextureRenderTarget2D>(this, UTextureRenderTarget2D::StaticClass(), TEXT("CanvasRenderTarget"));
    CanvasRenderTarget->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
    CanvasRenderTarget->ClearColor = FLinearColor::Transparent;
    CanvasRenderTarget->InitAutoFormat(1024, 1024);
    CanvasRenderTarget->UpdateResourceImmediate(true);
    UE_LOG(LogTemp, Log, TEXT("BeginPlay: CanvasRenderTarget created"));

    // 동적 머티리얼 인스턴스 생성
    if (CanvasMesh)
    {
        CanvasMaterialInstance = CanvasMesh->CreateDynamicMaterialInstance(0);
        if (CanvasMaterialInstance && CanvasRenderTarget)
        {
            UE_LOG(LogTemp, Log, TEXT("BeginPlay: Setting CanvasTexture in material"));
            CanvasMaterialInstance->SetTextureParameterValue(FName("CanvasTexture"), CanvasRenderTarget);
            UE_LOG(LogTemp, Log, TEXT("CanvasTexture parameter set in material"));
        }
        else
        {
            if (!CanvasMaterialInstance)
            {
                UE_LOG(LogTemp, Error, TEXT("BeginPlay: Failed to create dynamic material instance"));
            }
            if (!CanvasRenderTarget)
            {
                UE_LOG(LogTemp, Error, TEXT("BeginPlay: CanvasRenderTarget is null"));
            }
        }
    }
}

void ACanvasActor::DrawAtUV(const FVector2D& UV)
{
    UE_LOG(LogTemp, Log, TEXT("DrawAtUV called with UV: (%f, %f)"), UV.X, UV.Y);

    if (CanvasRenderTarget)
    {
        UCanvas* Canvas = nullptr;
        FVector2D Size;
        FDrawToRenderTargetContext Context;

        // 캔버스에 그리기 시작
        UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, CanvasRenderTarget, Canvas, Size, Context);
        UE_LOG(LogTemp, Log, TEXT("BeginDrawCanvasToRenderTarget called"));

        if (Canvas)
        {
            UE_LOG(LogTemp, Log, TEXT("Canvas is valid"));
            UE_LOG(LogTemp, Log, TEXT("Canvas Size: (%f, %f)"), Size.X, Size.Y);

            // 캔버스 전체를 파란색으로 채우기
            FLinearColor DrawColor = FLinearColor::Blue;
            Canvas->K2_DrawBox(FVector2D(0, 0), Size, 1.0f, DrawColor);
            UE_LOG(LogTemp, Log, TEXT("Canvas filled with blue"));

            // 캔버스 그리기 종료 및 Render Target 업데이트
            UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Context);
            UE_LOG(LogTemp, Log, TEXT("EndDrawCanvasToRenderTarget called"));

            // Render Target 업데이트
            CanvasRenderTarget->UpdateResourceImmediate(false);
            UE_LOG(LogTemp, Log, TEXT("CanvasRenderTarget updated"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Canvas is null"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("CanvasRenderTarget is null"));
    }
}


bool ACanvasActor::GetUVAtWorldLocation(const FVector& WorldLocation, FVector2D& OutUV) const
{
    if (CanvasMesh)
    {
        FVector LocalLocation = CanvasMesh->GetComponentTransform().InverseTransformPosition(WorldLocation);
        FVector2D LocalXY(LocalLocation.X, LocalLocation.Y);

        // 메쉬의 크기와 스케일을 고려하여 MeshSize 계산
        FVector2D MeshSize = FVector2D(100.0f, 100.0f);
        FVector2D MeshScale = FVector2D(CanvasMesh->GetComponentScale().X, CanvasMesh->GetComponentScale().Y);
        MeshSize *= MeshScale;

        // UV 좌표 계산
        OutUV = (LocalXY / MeshSize) + FVector2D(0.5f, 0.5f);

        UE_LOG(LogTemp, Log, TEXT("GetUVAtWorldLocation: LocalXY=(%f, %f), OutUV=(%f, %f)"), LocalXY.X, LocalXY.Y, OutUV.X, OutUV.Y);

        // UV 범위 확인
        if (OutUV.X >= 0.0f && OutUV.X <= 1.0f && OutUV.Y >= 0.0f && OutUV.Y <= 1.0f)
        {
            return true;
        }
    }
    return false;
}

void ACanvasActor::GetCanvasImageData(TArray<uint8>& OutImageData)
{
    if (CanvasRenderTarget)
    {
        FTextureRenderTargetResource* RenderTargetResource = CanvasRenderTarget->GameThread_GetRenderTargetResource();
        if (RenderTargetResource)
        {
            TArray<FColor> Bitmap;
            FIntPoint Size(CanvasRenderTarget->SizeX, CanvasRenderTarget->SizeY);

            // 픽셀 데이터 읽기
            RenderTargetResource->ReadPixels(Bitmap);

            // 이미지 압축 (PNG)
            FImageUtils::CompressImageArray(Size.X, Size.Y, Bitmap, OutImageData);
        }
    }
}
