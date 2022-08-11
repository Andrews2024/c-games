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
    return;
}

void main() {
    printf("Welcome to tic-tac-toe!");
    char board[3][3] = {{'0', '0', '0'}, {'0', '0', '0'}, {'0', '0', '0'}}; // rows x columns
    return;
}

//TODO: Print board, player select X (first) or O (second), player turn, computer turn, check if move valid, check if game over