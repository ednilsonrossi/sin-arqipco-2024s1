#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXIMO 300

int find(int array[], int tamanho, int chave){
    // TODO: implementar essa função.
    if (tamanho == 0){
        return -1;
    }
    
    if (array[tamanho - 1] == chave) {
        return tamanho - 1;
    } else {
        return find(array, tamanho - 1, chave);
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
