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
	void CreateStarChoices(TArray<FDialogueChoice> Choices);
	void CreateButterbeanChoices(TArray<FDialogueChoice> Choices);

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UDialogueChoiceWidget> DialogueWidgetClass;


	FORCEINLINE UDualConversationWidget* GetDualConversationWidget() { return this; }

private:
	/*
	* Conversational Text Blocks
	*/
	UPROPERTY(meta = (bindWidget))
	class UTextBlock* NPCText;

	UPROPERTY(meta = (bindWidget))
	class UCanvasPanel* StarPanel;
	UPROPERTY(meta = (bindWidget))
	class UCanvasPanel* ButterbeanPanel;

	UPROPERTY(meta = (bindWidget))
	class UVerticalBox* StarChoiceBox;
	UPROPERTY(meta = (bindWidget))
	class UVerticalBox* ButterbeanChoiceBox;
	

};
