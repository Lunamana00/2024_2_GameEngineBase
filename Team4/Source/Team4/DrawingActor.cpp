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
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Async/Async.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"

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

    // 이미지 저장 경로 설정
    FString DirectoryPath = GIsEditor ? FPaths::ProjectSavedDir() : FPaths::LaunchDir();
    FString FileName = TEXT("SavedDrawing.png");
    FString FullPath = FPaths::Combine(DirectoryPath, FileName);
    FString AbsolutePath = FPaths::ConvertRelativePathToFull(DirectoryPath);

    // RenderTarget 저장
    UKismetRenderingLibrary::ExportRenderTarget(this, RenderTarget, AbsolutePath, FileName);

    if (!FPaths::DirectoryExists(AbsolutePath))
    {
        if (!IFileManager::Get().MakeDirectory(*AbsolutePath, true))
        {
            UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Failed to create directory: %s"), *AbsolutePath);
            return;
        }
    }

    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] RenderTarget saved at: %s"), *AbsolutePath);

    // Flask 서버에 비동기로 이미지 전송
    SendImageToServer(AbsolutePath);
}


void ADrawingActor::SendImageToServer(const FString& ImagePath)
{
    // HTTP 요청 생성
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(TEXT("http://127.0.0.1:8000/predict"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    // JSON 데이터 생성
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField(TEXT("file_path"), ImagePath);

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    // 요청 데이터 설정
    HttpRequest->SetContentAsString(RequestBody);

    // 요청 완료 콜백
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &ADrawingActor::OnServerResponseReceived);
    HttpRequest->ProcessRequest();
}

void ADrawingActor::OnServerResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Server request failed"));
        return;
    }

    // 서버 응답 내용 가져오기
    FString ResponseContent = Response->GetContentAsString();
    UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] Server Response: %s"), *ResponseContent);

    // JSON 파싱
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        // "prediction" 필드 추출
        FString Prediction;
        if (JsonObject->TryGetStringField(TEXT("prediction"), Prediction))
        {
            UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] Extracted Prediction: %s"), *Prediction);

            // 메인 스레드에서 변수 업데이트 및 이벤트 브로드캐스트
            FFunctionGraphTask::CreateAndDispatchWhenReady([this, Prediction]()
            {
                PredictedClass = Prediction; // "K" 값 할당

                UE_LOG(LogTemp, Log, TEXT("[ADrawingActor] PredictionResult updated to: %s"), *PredictionResult);
            }, TStatId(), nullptr, ENamedThreads::GameThread);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] 'prediction' field not found in JSON response"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("[ADrawingActor] Failed to parse JSON response"));
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
