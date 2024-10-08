#include <stdio.h>
#include <stdbool.h>


int main(){

    bool aa = false;
    bool bb = false;

    int n, ligth_switch;
    do{
        printf("Quantidade de cliques no interruptor: ");
        scanf("%d", &n);
    }while(n < 2);

    for(int i = 0; i < n; i++){
        do{
            printf("Interruptor (1 ou 2): ");
            scanf("%d", &ligth_switch);
        }while(ligth_switch < 1 && ligth_switch > 2);

        if (ligth_switch == 1) {
            aa = !aa;
        } else {
            aa = !aa;
            bb = !bb;
        }
    }

    printf("Lampada AA: %s\n", aa ? "Acesa" : "Apagada");
    printf("Lampada BB: %s\n", bb ? "Acesa" : "Apagada");

    return 0;
}
