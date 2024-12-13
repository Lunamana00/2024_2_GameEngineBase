#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Runtime/Online/HTTP/Public/Http.h"
#include "Misc/FileHelper.h"
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

	// 새로운 전역 변수 추가
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drawing")
	FString PredictedClass;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Prediction")
	FString PredictionResult; // 블루프린트에서 접근 가능한 변
	
	UFUNCTION(BlueprintCallable, Category = "Drawing")
	void SaveDrawing();

	void BeginDestroy() override;
	// Function to send image to the server
	void SendImageToServer(const FString& ImagePath);

	// Callback function to handle server response
	void OnServerResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPredictionComplete);

	UPROPERTY(BlueprintAssignable, Category = "Prediction")
	FOnPredictionComplete OnPredictionComplete;
};
