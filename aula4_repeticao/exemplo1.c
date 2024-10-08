#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random(int limit);


int main(int argc, char const *argv[]){
    
    int low_border = 1;     // borda inferior do intervalo
    int high_border;        // borda superior do intervalo
    int lucky_number;       // número da sorte
    int attempts;           // quantidade de tentativas
    int chose;              // número escolhido pelo jogador

    /**
     * Leitura da borda superior do intervalo para o jogo.
     */
    high_border = 0;
    while(high_border <= low_border){
        printf("Informe o valor máximo do intervalo: ");
        scanf("%d", &high_border);
    }


    /**
     * Sorteio do número da sorte.
     */
    lucky_number = generate_random(high_border);


    attempts = 0;
    while(c)

    return 0;
}


int generate_random(int limit){
    int random_number;

    srand(time(0));         // Define que a semente (seed) do
                            // aleatório é o momento atual no 
                            // computador local.
    
    random_number = (rand() % limit) + 1;
                            // rand() gera um valor aleatório
                            // e divide-se pelo limit que retorna
                            // um valor entre 0 e limit-1, então
                            // soma-se 1 para que o valor gerado 
                            // seja entre 1 e o limit.

    return random_number;
}