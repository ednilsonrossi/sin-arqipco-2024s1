#include <stdio.h>

int main(int argc, char const *argv[]){
    int idade, ano_atual;

    printf("Digite idade: ");
    scanf("%d", &idade);
    printf("Digite ano atual: ");
    scanf("%d", &ano_atual);

    printf("Em %d você terá %d anos.\n", ano_atual + 10, idade + 10);
    return 0;
}
