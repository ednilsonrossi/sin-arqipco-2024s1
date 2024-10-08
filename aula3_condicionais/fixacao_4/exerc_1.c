#include <stdio.h>

int eh_par(int argumento);
float media_pares(int arg_1, int arg_2, int arg_3, int arg_4);

int main(){

    int a, b, c, d;

    printf("Digite os 4 números: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    printf("Média dos pares: %.2f\n", media_pares(a, b, c, d));

   return 0; 
}

int eh_par(int argumento){
        
    return argumento % 2 == 0;

}

float media_pares(int arg_1, int arg_2, int arg_3, int arg_4){
    int soma, conta;
    float media;

    soma = 0;
    conta = 0;

    if(eh_par(arg_1) == 1){
        soma = soma + arg_1;
        conta = conta + 1;
    }

    if(eh_par(arg_2) == 1){
        soma = soma + arg_2;
        conta = conta + 1;
    }

    if(eh_par(arg_3) == 1){
        soma = soma + arg_3;
        conta = conta + 1;
    }

    if(eh_par(arg_4) == 1){
        soma = soma + arg_4;
        conta = conta + 1;
    }

    if(conta == 0){
        printf("ERRO: Nenhum valor par foi digitado.\n");
        media = 0;
    }else{
        media = soma / (conta * 1.0);
    }

    return media;
}