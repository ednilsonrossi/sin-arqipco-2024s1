#include <stdio.h>

void foo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (arr[i] * 2) - (i % 2);
    }
}

int main() {
    int array[4] = {3, 6, 9, 12};
    int tamanho = 4;
    
    foo(array, tamanho);
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
