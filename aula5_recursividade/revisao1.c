#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

void maiusculo(char array[], int i){
    if (array[i] == '\0'){
        return;
    }

    array[i] = toupper(array[i]);
    maiusculo(array, i+1);
}

int main(){
    char frase[120];
    strcpy(frase, "Temos que estudar recursividade porque é assunto de prova.\0");

    /*
    int i = 0;
    while(frase[i] != '\0'){
        frase[i] = toupper(frase[i]);
        i++;
    }
    */
    maiusculo(frase, 0);

    puts(frase);
    return 0;
}
