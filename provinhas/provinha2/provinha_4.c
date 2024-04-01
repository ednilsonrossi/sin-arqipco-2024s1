#include <stdio.h>

int main(int argc, char const *argv[]){

    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1fº Celsius equivalem a %.1fº Fahrenheit.\n", celsius, fahrenheit);
    
    return 0;
}
