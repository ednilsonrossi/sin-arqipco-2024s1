#include <stdio.h>
#include <stdbool.h>

int main(){
    char letra;
    bool eh_vogal;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    eh_vogal = false;
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            eh_vogal = true;
    }

    if(eh_vogal){
        printf("%c é uma vogal\n", letra);
    } else {
        printf("%c é uma consoante\n", letra);
    }
    return 0;
}
