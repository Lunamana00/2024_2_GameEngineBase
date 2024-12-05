#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CanvasActor.generated.h"

UCLASS()
class TEAM4_API ACanvasActor : public AActor
{
	GENERATED_BODY()

public:
	ACanvasActor();

protected:
	virtual void BeginPlay() override;

public:
	// 캔버스 메쉬
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Canvas")
	UStaticMeshComponent* CanvasMesh;

	// Render Target
	UPROPERTY()
	UTextureRenderTarget2D* CanvasRenderTarget;

	// 동적 머티리얼 인스턴스
	UPROPERTY()
	UMaterialInstanceDynamic* CanvasMaterialInstance;

	// 그림 그리기 함수
	void DrawAtUV(const FVector2D& UV);

	// UV 좌표 계산 함수
	bool GetUVAtWorldLocation(const FVector& WorldLocation, FVector2D& OutUV) const;

	// 이미지 데이터를 서버로 전송하기 위한 함수
	void GetCanvasImageData(TArray<uint8>& OutImageData);
};
