#include <stdio.h>

int main(){
    
    for(char letra = 'A'; letra <= 'z'; letra += 1){
        printf("Letra: %c \tCódigo ASCII: %d\n", letra, letra);
        
    }
    
    return 0;
}
