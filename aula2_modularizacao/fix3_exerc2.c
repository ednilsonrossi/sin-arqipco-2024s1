#include <stdio.h>

int obtem_dia(int data);
int obtem_mes(int data);
int obtem_ano(int data);

int main(int argc, char const *argv[])
{
    int data_completa;

    printf("Digite data no formato ddmmaaaa: \n");
    scanf("%d", &data_completa);

    printf("%d/%d/%d\n", 
        obtem_dia(data_completa), 
        obtem_mes(data_completa), 
        obtem_ano(data_completa)
    );

    return 0;
}

int obtem_dia(int data){
    int divisor;
    int dia;

    divisor = 1000000;
    dia = data / divisor;

    return dia;
}

int obtem_mes(int data){
    data = data - obtem_dia(data) * 1000000;
    // data = data % 1000000;

    return data / 10000;
}

int obtem_ano(int data){
    return data % 10000;
}