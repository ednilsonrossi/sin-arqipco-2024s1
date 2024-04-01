#include <stdio.h>

int digito_verificador(int numero);
int numero_quatro_algarismos(int numero);

int main(int argc, char const *argv[])
{
    int input;

    printf("Digite número de 3 digitos: \n");
    scanf("%d", input);

    printf("Novo número: %d\n", numero_quatro_algarismos(input));

    return 0;
}


int numero_quatro_algarismos(int numero){
    int digito;

    digito = digito_verificador(numero);

    numero = numero * 10;

    numero = numero + digito;

    return numero;
}

int digito_verificador(int numero){
    int unidade, dezena, centena;
    int digito;

    centena = numero / 100;
    numero = numero % 100;

    dezena = numero / 10;
    unidade = numero % 10;

    digito = centena + dezena * 3 + unidade * 5;
    digito = digito % 7;

    return digito;
}