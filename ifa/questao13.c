#include <stdio.h>
#define MAX 100

void moda(int dados[], int tamanho){
    int frequencia[10] = {0};
    int i, pMaior;

    for(i = 0; i < tamanho; i++){
        frequencia[dados[i]] += 1;
    }

    pMaior = 0;
    for(i = 1; i < 10; i++){
        if(frequencia[i] > frequencia[pMaior]){
            pMaior = i;
        }
    }

    printf("A moda é %d, que ocorreu %d vezes.\n\n", pMaior, frequencia[pMaior]);

}

int main(){

    int resposta[MAX] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                         7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                         6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                         7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                         4, 5, 6, 1, 6, 5, 7, 8, 7, 7};

    moda(resposta, MAX);
    return 0;
}