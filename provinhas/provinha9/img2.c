#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

// Funções auxiliares
void printBoard(int board[SIZE][SIZE]);
int checkWinner(int board[SIZE][SIZE]);
int isFull(int board[SIZE][SIZE]);
int makeMove(int board[SIZE][SIZE], int player, int row, int col);
void computerMove(int board[SIZE][SIZE]);
int canWin(int board[SIZE][SIZE], int player);
int blockOpponent(int board[SIZE][SIZE]);

int main() {
    int board[SIZE][SIZE] = {0}; // Tabuleiro inicializado com 0 (vazio)
    int row, col, winner = 0, turn = 1;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    while (winner == 0 && !isFull(board)) {
        printBoard(board);
        if (turn == 1) { // Jogada do humano
            printf("Digite a linha e a coluna (0-2) para a sua jogada: ");
            scanf("%d %d", &row, &col);
            if (!makeMove(board, 1, row, col)) {
                printf("Movimento inválido. Tente novamente.\n");
                continue;
            }
            turn = -1; // Muda para a vez do computador
        } else { // Jogada do computador
            computerMove(board);
            turn = 1; // Muda para a vez do humano
        }
        winner = checkWinner(board);
    }

    printBoard(board);
    if (winner == 1) {
        printf("Você venceu!\n");
    } else if (winner == -1) {
        printf("O computador venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            char c;
            if (board[i][j] == 1) c = 'X';
            else if (board[i][j] == -1) c = 'O';
            else c = '.';
            printf("%c ", c);
        }
        printf("\n");
    }
}

int checkWinner(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        // Checa linhas e colunas
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0)
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0)
            return board[0][i];
    }
    // Checa diagonais
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0)
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0)
        return board[0][2];
    return 0;
}

int isFull(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == 0)
                return 0; // Há casas vazias
    return 1; // O tabuleiro está cheio
}

int makeMove(int board[SIZE][SIZE], int player, int row, int col) {
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == 0) {
        board[row][col] = player;
        return 1;
    }
    return 0;
}

void computerMove(int board[SIZE][SIZE]) {
    if (canWin(board, -1)) return;
    if (blockOpponent(board)) return;

    // Escolhe uma posição vazia aleatória
    int row, col;
    do {
        row = rand() % SIZE;
        col = rand() % SIZE;
    } while (board[row][col] != 0);
    board[row][col] = -1;
}

int canWin(int board[SIZE][SIZE], int player) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                board[i][j] = player;
                if (checkWinner(board) == player) {
                    return 1;
                }
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int blockOpponent(int board[SIZE][SIZE]) {
    return canWin(board, 1);
}

