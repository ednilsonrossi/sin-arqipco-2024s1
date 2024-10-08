#include <stdio.h>
#include <ctype.h>
#define SIZE 90
#define KEY 7

char cifra(char ch, int deslocamento);
char decifra(char ch, int deslocamento);
void cifrar(char origem[], char destino[], int tamanho);
void decifrar(char origem[], char destino[], int tamanho);

int main(){

    char mensagem1[SIZE] = "Prova de IPCO será dia 9 de setembro! Estude toda a matéria! Te espero em INOO e/ou EDA.";
    char mensagem[SIZE];
    char criptografia[SIZE] = "Wyvch kl PWJV zlyá kph 9 kl zlaltiyv! Lzabkl avkh h thaéyph! Al lzwlyv lt PUVV l/vb LKH.";

    cifrar(mensagem1, criptografia, SIZE);
    puts(mensagem1);
    puts(criptografia);

    decifrar(criptografia, mensagem, SIZE);
    puts(criptografia);
    puts(mensagem);


    
    return 0;
}

void cifrar(char origem[], char destino[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        destino[i] = cifra(origem[i], KEY);
    }
}

void decifrar(char origem[], char destino[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        destino[i] = decifra(origem[i], KEY);
    }
}

char decifra(char ch, int deslocamento){
    char ch_result;
    if (ch >= 'A' && ch <= 'Z') {
        ch_result = (ch - 'A' - deslocamento + 26) % 26 + 'A';
    } else if (ch >= 'a' && ch <= 'z') {
        ch_result = (ch - 'a' - deslocamento + 26) % 26 + 'a';
    } else {
        ch_result = ch;
    }
    return ch_result;
}

char cifra(char ch, int deslocamento){
    char ch_result;
    if (ch >= 'A' && ch <= 'Z') {
        ch_result = (ch - 'A' + deslocamento) % 26 + 'A';
    } else if (ch >= 'a' && ch <= 'z') {
        ch_result = (ch - 'a' + deslocamento) % 26 + 'a';
    } else {
        ch_result = ch;
    }
    return ch_result;
}