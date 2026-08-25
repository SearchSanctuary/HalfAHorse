// Fill out your copyright notice in the Description page of Project Settings.

#include "ConversationDataAsset.h"
#include "DualConversationWidget.h"
#include "Conversation/ConversationManager.h"

void UConversationManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Warning, TEXT("Conversation Manager Initialized"));
}

void UConversationManager::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Conversation Manager Deinitialized"));

	Super::Deinitialize();
}

UConversationManager* UConversationManager::GetConversationManager()
{
	return this;
}

void UConversationManager::StartConversation(UConversationDataAsset* Conversation, UUserWidget* CreatedConversationWidget)
{
	// Initialize the conversation
	CurrentConversation = Conversation;
	UE_LOG(LogTemp, Display, TEXT("CM: Conversation Loaded"));

	if (CurrentConversation)
	{
		ConversationWidget = Cast<UDualConversationWidget>(CreatedConversationWidget);

		UE_LOG(LogTemp, Display, TEXT("CM: Checking Conversation Widget"));
		// Set node values to HUD
		if (ConversationWidget)
		{
			UE_LOG(LogTemp, Display, TEXT("CM: Adding Widget to Viewport"));
			ConversationWidget->AddToPlayerScreen();
			FDialogueNode* StartNode = GetNode("Start");
			if (StartNode)
				SetDialogueAndChoices(StartNode);
			else UE_LOG(LogTemp, Warning, TEXT("Failed to get StartNode"));
		}
		else UE_LOG(LogTemp, Warning, TEXT("No Conversation Widget Set"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Conversation is null!"));
		return;
	}
}

void UConversationManager::SetDialogueAndChoices(const FDialogueNode* CurrentNode)
{
	ConversationWidget->SetNPCDialogue(CurrentNode->DialogueText);
	UE_LOG(LogTemp, Warning, TEXT("CM: Dialogue Text set"));

	ConversationWidget->SetStarChoiceText(CurrentNode->StarChoices);
	//ConversationWidget->SetButterbeanChoiceText(CurrentNode->ButterbeanChoices);
}

FDialogueNode* UConversationManager::GetNode(FName NodeID)
{
	for (FDialogueNode& Node : CurrentConversation->ConversationNodes)
	{
		if (Node.NodeID == NodeID)
		{
			return &Node;
		}
	}
	return nullptr;
}

const FDialogueNode* UConversationManager::GetCurrentNode() const
{
	if (!CurrentConversation)
	{
		return nullptr;
	}
	for (const FDialogueNode& Node : CurrentConversation->ConversationNodes)
	{
		if (Node.NodeID == CurrentNodeID)
		{
			return &Node;
		}
	}
	return nullptr;
}

void UConversationManager::SelectChoice(FName ChoiceID)
{
	const FDialogueNode* CurrentNode = GetCurrentNode();
	if (!CurrentNode)
	{
		return;
	}
	// Find the selected choice
	for (const FDialogueChoice& Choice : CurrentNode->StarChoices)
	{
		if (Choice.ChoiceID == ChoiceID)
		{
			CurrentNodeID = Choice.NextNodeID;
			return;
		}
	}
	for (const FDialogueChoice& Choice : CurrentNode->ButterbeanChoices)
	{
		if (Choice.ChoiceID == ChoiceID)
		{
			CurrentNodeID = Choice.NextNodeID;
			return;
		}
	}
}

void UConversationManager::MoveToNextNode(FName NextNodeID)
{
	CurrentNodeID = NextNodeID;
	SetDialogueAndChoices(GetCurrentNode());
}
