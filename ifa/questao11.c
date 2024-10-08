#include <stdio.h>

int foo(int arr[], int tamanho) {
    int variavel = 0;
    for (int i = 0; i < tamanho; i++) {
        variavel += arr[++i];
    }
    return variavel;
}

int main() {
    int numeros[] = {2, 4, 6, 8};
    int total = foo(numeros, 4);
    printf("O resultado é: %d\n", total);
    return 0;
}