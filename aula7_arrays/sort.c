#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define MAXSIZE 1000

void load_dataset_limited(int array[], int size, int high_border);
void print_dataset(int array[], int size);
void insert_sort(int array[], int size);
void bubble_sort(int array[], int size);


int main() {
    int dataset[MAXSIZE];
    int used = 5;

    load_dataset_limited(dataset, used, 200);
    printf("Dataset gerado:\n");
    print_dataset(dataset, used);

    insert_sort(dataset, used);
    printf("Dataset classificado:\n");
    print_dataset(dataset, used);

    return 0;
}

void selection_sort(int array[], int size){
    int index, pos_menor, temp;

    for(index = 0; index < size-1; index+=1){

        //Localiza a posição do menos valor
        pos_menor = index;
        for(int busca = index; busca < size; busca+=1){
            if(array[busca] < array[pos_menor]){
                pos_menor = busca;
            }
        }

        //Trocar a posição do menor com a posição index
        temp = array[index];
        array[index] = array[pos_menor];
        array[pos_menor] = temp;
    }
}

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
