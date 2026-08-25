#pragma once

#include "CoreMinimal.h"
#include "ConversationEnums.generated.h"

UENUM(BlueprintType)
enum class ESpeaker : uint8
{
	NPC UMETA(DisplayName = "NPC"),
	Player1 UMETA(DisplayName = "Player 1"),
	Player2 UMETA(DisplayName = "Player 2")
};

USTRUCT(BlueprintType)
struct FDialogueNode
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	FName NodeID;

	UPROPERTY(EditAnywhere)
	ESpeaker Speaker;

	UPROPERTY(EditAnywhere)
	FText DialogueText;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueChoice> Player1Choices;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueChoice> Player2Choices;
	
};

class FDialogueConditions;
class FDialogueConcequences

USTRUCT(BlueprintType)
struct FDialogueChoice
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	FName ChoiceID;

	UPROPERTY(EditAnywhere)
	FText ChoiceText;

	UPROPERTY(EditAnywhere)
	FName NextNodeID;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueConditions> Conditions;

	UPROPERTY(EditAnywhere)
	TArray<FDialogueConcequences> Concequences;

};
