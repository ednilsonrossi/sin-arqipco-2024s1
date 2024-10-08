#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

int main(){
    
    int matrix[ROWS][COLUMNS];

    for(int i = 0; i < ROWS; i++){
        printf("Digite dados da linha %d:\n");
        for(int j = 0; j < COLUMNS; j++){
            printf("\t[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Dados digitados: \n");
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            printf("\t%3d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}