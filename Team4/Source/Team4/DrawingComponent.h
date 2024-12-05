#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrawingComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TEAM4_API UDrawingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDrawingComponent();

	// 블루프린트에서 호출 가능한 함수들
	UFUNCTION(BlueprintCallable)
	void StartDrawing();

	UFUNCTION(BlueprintCallable)
	void StopDrawing();

	UFUNCTION(BlueprintCallable)
	void UpdateDrawing();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// 그림을 그리고 있는지 여부
	bool bIsDrawing;

	// 현재 캔버스 액터
	class ACanvasActor* CurrentCanvasActor;

	// 플레이어 컨트롤러
	class APlayerController* PlayerController;
};
