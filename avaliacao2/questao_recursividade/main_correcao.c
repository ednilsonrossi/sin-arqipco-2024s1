#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXIMO 300

int find(int array[], int tamanho, int chave){
    if (tamanho == 0){
        // CASO BASE
        return -1;
    }
    int index = tamanho - 1;

    if (array[index] == chave) {
        return index;
    } else {
        return find(array, index, chave);
    }
}

void carregar_array(int array[], int tamanho){
    srand( (unsigned) time(NULL) );
    for (int i = 0; i < tamanho; i++){
        array[i] = rand() % 1000;
    }
}

int main(){
    int vetor[MAXIMO];
    carregar_array(vetor, MAXIMO);
    int posicao = find(vetor, MAXIMO, 42);
    if (posicao == -1) {
        printf("Valor não encontrado.\n");
    } else {
        printf("Chave %d localizada na posição %d.\n", vetor[posicao], posicao);
    }
    return 0;
}
