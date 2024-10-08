#include <stdio.h>
#define ROWS 4
#define COLUMNS 5

int main(){
    int mat[ROWS][COLUMNS] = {  1,  2,  3,  4, 5, 
                                0, -1,  0, -3, 1,
                                2, -2, -2,  2, 0,
                                0,  0,  6,  0, 0  };
    // Declaração de vetor para armazenar a soma.
    int row_sum[ROWS];
    int total;      // soma total de todos elementos da matriz

    total = 0;
    for(int i = 0; i < ROWS; i++){
        // Inicializa a soma da linha com zero
        row_sum[i] = 0;

        // Somando os elementos da linha em row_sum[i]
        for(int j = 0; j < COLUMNS; j++){
            row_sum[i] += mat[i][j];
        }

        // Atualiza a soma total com a soma da linha
        total += row_sum[i];
    }

    printf("Soma total: %d\n", total);
    for(int i = 0; i < ROWS; i++){
        printf("Linha: %d - Soma: %d\n", i, row_sum[i]);
    }
    return 0;
}
