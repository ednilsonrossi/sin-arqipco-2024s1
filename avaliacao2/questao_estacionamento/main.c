#include <stdio.h>
#include <stdbool.h>

#define NRO_VAGAS 3

/**
 * Definição da struct qure representa o estacionamento.
 */
struct estacionamento{
    int vetor[NRO_VAGAS];   // Array para as placas.
    int qtdade;             // Quantidade de carros no
                            // estacionamento.
};

/**
 * Criação do tipo de dado T_Estacionamento que representa
 * de forma simplificada a struct estacionamento.
 */
typedef struct estacionamento  T_Estacionamento;

/**
 * Cria o estacionamento e inicializa os dados
 * iniciais de forma adequada.
 */
T_Estacionamento criaEstacionamento(){
    T_Estacionamento variavel;
    /**
     * O projeto define que o estacionamento vazio
     * é o que possui -1 carros estacionados.
     */
    variavel.qtdade = -1;
    return variavel;
}

/**
 * Informa se o estacionamento está cheio (true) ou
 * não está cheio (false).
 */
bool estaCheio(T_Estacionamento garagem){
    /**
     * Considerando que a quantidade máxima de carros
     * é definida na constante NRO_VAGAS, sabe-se que
     * a variável de controle não pode superar as 
     * posições do array, assim o estacionamento 
     * está cheio quando a quantidade de carros
     * estacionados for igual ao NRO_VAGAS - 1.
     */
    return garagem.qtdade == NRO_VAGAS - 1;
}

/**
 * Apresenta todos os carros estacionados na ordem da
 * fila.
 */
void mostraEstacionamento(T_Estacionamento garagem){
    int i;
    printf("\nCarros estacionados: ");
    if( garagem.qtdade > -1 ) {
        for (i = 0; i < garagem.qtdade; i++) {
            printf("%d - ", garagem.vetor[i]);
        }
        printf("%d", garagem.vetor[i]);
    }
}


/**
 * Insere, caso seja possível, um novo carro no estacionamento,
 * considerando que a entrada é sempre realizada pelo mesmo lado
 * do estacionamento. O novo carro entra no final da fila do 
 * estacionamento.
 */
T_Estacionamento entraCarro(T_Estacionamento garagem, int placa){
    // TODO: implementar essa função.
    if( !estaCheio(garagem) ) {
        garagem.qtdade = garagem.qtdade + 1;
        garagem.vetor[garagem.qtdade] = placa;
        printf("\nENTROU: %d", garagem.vetor[garagem.qtdade]);
    }else{
        printf("\nESTACIONAMENTO CHEIO");
    }
    mostraEstacionamento(garagem);
    return garagem;
}

/**
 * Função remove, caso exista, o primeiro carro da fila
 * do estacionamento.
 */
T_Estacionamento saiCarro(T_Estacionamento garagem){
    // TODO: implementar essa função.
    if (garagem.qtdade > -1) {
        printf("\nSAIU: %d", garagem.vetor[0] );
        for(int i = 0; i < garagem.qtdade; i++){
            garagem.vetor[i] = garagem.vetor[i+1];
        }
        garagem.qtdade -= 1;
    }else{
        printf("\nESTACIONAMENTO VAZIO");
    }
    mostraEstacionamento(garagem);
    return garagem;
}

int main() {
    T_Estacionamento garagem;
    garagem = criaEstacionamento();
    garagem = saiCarro(garagem);
    garagem = entraCarro(garagem, 1234);
    garagem = entraCarro(garagem, 2345);
    garagem = entraCarro(garagem, 3456);
    garagem = entraCarro(garagem, 4567);
    garagem = saiCarro(garagem);
    garagem = entraCarro(garagem, 9876);
    garagem = entraCarro(garagem, 8765);
    garagem = saiCarro(garagem);
    garagem = saiCarro(garagem);
    return 0;
}