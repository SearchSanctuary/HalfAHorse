// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ConversationTypes.h"
#include "DialogueChoiceWidget.generated.h"

/**
 * 
 */
UCLASS()
class HALFAHORSE_API UDialogueChoiceWidget : public UUserWidget
{
	GENERATED_BODY()
	
public: 

	void SetDialogueChoice(const FDialogueChoice& InChoice);

	// Called when dialogue choice is selected
	FName OnDialogueChoiceSelected();

protected:

	virtual void NativeConstruct() override;

	UPROPERTY(meta = (bindWidget))
	class UButton* DialogueButton;

	UPROPERTY(meta = (bindWidget))
	class UTextBlock* DialogueText;

private: 

	FDialogueChoice ChoiceData;

	UFUNCTION()
	void OnDialogueButtonClicked();
};
