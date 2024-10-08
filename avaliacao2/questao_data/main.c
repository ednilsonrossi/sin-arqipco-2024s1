#include <stdio.h>
#include <math.h>

struct data{
    int dia, mes, ano;
};

typedef struct data T_Data;

int periodo_em_dias(T_Data start, T_Data finish){
    // TODO: implementar essa função.
    int inicio, fim;

    inicio = start.ano * 360 + start.mes * 30 + start.dia;
    fim = finish.ano * 360 + finish.mes * 30 + finish.dia;

    return fim - inicio;
}

int main(){
    T_Data inicio, fim;

    inicio.dia = 26;
    inicio.mes = 2;
    inicio.ano = 2024;

    fim.dia = 9;
    fim.mes = 9;
    fim.ano = 2024;

    int intervalo = periodo_em_dias(inicio, fim);
    printf("Intervalo entre as datas é de %d dias.\n", intervalo);

    return 0;
}
