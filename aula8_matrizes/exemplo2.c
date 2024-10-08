#include <stdio.h>

int main(){
    /**
     * Declaração e atribuição de uma matriz de inteiros
     * de ordem 4x2. 
     * Observar que a atribuição é feita linha a linha 
     * da matriz.
     */
    int matrix[4][2] = {    {1, 2},
                            {3, 5},
                            {7, 11},
                            {13, 17}    };

    /**
     * A declaração a seguir também é válida, sendo que
     * o compilador dividirá os dados em 4 grupos de
     * 2 elementos, assim, 4x2.
     */
    int matrix[4][2] = {1, 2, 3, 5, 7, 11, 13, 17};

    printf("Valores da matriz: \n");
    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            /**
             * Neste modelo a matriz é percorrida de linha
             * para coluna, ou seja, imprime todas as colunas
             * da primeira linhas e depois repete para as 
             * linhas subsequentes.
             */
            printf("\t%d", matrix[linha][coluna]);
        }
        printf("\n");   // Após terminar a impressão da linha
                        // este printf() pula uma linha no terminal
    }
    return 0;
}
