#include <stdio.h>

// Function prototypes
void displayBoard(char board[3][3]);
int checkWin(char board[3][3]);
int isDraw(char board[3][3]);

int main() {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int currentPlayer = 1; // Player 1 starts
    int choice;
    char mark;
    int gameStatus = 0; // 0: ongoing, 1: win, 2: draw

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");

    // Main game loop
    while (gameStatus == 0) {
        displayBoard(board);

        // Set the current player's mark
        mark = (currentPlayer == 1) ? 'X' : 'O';

        // Get player's move
        printf("Player %d, enter your move (1-9): ", currentPlayer);
        scanf("%d", &choice);

        // Update the board based on the player's choice
        int validMove = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '0' + choice) {
                    board[i][j] = mark;
                    validMove = 1;
                    break;
                }
            }
            if (validMove) break;
        }

        if (!validMove) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Check if the game is won or a draw
        gameStatus = checkWin(board);
        if (gameStatus == 0 && isDraw(board)) {
            gameStatus = 2;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    displayBoard(board);

    // Display the result
    if (gameStatus == 1) {
        printf("Player %d wins!\n", (currentPlayer == 1) ? 2 : 1);
    } else if (gameStatus == 2) {
        printf("It's a draw!\n");
    }

    return 0;
}

// Function to display the current state of the board
void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check if a player has won
int checkWin(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0; // No winner
}

// Function to check if the game is a draw
int isDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] >= '1' && board[i][j] <= '9') return 0; // Empty space found
        }
    }
    return 1; // No empty spaces left, it's a draw
}
