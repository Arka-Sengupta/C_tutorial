#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to get computer's choice
void getComputerChoice(char* choice) {
    int num = (rand() % 3) + 1;  // Generates 1 to 3
    switch (num) {
        case 1:
            strcpy(choice, "rock");
            break;
        case 2:
            strcpy(choice, "paper");
            break;
        case 3:
            strcpy(choice, "scissor");
            break;
    }
}

// Function to convert input to lowercase
void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

int main() {
    int rounds = 0;
    int PlayerScore = 0;
    int ComputerScore = 0;
    char PlayerChoice[50];
    char ComputerChoice[50];

    printf("How many rounds you want to play: ");
    scanf("%d", &rounds);
    getchar();  // To consume the newline left by scanf

    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < rounds; i++) {
        printf("\nRound %d\n", i + 1);
        printf("Enter your choice (rock/paper/scissor): ");
        fgets(PlayerChoice, sizeof(PlayerChoice), stdin);
        PlayerChoice[strcspn(PlayerChoice, "\n")] = 0; // Remove newline
        toLowerCase(PlayerChoice);

        getComputerChoice(ComputerChoice);
        printf("Computer chooses: %s\n", ComputerChoice);

        if (strcmp(PlayerChoice, ComputerChoice) == 0) {
            printf("It's a tie!\n");
        } else if (
            (strcmp(PlayerChoice, "rock") == 0 && strcmp(ComputerChoice, "scissor") == 0) ||
            (strcmp(PlayerChoice, "paper") == 0 && strcmp(ComputerChoice, "rock") == 0) ||
            (strcmp(PlayerChoice, "scissor") == 0 && strcmp(ComputerChoice, "paper") == 0)
        ) {
            printf("You win this round!\n");
            PlayerScore++;
        } else {
            printf("Computer wins this round!\n");
            ComputerScore++;
        }

        printf("Current Score - You: %d, Computer: %d\n", PlayerScore, ComputerScore);
    }

    printf("\nFinal Score - You: %d, Computer: %d\n", PlayerScore, ComputerScore);
    if (PlayerScore > ComputerScore) {
        printf("Congratulations! You won the game!\n");
    } else if (PlayerScore < ComputerScore) {
        printf("Computer wins the game! Better luck next time.\n");
    } else {
        printf("It's a tie overall!\n");
    }

    return 0;
}
