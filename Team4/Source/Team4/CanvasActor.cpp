#include "CanvasActor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine/Canvas.h"

// 필요한 헤더 추가
#include "RHI.h"
#include "RenderCore.h"

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

            // UV를 캔버스 픽셀 좌표로 변환
            FVector2D DrawPosition = UV * Size;

            // 도트 크기 및 반지름 설정
            float DotRadius = 5.0f; // 점의 반지름
            int32 Segments = 32;   // 원형 세그먼트 수 (정확도를 조절)

            FLinearColor DotColor = FLinearColor::Red; // 점의 색상

            // 원형 점 그리기
            for (int32 i = 0; i < Segments; i++)
            {
                float Angle = (2.0f * PI * i) / Segments;
                FVector2D Offset(FMath::Cos(Angle) * DotRadius, FMath::Sin(Angle) * DotRadius);
                FVector2D Point = DrawPosition + Offset;

                Canvas->K2_DrawBox(Point, FVector2D(1.0f, 1.0f), 1.0f, DotColor);
            }
            UE_LOG(LogTemp, Log, TEXT("Drew circular dot at position: (%f, %f)"), DrawPosition.X, DrawPosition.Y);

            // 캔버스 그리기 종료
            UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Context);
            UE_LOG(LogTemp, Log, TEXT("EndDrawCanvasToRenderTarget called"));

            // Render Target 업데이트
            CanvasRenderTarget->UpdateResourceImmediate(false);
            UE_LOG(LogTemp, Log, TEXT("CanvasRenderTarget updated"));

            /* 렌더링 명령 플러시
            FlushRenderingCommands();
            UE_LOG(LogTemp, Log, TEXT("Rendering commands flushed"));
*/
            UKismetRenderingLibrary::ExportRenderTarget(this, CanvasRenderTarget, TEXT("C://Users//kth00//Desktop//KTH"),TEXT("A.png"));

            
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



