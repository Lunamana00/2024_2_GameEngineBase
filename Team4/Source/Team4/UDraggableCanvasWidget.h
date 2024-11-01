#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "UDraggableCanvasWidget.generated.h"

UCLASS()
class TEAM4_API UDraggableCanvasWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

protected:
    virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    virtual FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

private:
    bool bIsDragging;
    FVector2D DragOffset;
};
