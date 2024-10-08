#include <stdio.h>

// Função para converter o valor em uma cor de terminal correspondente
void print_pixel(int valor) {
    printf("\033[48;5;%dm  \033[0m", valor);
    /*
    if (valor < 51) {
        printf("\033[48;5;232m  \033[0m");  // Preto
    } else if (valor < 102) {
        printf("\033[48;5;235m  \033[0m");  // Cinza Escuro
    } else if (valor < 153) {
        printf("\033[48;5;240m  \033[0m");  // Cinza Médio
    } else if (valor < 204) {
        printf("\033[48;5;245m  \033[0m");  // Cinza Claro
    } else {
        printf("\033[48;5;255m  \033[0m");  // Branco
    }
    */
}

void print_matriz(int matriz[20][20]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            print_pixel(matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int imagem[20][20] = {
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100},
        {100, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 150, 100},
        {100, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 150, 100},
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100} 
    };

    print_matriz(imagem);

    return 0;
}