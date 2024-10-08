#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

#define MAX 1501

int main(){
    clock_t start, end;
    double cpu_time_used;
    bool eh_primo[MAX];
    int maior_verificado;

    start = clock();
    for (int i = 0; i < MAX; i++){
        eh_primo[i] = true;
    }

    maior_verificado = sqrt(MAX);

    for (int i = 2; i <= maior_verificado; i++) {
        if (eh_primo[i]){
            for(int j = i+i; j < MAX; j+=i){
                eh_primo[j] = false;
            }
        }
    }

    for (int i = 1; i < MAX; i++){
        if (eh_primo[i]){
            printf("%d ", i);
        }
    }
    end = clock();

    cpu_time_used = (  (double)(end - start) / CLOCKS_PER_SEC );
    printf("\nTempo de execução: %f segundos. \n", cpu_time_used);

    return 0;
}
