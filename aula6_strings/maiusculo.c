#include <stdio.h>
#include <ctype.h>

void maiusculo(char string[]);

int main(){
    char text[50];

    printf("Digite um texto: \n");
    fgets(text, 50, stdin);

    maiusculo(text);

    printf("Digitado: \n");
    fputs(text, stdout);

    return 0;
}

void maiusculo(char string[]){
    int index = 0;
    while (string[index] != '\0'){
        string[index] = toupper(string[index]);
        index += 1;
    }
}