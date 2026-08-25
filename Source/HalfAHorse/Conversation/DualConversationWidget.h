// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ConversationTypes.h"
#include "DualConversationWidget.generated.h"

/**
 * 
 */
class UConversationManager;
UCLASS()
class HALFAHORSE_API UDualConversationWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void SetNPCDialogue(FText DialogueText);	
	void SetStarChoiceText(TArray<FDialogueChoice> Choices);
	void SetButterbeanChoiceText(TArray<FDialogueChoice> Choices);

	FORCEINLINE UDualConversationWidget* GetDualConversationWidget() { return this; }

private:
	/*
	* Conversational Text Blocks
	*/
	UPROPERTY(meta = (bindWidget))
	class UTextBlock* NPCText;

	UPROPERTY(meta = (bindWidget))
	class UCanvasPanel* P1Panel;
	UPROPERTY(meta = (bindWidget))
	class UCanvasPanel* P2Panel;

	UPROPERTY(meta = (bindWidget))
	class UVerticalBox* P1ChoiceList;
	UPROPERTY(meta = (bindWidget))
	class UVerticalBox* P2ChoiceList;

	UPROPERTY(meta = (bindWidget))
	class UDialogueChoiceWidget* P1Choice_1;
	UPROPERTY(meta = (bindWidget))
	class UDialogueChoiceWidget* P1Choice_2;
	UPROPERTY(meta = (bindWidget))
	class UDialogueChoiceWidget* P1Choice_3;

	TArray<UDialogueChoiceWidget*> StarChoiceButtons = { P1Choice_1, P1Choice_2, P1Choice_3 };

	UPROPERTY(meta = (bindWidget))
	class UDialogueChoiceWidget* P2Choice_1;
	UPROPERTY(meta = (bindWidget))
	class UDialogueChoiceWidget* P2Choice_2;
	UPROPERTY(meta = (bindWidget))
	class UDialogueChoiceWidget* P2Choice_3;
	
	TArray<UDialogueChoiceWidget*> ButterbeanChoiceButtons = { P2Choice_1, P2Choice_2, P2Choice_3 };

};
