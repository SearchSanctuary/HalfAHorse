// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "ConversationManager.generated.h"

/**
 * 
 */

class UConversationDataAsset;
class UDualConversationWidget;
UCLASS()
class HALFAHORSE_API UConversationManager : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UConversationManager* GetConversationManager();
	
	void StartConversation(UConversationDataAsset* Conversation, UUserWidget* CreatedConversationWidget);
	void SetDialogueAndChoices(const FDialogueNode* CurrentNode);
	void SelectChoice(FName ChoiceID);
	FDialogueNode* GetNode(FName NodeID);
	void MoveToNextNode(FName NextNodeID);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDualConversationWidget* ConversationWidget;

	// Single conversation widget
	// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	// USingleConversationWidget* SingleConversationWidget;

private:
	UPROPERTY()
	UConversationDataAsset* CurrentConversation;
	UPROPERTY()
	FName CurrentNodeID;

	const FDialogueNode* GetCurrentNode() const;

};
