// Fill out your copyright notice in the Description page of Project Settings.


#include "Conversation/DualConversationWidget.h"
#include "ConversationDataAsset.h"
#include "DialogueChoiceWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "ConversationManager.h"
#include "DialogueChoiceWidget.h"

void UDualConversationWidget::CreateStarChoices(TArray<FDialogueChoice> Choices)
{
	UE_LOG(LogTemp, Warning, TEXT("DCW: Creating Star Choices"));

	//StarChoiceBox->ClearChildren();

	for (FDialogueChoice Choice : Choices) {
		UDialogueChoiceWidget* ChoiceWidget = CreateWidget<UDialogueChoiceWidget>(GetWorld(), DialogueWidgetClass);

		if (ChoiceWidget)
		{
			UE_LOG(LogTemp, Warning, TEXT("DCW: Created Choice Widget"));
			UE_LOG(LogTemp, Warning, TEXT("DCW: ChoiceBox Size: %d ChoiceText: %s"), StarChoiceBox->GetChildrenCount(), *Choice.ChoiceText.ToString());

			ChoiceWidget->SetDialogueChoice(Choice);
			ChoiceWidget->SetVisibility(ESlateVisibility::Visible);

			StarChoiceBox->AddChild(ChoiceWidget);
			UE_LOG(LogTemp, Warning, TEXT("DCW: Added Choice Widget"));

		}
		else {
			UE_LOG(LogTemp, Display, TEXT("DCW: Failed to create choice widget"));
		}
	}
	
}

void UDualConversationWidget::CreateButterbeanChoices(TArray<FDialogueChoice> Choices)
{
	ButterbeanChoiceBox->ClearChildren();

	for (FDialogueChoice Choice : Choices) {
		UDialogueChoiceWidget* ChoiceWidget = CreateWidget<UDialogueChoiceWidget>(GetWorld(), UDialogueChoiceWidget::StaticClass());

		if (ChoiceWidget)
		{
			ChoiceWidget->SetDialogueChoice(Choice);

			ButterbeanChoiceBox->AddChild(ChoiceWidget);
		}
	}

}

void UDualConversationWidget::SetNPCDialogue(FText DialogueText)
{
	NPCText->SetText(DialogueText);
}
