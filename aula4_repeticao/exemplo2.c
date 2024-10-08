#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int start = 10;     // valor inicial do intervalo, no exemplo 10.
    int finish;         // valor final do intervalo, informado pelo usuário

    finish = 0;         // inicialização com valor inválido para finish.
    while (finish <= start){
        printf("Digite o valor de N: ");
        scanf("%d", &finish);

        if(finish <= start){
            printf("Valor informado para N é inválido, digite um valor maior do que %d.\n", start);
        }
    }
    
    printf("Lista: \n");
    while (start <= finish){
        printf("\t- %d\n", start);
        start += 1;
    }
    
    return 0;
}
