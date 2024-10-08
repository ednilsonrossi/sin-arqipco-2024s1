#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(){
    
    /**
     * Única opção para "atribuir" uma string a uma
     * variável é no momento de declarar a string, que
     * declara a variável com o espaço necessário para
     * o texto que está sendo atribuído.
     */
    char text[] = "Praticante de XGH!";
    printf("Texto: %s\nTamanho: %d\n", text, strlen(text));

    char string[64];        // declara a string com até 64 caracteres

    // Não existe atribuição de strings.
    strcpy(string, "Programação estruturada.");
    printf("Texto: %s\nTamanho: %d\n", string, strlen(string));

    char fulano1[] = "Dennis Ritchie";
    char fulano2[] = "Ken Thompson";
    char fulano3[] = "dennis ritchie";

    puts("--------");
    if (strcmp(fulano1, fulano2) == 0) {
        printf("É o mesmo fulano\n");
    } else if (strcmp(fulano1, fulano2) < 0){
        puts(fulano1);
        puts(fulano2);
    } else {
        puts(fulano2);
        puts(fulano1);
    }

    puts("--------");
    if (strcmp(fulano1, fulano3) == 0) {
        printf("É o mesmo fulano\n");
    } else if (strcmp(fulano1, fulano3) < 0){
        puts(fulano1);
        puts(fulano3);
    } else {
        puts(fulano3);
        puts(fulano1);
    }

    puts("--------");
    if (strcasecmp(fulano1, fulano3) == 0) {
        printf("É o mesmo fulano\n");
    } else if (strcasecmp(fulano1, fulano3) < 0){
        puts(fulano1);
        puts(fulano3);
    } else {
        puts(fulano3);
        puts(fulano1);
    }

    puts("--------");
    char name[] = "Ada";
    char last_name[] =  " Lovelace";
    strcat(name, last_name);
    puts(name);

    return 0;
}
