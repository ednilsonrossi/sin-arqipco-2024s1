#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO_ARRAY 5

void preenche_vetor(int arr[], int tamanho) {
    srand( (unsigned) time(NULL) );

    for (int i = 0; i < tamanho; i += 1){
        arr[i] = rand() % 1000;
    }

}

void imprime_vetor(int arr[], int tamanho) {
    printf("Array: [ ");
    for (int i = 0; i < tamanho - 1; i += 1){
        printf("%d, ", arr[i]);
    }
    printf("%d ]\n", arr[tamanho-1]);
}

int exclui_primeiro(int arr[], int tamanho){
    for (int i = 0; i < tamanho - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return tamanho - 1;
}

int main(){
    int vetor[TAMANHO_ARRAY];
    int tamanho_vetor = TAMANHO_ARRAY;

    preenche_vetor(vetor, tamanho_vetor);
    imprime_vetor(vetor, tamanho_vetor);

    tamanho_vetor = exclui_primeiro(vetor, tamanho_vetor);

    imprime_vetor(vetor, tamanho_vetor);


    return 0;
}

