#pragma once

#include "CoreMinimal.h"
#include "ConversationTypes.generated.h"

UENUM(BlueprintType)
enum class ESpeaker : uint8
{
    NPC UMETA(DisplayName = "NPC"),
    Player1 UMETA(DisplayName = "Player 1"),
    Player2 UMETA(DisplayName = "Player 2"),
	Waiting UMETA(DisplayName = "Waiting")
};

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
    TArray<FDialogueChoice> StarChoices;

    UPROPERTY(EditAnywhere)
    TArray<FDialogueChoice> ButterbeanChoices;
};