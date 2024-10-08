#include <stdio.h>

float calcula_media(float arg_1, float arg_2, float arg_3, float arg_4, float arg_5);
void imprime_resultado(float param);

int main(){
    
    float n1, n2, n3, n4, n5;
    float media;

    printf("Digite as 5 notas: \n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    media = calcula_media(n1, n2, n3, n4, n5);

    imprime_resultado(media);

    return 0;
}

void imprime_resultado(float param){

    if(param < 5){
        printf("REPROVADO\n");
    }
    else
    {
        if(param >= 7){
            printf("APROVADO\n");
        }
        else
        {
            printf("RECUPERAÇÃO\n");
        }
    }

}

float calcula_media(float arg_1, float arg_2, float arg_3, float arg_4, float arg_5){
    float soma, media;

    soma = arg_1 + arg_2 + arg_3 + arg_4 + arg_5;

    media = soma / 5;

    return media;
}