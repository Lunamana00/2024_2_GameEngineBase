#include "UDraggableCanvasWidget.h" // 반드시 첫 번째로 포함

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanelSlot.h"

void UDraggableCanvasWidget::NativeConstruct()
{
    Super::NativeConstruct();

    bIsDragging = false;
}

FReply UDraggableCanvasWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
    {
        bIsDragging = true;

        FVector2D LocalMousePosition = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());
        DragOffset = LocalMousePosition;

        return FReply::Handled();
    }

    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

FReply UDraggableCanvasWidget::NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (bIsDragging)
    {
        FVector2D ScreenSpacePosition = InMouseEvent.GetScreenSpacePosition();
        FVector2D NewPosition = ScreenSpacePosition - DragOffset;

        float Scale = UWidgetLayoutLibrary::GetViewportScale(this);
        NewPosition /= Scale;

        if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Slot))
        {
            CanvasSlot->SetPosition(NewPosition);
        }

        return FReply::Handled();
    }

    return Super::NativeOnMouseMove(InGeometry, InMouseEvent);
}

FReply UDraggableCanvasWidget::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (bIsDragging && InMouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
    {
        bIsDragging = false;
        return FReply::Handled();
    }

    return Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);
}
