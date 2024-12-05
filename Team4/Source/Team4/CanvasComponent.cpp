#include "CanvasComponent.h"
#include "CanvasActor.h" // 추가
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"

UCanvasComponent::UCanvasComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    bIsPlacingCanvas = false;
    CanvasDistance = 1000.0f; // 기본 거리

    // 캔버스 미리보기 메쉬 컴포넌트 생성
    CanvasPreviewMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanvasPreviewMesh"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CanvasMeshAsset(TEXT("/Engine/BasicShapes/Plane"));
    if (CanvasMeshAsset.Succeeded())
    {
        CanvasPreviewMesh->SetStaticMesh(CanvasMeshAsset.Object);
    }
    CanvasPreviewMesh->SetVisibility(false);
    CanvasPreviewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 충돌 비활성화

    // **ConstructorHelpers::FClassFinder를 생성자로 이동**
    static ConstructorHelpers::FClassFinder<ACanvasActor> CanvasActorBPClass(TEXT("/Game/Blueprints/BP_CanvasActor"));
    if (CanvasActorBPClass.Succeeded())
    {
        CanvasActorClass = CanvasActorBPClass.Class;
    }
}


void UCanvasComponent::BeginPlay()
{
    Super::BeginPlay();

    // 부모 설정
    if (AActor* Owner = GetOwner())
    {
        if (USceneComponent* RootComponent = Owner->GetRootComponent())
        {
            CanvasPreviewMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
        }
    }

    // PlayerController 가져오기
    if (APawn* PawnOwner = Cast<APawn>(GetOwner()))
    {
        PlayerController = Cast<APlayerController>(PawnOwner->GetController());
    }
}

void UCanvasComponent::StartPlacingCanvas()
{
    bIsPlacingCanvas = true;
    CanvasPreviewMesh->SetVisibility(true);
}

void UCanvasComponent::StopPlacingCanvas()
{
    bIsPlacingCanvas = false;
    CanvasPreviewMesh->SetVisibility(false);

    if (PlayerController)
    {
        FVector WorldLocation;
        FVector WorldDirection;
        PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

        FVector SpawnLocation = WorldLocation + (WorldDirection * CanvasDistance);

        // 회전을 고정된 값으로 설정
        FRotator SpawnRotation = FRotator(0.0f, 0.0f, 90.0f); // 예: 회전을 고정

        if (GetWorld() && CanvasActorClass)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = GetOwner();
            SpawnParams.Instigator = GetOwner()->GetInstigator();

            // 캔버스 액터 스폰
            ACanvasActor* SpawnedCanvas = GetWorld()->SpawnActor<ACanvasActor>(CanvasActorClass, SpawnLocation, SpawnRotation, SpawnParams);
            if (SpawnedCanvas)
            {
                // 필요에 따라 추가 설정
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("CanvasActorClass가 설정되지 않았습니다."));
        }
    }
}


void UCanvasComponent::AdjustCanvasDistance(float Value)
{
    CanvasDistance += Value * 50.0f; // 휠 스크롤에 따른 거리 조절
}

void UCanvasComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsPlacingCanvas && PlayerController)
    {
        FVector WorldLocation;
        FVector WorldDirection;
        PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

        FVector NewLocation = WorldLocation + (WorldDirection * CanvasDistance);
        CanvasPreviewMesh->SetWorldLocation(NewLocation);

        // 캔버스의 회전을 고정된 값으로 설정
        FRotator FixedRotation = FRotator(0.0f, 0.0f, 90.0f); // 예: 회전을 고정
        CanvasPreviewMesh->SetWorldRotation(FixedRotation);
    }
}

