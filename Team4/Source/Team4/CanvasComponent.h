#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CanvasComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAM4_API UCanvasComponent : public UActorComponent
{
	GENERATED_BODY()

public:    
	UCanvasComponent();

protected:
	virtual void BeginPlay() override;

public:    
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 캔버스 메쉬 컴포넌트
	UPROPERTY(VisibleAnywhere, Category="Canvas")
	UStaticMeshComponent* CanvasMesh;

	// 위치 조정 모드 여부
	bool bIsAdjustingPosition;

	// 마우스 휠 입력 함수
	void AdjustCanvasPosition(float AxisValue);

	// 위치 조정 모드 토글 함수
	void ToggleAdjustMode();

private:
	// 캔버스 생성 함수
	void CreateCanvas();
};
