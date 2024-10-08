#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

void print_matrix(int matrix[ROWS][COLUMNS], int lines, int columns);

int main(){
    
    int matrix[ROWS][COLUMNS];

    for(int i = 0; i < ROWS; i++){
        printf("Digite dados da linha %d:\n");
        for(int j = 0; j < COLUMNS; j++){
            printf("\t[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    print_matrix(matrix, 3, 4);
    return 0;
}

/**
 * Ao passar uma matriz para uma função deve-se utilizar uma matriz
 * de tamanho fixo, ou seja, deve-se informar a quantidade de linhas
 * e colunas existentes na matriz.
 * A passagem de uma matriz como argumento segue o mesmo princípio 
 * da passagem de arrays, assim temos uma passagem de argumento
 * por referência. Alterações na matriz dentro da função alteram
 * a matriz fora do escopo da função.
 */
void print_matrix(int mat[ROWS][COLUMNS], int lines, int columns){
    printf("Matriz:\n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%3d\t", mat[i][j]);
        }
        printf("\n");
    }
}