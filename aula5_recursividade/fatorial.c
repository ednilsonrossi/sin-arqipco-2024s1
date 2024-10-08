#include <stdio.h>

int factorial(int n);

int main(){
    int number;

    printf("Digite número: ");
    scanf("%d", &number);

    printf("\n%d! = %d\n\n", number, factorial(number));
    return 0;
}

int factorial(int n){
    // Primeira parte é o teste do caso base.
    if (n == 0) {
        return 1;
    }

    // O caso base não sendo a solução do problema,
    // faz-se a chamada da própria função, contudo,
    // sempre em sentido ao caso base.
    return n * factorial(n - 1);
}