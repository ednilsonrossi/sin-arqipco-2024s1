#include <stdio.h>

int main(){
    
    int displacement;
    int position = 0;

    printf("Digite deslocamentos em cm:\n");
    do{
        scanf("%d", & displacement);

        position += displacement;
    } while (position >= -100 && position <= 100);

    if (position >= 100){
        printf("Equipe Vermelha é vencedora.\n");
    } else {
        printf("Equipe Verde é vencedora.\n");
    }

    return 0;
}
