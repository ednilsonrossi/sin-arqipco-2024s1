/*
ENUNCIADO:
Escrever um programa que lê o público total de futebol e forneça a renda do jogo, sabendo-se que havia 4 
tipos de ingressos assim distribuídos: popular - 10% a R$ 1,00, geral - 50% a R$ 5,00, 
arquibancada - 30% a R$ 10,00 e cadeiras - 10% a R$ 20,00.
*/

#include <stdio.h>

float calcula_renda(int ingresso, int porcent, float valor);


int main(int argc, char const *argv[])
{
    int ingressos;
    float popular, geral, arquibancada, cadeiras, renda;

    funcao2();
    printf("Informe quantidade de ingressos: ");
    scanf("%d", &ingressos);

    //ingresso popular
    popular = calcula_renda(ingressos, 10, 1.0);

    //ingresso geral
    geral = calcula_renda(ingressos, 50, 5.0);

    //ingresso arquibancada
    arquibancada = calcula_renda(ingressos, 30, 10.0);

    //ingresso cadeira
    cadeiras = calcula_renda(ingressos, 10, 2.0);

    renda = popular + geral + arquibancada + cadeiras;

    printf("RENDA DO JOGO: %.2f\n\n", renda);

    return 0;
}

float calcula_renda(int ingresso, int porcent, float valor){
    return (ingresso * porcent / 100) * valor;
}