#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CanvasComponent.generated.h"

// 전방 선언
class ACanvasActor;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
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

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// 캔버스 미리보기 메쉬
	UPROPERTY()
	class UStaticMeshComponent* CanvasPreviewMesh;

	bool bIsPlacingCanvas;
	float CanvasDistance;

	APlayerController* PlayerController;

	// 캔버스 액터 클래스
	UPROPERTY(EditDefaultsOnly, Category = "Canvas")
	TSubclassOf<ACanvasActor> CanvasActorClass;
};
