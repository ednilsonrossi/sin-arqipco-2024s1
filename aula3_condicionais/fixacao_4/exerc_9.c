#include <stdio.h>

float funcao(float arg);

int main(){
    
    printf("%.2f \t %.2f\n", 8.0, funcao(8));
    printf("%.2f \t %.2f\n", -2.0, funcao(-2));
    printf("%.2f \t %.2f\n", 0.0, funcao(0));

    return 0;
}


float funcao(float arg){
    return arg >= 0 ? arg * 2 : arg * 3;
}

