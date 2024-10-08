#include <stdio.h>

int main() {
    /*
     * Declaração de uma matriz de inteiros com
     * 5 linhas e 10 colunas.
     **/
    int matriz_inteiros[5][10];

    /**
     * Declaração de matriz de double com 
     * 3 linhas e 5 colunas. Essa é uma matriz
     * de ordem 3x5 ou seja M(3x5).
     */
    int linhas = 3;     // variável que indica as linhas
    int colunas = 5;    // variável que indica as colunas
                        // poderiam ser uma constante.
    double matriz_double[linhas][colunas];


    /**
     * Acessando posições da matriz, sempre deve-se informar
     * os índices de linha e coluna desejados.
     */

    matriz_inteiros[0][0] = 1;
    matriz_inteiros[0][1] = 10;
    matriz_inteiros[0][2] = 100;

    scanf("%d", &matriz_inteiros[2][5]);

    printf("M[%d][%d]: %d", 3, 3, matriz_inteiros[3][3]);

    for(int linha = 0; linha < 3; linha += 1){
        for(int coluna = 0; coluna < 5; coluna += 1){
            scanf("%f", &matriz_double[linha][coluna]);
        }
    }

    return 0;
}
