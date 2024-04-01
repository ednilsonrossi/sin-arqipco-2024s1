#include <stdio.h>

int main(){
    
    float distancia;
    float tempo;

    printf("Informe a distância em quilometros entre os carros X e Y: \n");
    scanf("%f", &distancia);

    /*
     * 30 é referente a distância em quilometros que o carro Y se distancia
     * do carro X em 1 hora.
     * 
     * tempo = distancia / 30
     * 
     **/
    tempo = distancia / 30;

    tempo = tempo * 60;

    printf("Serão necessários %.1f minutos para que a distancia entre os carros seja de %.1f Km.\n", tempo, distancia);

    return 0;
}
