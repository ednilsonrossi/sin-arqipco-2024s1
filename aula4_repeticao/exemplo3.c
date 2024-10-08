#include <stdio.h>

int main(int argc, char const *argv[]){
    int input;          // valor informado pelo usuário
    int sum;            // somatório dos valores informados
    char input_end;     // indica se o usuário quer encerrar a entrada

    sum = 0;            // inicialização do somatório

    input_end = 'n';    // inicialização para tornar a condição de 
                        // parada verdadeira.
                    
    while(input_end != 's' && input_end != 'S'){
        printf("Digite número: ");
        scanf("%d", &input);

        sum += input;   

        printf("Encerrar a leitura (s/n): ");
        scanf(" %c", &input_end);
    }

    printf("Soma dos valores digitados: %d\n", sum);
    return 0;
}
