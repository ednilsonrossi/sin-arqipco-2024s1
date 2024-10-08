#include <stdio.h>

void print_message(int quantity);
void print_message1(int quantity);
void print_message2(int quantity);

int main(){
    print_message1(10);
    printf("//**********************\n");
    print_message2(10);
    return 0;
}

void print_message(int quantity){
    if (quantity <= 0) {
        /* Caso base indica o fim da recursão,
           ou seja, quando o argumento quantity
           for menor ou igual a zero, encerra-se
           a recursão.*/
        return;
    }

    // O que fazer? Imprimir!!
    printf("Essa é a mensagem %d\n", quantity);

    // Em direção ao caso base
    print_message(quantity - 1);
}

void print_message1(int quantity){
    if (quantity <= 0) {
        return;
    }

    print_message1(quantity - 1);
    printf("Essa é a mensagem %d\n", quantity);
}

//----------------------------------------------

void print_message2(int quantity){
    if (quantity <= 0) {
        return;
    }

    printf("Essa é a mensagem %d\n", quantity);
    print_message2(quantity - 1);
}