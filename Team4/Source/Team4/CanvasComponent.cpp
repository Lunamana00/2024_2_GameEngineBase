#include "CanvasComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "Components/InputComponent.h"

UCanvasComponent::UCanvasComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    bIsAdjustingPosition = true; // 처음에는 위치 조정 모드로 설정
}

void UCanvasComponent::BeginPlay()
{
    Super::BeginPlay();

    // 캔버스 생성
    CreateCanvas();

    // 입력 컴포넌트 설정
    if (AActor* Owner = GetOwner())
    {
        if (UInputComponent* InputComp = Owner->FindComponentByClass<UInputComponent>())
        {
            InputComp->BindAxis("MouseWheel", this, &UCanvasComponent::AdjustCanvasPosition);
            InputComp->BindAction("ToggleAdjustMode", IE_Pressed, this, &UCanvasComponent::ToggleAdjustMode);
        }
    }
}

void UCanvasComponent::CreateCanvas()
{
    if (AActor* Owner = GetOwner())
    {
        // 캔버스 메쉬 컴포넌트 생성
        CanvasMesh = NewObject<UStaticMeshComponent>(Owner);
        if (CanvasMesh)
        {
            CanvasMesh->RegisterComponent();
            CanvasMesh->AttachToComponent(Owner->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

            // 기본 메쉬 설정 (Plane으로 설정)
            static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMesh(TEXT("/Engine/BasicShapes/Plane"));
            if (PlaneMesh.Succeeded())
            {
                CanvasMesh->SetStaticMesh(PlaneMesh.Object);
            }

            // 캔버스 위치를 플레이어 앞에 배치
            CanvasMesh->SetRelativeLocation(FVector(200.f, 0.f, 0.f));
        }
    }
}

void UCanvasComponent::AdjustCanvasPosition(float AxisValue)
{
    if (bIsAdjustingPosition && CanvasMesh)
    {
        FVector NewLocation = CanvasMesh->GetRelativeLocation();
        NewLocation.X += AxisValue * 10.f; // 마우스 휠 입력 값에 따라 위치 조정
        CanvasMesh->SetRelativeLocation(NewLocation);
    }
}

void UCanvasComponent::ToggleAdjustMode()
{
    bIsAdjustingPosition = !bIsAdjustingPosition;

    // 디버그 메시지로 현재 모드 표시
    if (GEngine)
    {
        FString Mode = bIsAdjustingPosition ? TEXT("위치 조정 모드 활성화") : TEXT("위치 조정 모드 비활성화");
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, Mode);
    }
}

void UCanvasComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // 필요한 경우 틱에서 추가 로직 구현
}
