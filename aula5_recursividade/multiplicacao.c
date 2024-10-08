#include <stdio.h>

int multiplicacao(int a, int b);

int main() {
    int a = 3;
    int b = 4;

    printf("%d x %d = %d\n\n", a, b, multiplicacao(a, b));
    return 0;
}


int multiplicacao(int a, int b){
    // Caso base
    if(b == 1){
        return a;
    }
    return a + multiplicacao(a, b - 1);
}