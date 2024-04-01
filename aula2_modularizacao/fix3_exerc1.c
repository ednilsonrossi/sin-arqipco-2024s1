#include <stdio.h>

/* ASSINATURAS DE FUNÇÕES */
int antecessor(int n);
int sucessor(int a);

int main(){

    int number;
    int duplo_antecessor, ante;

    printf("Informe número: \n");
    scanf("%d", &number);

    ante = antecessor(number);
    duplo_antecessor = antecessor(ante);

    printf("Lista: \n%d, %d, %d, %d, %d\n", 
        antecessor(antecessor(number)), 
        antecessor(number),
        number,
        sucessor(number),
        sucessor(sucessor(number))
    );
    
    return 0;
}

int antecessor(int n){
    n = n - 1;
    return n;
}

int sucessor(int a){
    int x;
    x = a + 1;
    return x;
}