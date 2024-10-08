#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define MAXSIZE 1000

void bubble_sort(int array[], int size){
    int troca;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(array[j] > array[j+1]){
                troca = array[j];
                array[j] = array[j+1];
                array[j+1] = troca;
            }
        }
    }
}

void load_dataset_limited(int array[], int size, int high_border){
    srand( (unsigned) time(NULL) );
    for(int index=0; index != size; index++){
        array[index] = rand() % high_border;
    }
}

void print_dataset(int array[], int size){
    for(int position=0; position != size; position+=1){
        printf("\tARRAY[%d] --> %d\n", position, array[position]);
    }
}


// Função para realizar a busca binária
bool binary_sort(int array[], int first, int last, int target) {
    bool founded = false;

    while (first <= last && !founded) {
        int middle = first + (last - first) / 2;

        // Verifica se x está presente no meio
        if (array[middle] == target) {
            founded = true;
        }

        // Se x for maior, ignora a metade esquerda
        if (array[middle] < target) {
            first = middle + 1;
        } else { // Se x for menor, ignora a metade direita
            last = middle - 1;
        }
    }

    return founded;
}


int main() {
    int dataset[MAXSIZE];
    int used = 100;

    load_dataset_limited(dataset, used, 200);
    bubble_sort(dataset, used);
    print_dataset(dataset, used);

    int target = 51;
    if(binary_sort(dataset, 0, used - 1, target)){
        printf("Valor %d existe no array.", target);
    } else {
        printf("Valor %d não existe no array.", target);
    }

    return 0;
}
