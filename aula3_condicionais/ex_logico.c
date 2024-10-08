#include <stdio.h>

int data_valida(int dia, int mes, int ano);

int main(){
    int d, m, a;

    printf("Digite dia: ");
    scanf("%d", &d);

    printf("Digite mês: ");
    scanf("%d", &m);

    printf("Digite ano: ");
    scanf("%d", &a);

    if(data_valida(d, m, a)){
        printf("A data é válida.\n");
    }else{
        printf("A data é inválida.\n");
    }

    return 0;
}

int data_valida(int dia, int mes, int ano){
    int eh_valida = 0;

    if (dia >= 1 && dia <= 31){
        eh_valida = 1;
    }

    if(eh_valida && (mes < 1 || mes > 12)){
        eh_valida = 0;
    }

    if(eh_valida && ano >= 1900 && ano <= 2100){
        eh_valida = 1;
    }else{
        eh_valida = 0;
    }

    return eh_valida;
}

/*
int data_valida(int dia, int mes, int ano){
    int eh_valida = 0;

    if(dia >= 1){
        if(dia <= 31){
            eh_valida = 1;
        }
    }

    if(eh_valida){
        if(mes < 1){
            eh_valida = 0;
        }
        if (mes > 12){
            eh_valida = 0;
        }
    }

    if(eh_valida){
        eh_valida = 0;
        if(ano >= 1900){
            if(ano < 2100){
                eh_valida = 1;
            }
        }
    }
    return eh_valida;
}
*/