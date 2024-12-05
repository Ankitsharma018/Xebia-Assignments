#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    // Mapping choices
    char *choices[] = {"Rock", "Paper", "Scissors"};

    // Display choices
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    // Decide the winner
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||  // Rock beats Scissors
               (userChoice == 1 && computerChoice == 0) ||  // Paper beats Rock
               (userChoice == 2 && computerChoice == 1)) {  // Scissors beats Paper
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice, computerChoice;
    
    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose an option:\n");
    printf("0. Rock\n");
    printf("1. Paper\n");
    printf("2. Scissors\n");

    // Get user input
    printf("Enter your choice (0, 1, 2): ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please run the program again and select 0, 1, or 2.\n");
        return 1;  // Exit the program with an error
    }

    // Generate computer's choice (0-2)
    computerChoice = rand() % 3;

    // Determine the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}
