#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

void read_matrix(int matrix[ROWS][COLUMNS], int rows, int columns);
void print_matrix(int matrix[ROWS][COLUMNS], int rows, int columns);

int main(){
    int matrix[ROWS][COLUMNS];
    read_matrix(matrix, 3, 4);
    print_matrix(matrix, 3, 4);
    return 0;
}

void read_matrix(int matrix[ROWS][COLUMNS], int rows, int columns){
    for(int i = 0; i < rows; i++){
        printf("Digite dados da linha %d:\n");
        for(int j = 0; j < columns; j++){
            printf("\t[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int mat[ROWS][COLUMNS], int lines, int columns){
    printf("Matriz:\n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%3d\t", mat[i][j]);
        }
        printf("\n");
    }
}