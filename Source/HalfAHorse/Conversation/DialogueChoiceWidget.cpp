// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Conversation/DialogueChoiceWidget.h"

void UDialogueChoiceWidget::SetDialogueChoice(const FDialogueChoice& InChoice)
{
	ChoiceData = InChoice;

	if (DialogueText)
	{
		DialogueText->SetText(ChoiceData.ChoiceTip);
		UE_LOG(LogTemp, Warning, TEXT("Setting choice text: %s"),
			*ChoiceData.ChoiceText.ToString());
	}
}

FName UDialogueChoiceWidget::OnDialogueChoiceSelected()
{
	return FName();
}

void UDialogueChoiceWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (DialogueButton)
	{
		DialogueButton->OnClicked.AddDynamic(this, &UDialogueChoiceWidget::OnDialogueButtonClicked);
	}
}

void UDialogueChoiceWidget::OnDialogueButtonClicked()
{
	
}
