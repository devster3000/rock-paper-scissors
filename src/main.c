#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* userNumber() {
    int user_choice;
    printf("\nChoose:\n1. Rock\n2. Paper\n3. Scissors\n>>> ");
    scanf("%d", &user_choice);

    switch(user_choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Rock";
    }
}

char* computerNumber() {
    srand(time(0));
    int computer_choice = rand() % 3 + 1;

    switch(computer_choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
    }
    return "Rock"; // fallback
}

void algorithm(char* user_choice, char* computer_choice) {
    if (strcmp(user_choice, computer_choice) == 0)
        printf("No winner. Both chose %s.\n", user_choice);
    else if ((strcmp(user_choice, "Rock") == 0 && strcmp(computer_choice, "Scissors") == 0) ||
             (strcmp(user_choice, "Paper") == 0 && strcmp(computer_choice, "Rock") == 0) ||
             (strcmp(user_choice, "Scissors") == 0 && strcmp(computer_choice, "Paper") == 0))
        printf("Player wins! %s beats %s.\n", user_choice, computer_choice);
    else
        printf("Computer wins! %s beats %s.\n", computer_choice, user_choice);
}

int main() {
    int choice;
    printf("Welcome to Rock Paper Scissors!\n");
    while(1){
        printf("\n1. Play\n2. Exit\n>>> ");
        scanf("%d", &choice);

        if(choice == 2) break;

        char* user_choice = userNumber();
        char* computer_choice = computerNumber();
        printf("Computer chooses %s\n", computer_choice);
        algorithm(user_choice, computer_choice);
    }
    return 0;
}