#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>

#define MAXSIZE 40

int main(){
    char arr_name[MAXSIZE][256];    /**
                                     * Um array de Strings é uma matriz na
                                     * qual cada linha é uma string com
                                     * até 256 (neste exemplo) colunas.
                                     **/
    int arr_age[MAXSIZE];
    char arr_gender[MAXSIZE];
    int real_size = 0;              /**
                                     * Variável real_size é um controlador
                                     * para indicar o tamanho e qual a 
                                     * última posição livre dos arrays.
                                     **/

    char finish;
    do{
        printf("Nome do aluno: ");
        fgets(arr_name[real_size], 250, stdin);
        /**
         * Como fgets() encerra a string com um '\n', para que impressão
         * ocorra corretamente precisamos trocar o '\n' por um '\0'. Usando
         * a função strcspn() temos como retorno a posição de um caractere
         * desejado, no caso o '\n', então basta substituir por '\0'.
         */
        arr_name[real_size][strcspn(arr_name[real_size], "\n")] = '\0';
        __fpurge(stdin);

        printf("Idade do aluno: ");
        scanf("%d", &arr_age[real_size]);
        __fpurge(stdin);

        printf("Sexo (m/f): ");
        scanf("%c", &arr_gender[real_size]);
        arr_gender[real_size] = toupper(arr_gender[real_size]);
        __fpurge(stdin);

        real_size += 1;

        printf("Continuar leitura? (S/n): ");
        finish = getchar();
        __fpurge(stdin);

    } while (finish != 'n');
    
    char sx;
    do{
        printf("Qual o sexo desejado na listagem?\n");
        sx = getchar();
        sx = toupper(sx);
        __fpurge(stdin);
    } while (sx != 'M' && sx != 'F');

    for(int i = 0; i < real_size; i++){
        if(arr_gender[i] == sx){
            printf("%s\t%d\t%c\n", arr_name[i], arr_age[i], arr_gender[i]);
        }
    }

    int age;
    printf("Qual a idade mínima na listagem?\n");
    scanf("%d", &age);

    for(int i = 0; i < real_size; i++){
        if(arr_age[i] >= age){
            printf("%s\t%d\t%c\n", arr_name[i], arr_age[i], arr_gender[i]);
        }
    }
    

    return 0;
}
