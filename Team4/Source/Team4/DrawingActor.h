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

	// 그리기 함수 (서버 실행)
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_DrawAtLocation(const FVector& HitLocation);

	// 클라이언트 브로드캐스트 함수
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DrawAtLocation(const FVector& HitLocation);

	// 새로운 전역 변수 추가
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Drawing")
	FString PredictedClass;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Prediction")
	FString PredictionResult; // 블루프린트에서 접근 가능한 변
	
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Drawing")
	FVector LastHitLocation;

	UFUNCTION(BlueprintCallable, Category = "Drawing")
	void SaveDrawing();

	// Function to send image to the server
	void SendImageToServer(const FString& ImagePath);

	// Callback function to handle server response
	void OnServerResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	bool ExecutePrediction(const FString& ImagePath, FString& OutClass);

	// 네트워크 동기화를 위한 함수
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void BeginDestroy() override;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPredictionComplete);

	UPROPERTY(BlueprintAssignable, Category = "Prediction")
	FOnPredictionComplete OnPredictionComplete;
};
