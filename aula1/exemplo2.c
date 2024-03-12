#include <stdio.h>

int main(){
    int number1, number2, sum;

    printf("Digite o primeiro valor: ");
    scanf("%d", &number1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("Resultado: %d + %d = %d", number1, number2, sum);

    return 0;
}
