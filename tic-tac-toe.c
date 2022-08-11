#include <stdio.h>

int threeAcross() {
    return 0;
}

int threeDown() {
    return 0;
}

int threeDiagonal() {
    return 0;
}

int isFilled(char positionValue) {
    return 0;
}

void printBoard(char board[3][3]) {
    printf("Current board:\n");
    
    for (int r = 0; r < 3; r++) {
        char row[3] = {};
        
        for (int c = 0; c < 3; c++) {
            row[c] = board[r][c];
        }

        printf("%c %c %c\n", row[0], row[1], row[2]);
    }
    
    return;
}

int main() {
    printf("Welcome to tic-tac-toe!\n");
    char board[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}}; // rows x columns
    printBoard(board);

    printf("Enter X to go first or O to go second.\n");
    char playerChar = getchar();
    printf("You picked %c", playerChar);
    
    char computerChar;
    int playerTurn;
    if (playerChar == 'X' || playerChar == 'x') {
        computerChar = 'O';
        playerTurn = 1;
    }
    else if (playerChar == 'O' || playerChar == 'o'){
        computerChar = 'X';
        playerTurn = 0;
    }
    else {
        printf("Invalid entry. Enter X or O.");
        return 1;
    }
    
    return 0;
}

//TODO: player select X (first) or O (second), player turn, computer turn, check if move valid, check if game over