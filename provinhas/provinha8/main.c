#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

int main(){
    double arr[MAX_SIZE];   // Array de dados
    
    int size = 0;           // Variável indica o tamanho do array atual, iniciando
                            // com zero, e é acrescido em uma unidade a cada nova 
                            // inserção no array. 
    
    float value;           // Valor fornecido pelo usuário que será localizado ou
                            // inserido no array.
    
    do{
        printf("Digite valor: ");
        scanf("%f", &value);

        if (value >= 0){
            /**
             * Aplicação do algoritmo de busca sequêncial aplicada a um array
             * não ordenado.
             */
            bool founded = false;
            int index = 0;
            while(index < size && !founded){
                if(arr[index] == value){
                    founded = true;
                } else {
                    index++;  
                    /**
                     * O index é incrementado apenas se não foi localizado o valor
                     * desejado, isso para que se tenha a posição do indice em que
                     * o valor está no array.
                     **/  
                }
            }

            if(!founded){
                /**
                 * Caso não seja encontrado o value é inserido na posição size, visto 
                 * que esta é a próxima posição vazia do array. Após inserir no array
                 * o valor de size é incrementado em uma unidade, visto que o tamanho
                 * do array aumentou uma posição.
                 */
                arr[size] = value;
                printf("Valor %.2f inserido na posição %d.\n", value, size);
                size++;
            } else {
                printf("Valor já existe no array na posição %d.\n", index);
            }
        }

    } while (value >= 0 && size != MAX_SIZE);


    /**
     * Ordenação usando algoritmo Bubblesort
     */
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if (arr[j] > arr[j+1]){
                float swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    /**
     * Impressão do array
     */
    printf("Array:\n");
    for(int i = 0; i < size; i++){
        printf("%.2f, ", arr[i]);
    }

    return 0;
}
