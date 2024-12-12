// DrawingActor.cpp

#include "DrawingActor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/Canvas.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

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
    RenderTarget->UpdateResourceImmediate(true);

    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] RenderTarget initialized with ClearColor: (%f, %f, %f, %f)"),
           RenderTarget->ClearColor.R, RenderTarget->ClearColor.G, RenderTarget->ClearColor.B, RenderTarget->ClearColor.A);

    // 머티리얼 로드 및 적용
    UMaterialInterface* BaseMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/kth/M_DrawingCanvas"));
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

    // 파일 저장 경로 설정
    FString DirectoryPath = FPaths::ProjectSavedDir();
    FString FileName = TEXT("SavedDrawing.png");
    FString FullPath = FPaths::Combine(DirectoryPath, FileName);

    // RenderTarget 저장
    UKismetRenderingLibrary::ExportRenderTarget(this, RenderTarget, DirectoryPath, FileName);
    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] RenderTarget saved at: %s"), *FullPath);

    // Python 실행을 비동기로 처리
    FString PythonExecutable = TEXT("pyw"); // 환경 변수에 Python이 설정되어 있어야 함
    FString PythonScriptPath = FPaths::ProjectDir() / TEXT("Dataprocess/predict.pyw");

    Async(EAsyncExecution::ThreadPool, [PythonExecutable, PythonScriptPath, FullPath]()
    {
        int32 ReturnCode;
        FString StdOut;
        FString StdErr;

        FString Command = FString::Printf(TEXT("\"%s\" \"%s\""), *PythonScriptPath, *FullPath);
        bool bExecSuccess = FPlatformProcess::ExecProcess(*PythonExecutable, *Command, &ReturnCode, &StdOut, &StdErr);

        if (bExecSuccess && ReturnCode == 0 && !StdOut.IsEmpty())
        {
            UE_LOG(LogTemp, Log, TEXT("[SaveDrawing] Python StdOut: %s"), *StdOut);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("[SaveDrawing] Python script failed. StdErr: %s"), *StdErr);
        }

        AsyncTask(ENamedThreads::GameThread, [StdOut, ReturnCode]()
        {
            if (ReturnCode == 0 && !StdOut.IsEmpty())
            {
                UE_LOG(LogTemp, Log, TEXT("[SaveDrawing] Python Result: %s"), *StdOut);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("[SaveDrawing] Python script failed."));
            }
        });
    });

    UE_LOG(LogTemp, Log, TEXT("[SaveDrawing] Python script execution started."));
}


bool ADrawingActor::ExecutePrediction(const FString& ImagePath, FString& OutClass)
{
    // Python 실행 파일 경로
    FString PythonExecutable = TEXT("pyw");

    // Python 스크립트 경로
    FString PythonScriptPath = FPaths::ProjectDir() / TEXT("Dataprocess/predict.pyw");

    // 커맨드 구성
    FString CommandLineArgs = FString::Printf(TEXT("\"%s\" \"%s\""), *PythonScriptPath, *ImagePath);

    // 파이프 생성
    void* ReadPipe = nullptr;
    void* WritePipe = nullptr;
    FPlatformProcess::CreatePipe(ReadPipe, WritePipe);

    // Python 프로세스 실행
    FProcHandle ProcHandle = FPlatformProcess::CreateProc(
        *PythonExecutable,           // 실행 파일 경로
        *CommandLineArgs,            // 명령줄 인자
        true,                        // bLaunchDetached: 백그라운드 실행
        true,                        // bLaunchHidden: 창 숨김
        true,                        // bLaunchReallyHidden: 창 완전히 숨김
        nullptr,                     // Process ID
        0,                           // 우선순위
        *FPaths::ProjectDir(),       // 작업 디렉터리
        WritePipe                    // 출력 파이프
    );

    if (!ProcHandle.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Failed to start Python process."));
        return false;
    }

    // 프로세스 실행 결과 읽기
    FString StdOut;
    FString StdErr;

    while (FPlatformProcess::IsProcRunning(ProcHandle))
    {
        FString NewOutput = FPlatformProcess::ReadPipe(ReadPipe);
        if (!NewOutput.IsEmpty())
        {
            StdOut += NewOutput;
        }

        FPlatformProcess::Sleep(0.1f); // CPU 사용률 제한
    }

    // 프로세스 종료 코드 확인
    int32 ReturnCode = -1;
    FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);

    // 파이프 닫기
    FPlatformProcess::ClosePipe(ReadPipe, WritePipe);

    if (ReturnCode == 0)
    {
        OutClass = StdOut.TrimStartAndEnd();
        UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] Python Output: %s"), *StdOut);
        return true;
    }
    else
    {
        StdErr = FPlatformProcess::ReadPipe(ReadPipe);
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Python Error: %s"), *StdErr);
        return false;
    }
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
