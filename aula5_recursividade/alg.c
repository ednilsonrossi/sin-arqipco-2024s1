#include <stdio.h>

int algoritmo(int a, int b);

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d\n\n", algoritmo(n1, n2));
    return 0;
}

int algoritmo(int a, int b) {
    if ( b == 0) {
        return a;
    } else {
        return algoritmo(b, a % b);
    }
}