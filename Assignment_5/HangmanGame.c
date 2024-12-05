#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayWord(char word[], int guessed[], int wordLength) {
    for (int i = 0; i < wordLength; i++) {
        if (guessed[i] == 1) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char word[] = "PROGRAM"; 
    int wordLength = strlen(word);
    int guessed[wordLength]; 
    memset(guessed, 0, sizeof(guessed));
    
    int remainingAttempts = 3; 
    int lettersLeft = wordLength; 
    char guess;

    printf("Welcome to Hangman!\n");
    printf("Guess the word:\n");

    while (remainingAttempts > 0 && lettersLeft > 0) {
        displayWord(word, guessed, wordLength); 
        printf("Remaining attempts: %d\n", remainingAttempts);
        printf("Enter your guess (a single letter): ");

        if (scanf(" %c", &guess) != 1) { 
            printf("Invalid input. Please enter a single letter.\n");
            while (getchar() != '\n'); 
            continue;
        }

        guess = toupper(guess); 

        int correctGuess = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && guessed[i] == 0) { /
                guessed[i] = 1;
                lettersLeft--;
                correctGuess = 1;
            }
        }

        if (!correctGuess) {
            printf("Wrong guess!\n");
            remainingAttempts--;
        } else {
            printf("Correct guess!\n");
        }
    }

    if (lettersLeft == 0) {
        printf("Congratulations! You've guessed the word: %s\n", word);
    } else {
        printf("Game over! The correct word was: %s\n", word);
    }

    return 0;
}
