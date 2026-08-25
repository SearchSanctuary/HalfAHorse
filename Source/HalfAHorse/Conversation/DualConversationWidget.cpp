// Fill out your copyright notice in the Description page of Project Settings.


#include "Conversation/DualConversationWidget.h"
#include "ConversationDataAsset.h"
#include "Components/TextBlock.h"
#include "ConversationManager.h"
#include "DialogueChoiceWidget.h"

void UDualConversationWidget::SetStarChoiceText(TArray<FDialogueChoice> Choices)
{
	for (int i = 0; i < Choices.Num(); i++ ) {
		StarChoiceButtons[i]->DialogueText->SetText(Choices[i].ChoiceText);
	}
	
}

void UDualConversationWidget::SetButterbeanChoiceText(TArray<FDialogueChoice> Choices)
{
	for (int i = 0; i < Choices.Num(); i++) {
		ButterbeanChoiceButtons[i]->DialogueText->SetText(Choices[i].ChoiceText);
	}

}

void UDualConversationWidget::SetNPCDialogue(FText DialogueText)
{
	NPCText->SetText(DialogueText);
}
