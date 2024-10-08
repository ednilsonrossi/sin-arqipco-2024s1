#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#define MAXSIZE 1000

void load_dataset(int array[], int size);
void load_dataset_limited(int array[], int size, int high_border);
void load_dataset_sequential(int array[], int size, int step);
void print_dataset(int array[], int size);
bool linear_search(int array[], int size, int target);
bool linear_search_sorted(int array[], int size, int target);

int main() {
    int dataset[MAXSIZE];
    int used = 100;

    load_dataset_sequential(dataset, used, 1);
    print_dataset(dataset, used);

    int target = 51;
    if(linear_search_sorted(dataset, used, target)){
        printf("Valor %d existe no array.", target);
    } else {
        printf("Valor %d não existe no array.", target);
    }

    return 0;
}

bool linear_search_sorted(int array[], int size, int target){
    bool founded = false;
    int index = 0;
    while(index < size && !founded && array[index] <= target) {
        if(array[index] == target) {
            founded = true;
        }
        index += 1;
    }
    return founded;
}


bool linear_search(int array[], int size, int target){
    bool founded = false;
    int index = 0;
    while(index < size && !founded) {
        if(array[index] == target) {
            founded = true;
        }
        index += 1;
    }
    return founded;
}


/*
bool linear_search(int array[], int size, int target){
    bool founded = false;
    for (int index = 0; index < size; index += 1){
        if(array[index] == target){
            founded = true;
        }
    }
    return founded;
}
*/

void load_dataset_sequential(int array[], int size, int step){
    for(int index = 0; index != size; index += 1){
        array[index] = index * step;
    }
}

void load_dataset(int array[], int size){
    srand( (unsigned) time(NULL) );
    for(int index=0; index != size; index++){
        array[index] = rand();
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
