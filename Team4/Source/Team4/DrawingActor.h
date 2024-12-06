#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrawingActor.generated.h"

UCLASS()
class TEAM4_API ADrawingActor : public AActor
{
	GENERATED_BODY()

public:
	// 생성자
	ADrawingActor();

protected:
	// 시작 시 호출
	
	virtual void BeginPlay() override;

public:
	// 매 프레임 호출
	virtual void Tick(float DeltaTime) override;

	// 컴포넌트들
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UMaterialInstanceDynamic* DynamicMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UTextureRenderTarget2D* RenderTarget;

	// 그리기 함수
	UFUNCTION(BlueprintCallable, Category = "Drawing")
	void DrawAtLocation(const FVector& HitLocation);

	UFUNCTION(BlueprintCallable, Category = "Drawing")
	void SaveDrawing();

	void BeginDestroy() override;
};
