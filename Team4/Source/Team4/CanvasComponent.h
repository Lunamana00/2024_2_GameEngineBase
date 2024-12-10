#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CanvasComponent.generated.h"

// 전방 선언
class ACanvasActor;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEAM4_API UCanvasComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCanvasComponent();

	UFUNCTION(BlueprintCallable)
	void StartPlacingCanvas();

	UFUNCTION(BlueprintCallable)
	void StopPlacingCanvas();

	UFUNCTION(BlueprintCallable)
	void AdjustCanvasDistance(float Value);

	// 블루프린트 클래스를 설정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Canvas")
	TSubclassOf<AActor> PreviewBlueprintClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Canvas")
	TSubclassOf<AActor> CanvasActorClass;
	
protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// 현재 미리보기로 사용 중인 블루프린트 액터
	AActor* PreviewActor;

	// 캔버스 배치 상태
	bool bIsPlacingCanvas;
	float CanvasDistance;
	
	// 플레이어 컨트롤러
	APlayerController* PlayerController;
};
