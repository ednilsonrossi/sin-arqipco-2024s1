#include <stdio.h>

int main() {
    
    int matriz[5][3];

    // Leitura da quantidade em cada armazem de cada produto.
    for (int armazem = 0; armazem < 4; armazem += 1) {
        for (int produto = 0; produto < 3; produto += 1) {
            printf("Armazém %d - Produto %d: ", armazem, produto);
            scanf("%d", &matriz[armazem][produto]);
        }
    }

    // Leitura do preço de cada produto
    for (int produto = 0; produto < 3; produto++) {
        printf("Preço do produto %d: ", produto);
        scanf("%d", &matriz[4][produto]);
    }

    // Quantidade de produtos em cada armazém
    for (int armazem = 0; armazem < 4; armazem++) {
        int soma = 0;
        for (int produto = 0; produto < 3; produto++) {
            soma += matriz[armazem][produto];
        }
        printf("Armazém %d comtém %d produtos\n", armazem, soma);
    }

    // Armazém com maior estoque do produto 2
    int armazem_maximo = 0;     // O zero representa a posição do armazém
    for (int armazem = 1; armazem < 4; armazem++) {
        if (matriz[armazem][1] > matriz[armazem_maximo][1]) {
            armazem_maximo = armazem;
        }
    }
    printf("Armazém %d contém a maior quantidade de produtos 2.\n", armazem_maximo);

    int armazem_minimo = 0;
    int produto_minimo = 0;
    for (int armazem = 0; armazem < 4; armazem += 1) {
        for (int produto = 0; produto < 3; produto += 1) {
            if (matriz[armazem][produto] < matriz[armazem_minimo][produto_minimo]){
                armazem_minimo = armazem;
                produto_minimo = produto;
            }
        }
    }
    printf("O menor estoque é do produto %d no armazém %d.\n", produto_minimo, armazem_minimo);

    // Custo total de cada produto
    for (int produto = 0; produto < 3; produto += 1) {
        int soma = 0;
        for (int armazem = 0; armazem < 4; armazem += 1) {
            soma += matriz[armazem][produto];
        }
        soma = soma * matriz[4][produto];
        printf("Custo total do produto %d = %d\n", produto, soma);
    }

    // Custo total de cada armazém
    for (int armazem = 0; armazem < 4; armazem ++) {
        int soma = 0;
        for (int produto = 0; produto < 3; produto ++) {
            soma += matriz[armazem][produto] * matriz[4][produto];
        }
        printf("Custo do armazém %d = %d\n", armazem, soma);
    }

    return 0;
}
