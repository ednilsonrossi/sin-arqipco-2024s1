#include <stdio.h>

void mes_extenso(int arg);

int main(int argc, char const *argv[])
{
    mes_extenso(8);

    return 0;
}

void mes_extenso(int arg){

    switch(arg){
        case 1: 
            printf("janeiro"); break;
        case 2: 
            printf("fevereiro"); break;
        case 3: 
            printf("março"); break;
        case 4: 
            printf("abril"); break;
        case 5: 
            printf("maio"); break;
        case 6: 
            printf("junho"); break;
        case 7:
            printf("julho"); break;
        case 8:
            printf("agosto"); break;
        case 9:
            printf("setembro"); break;
        case 10:
            printf("outubro"); break;
        case 11:
            printf("novembro"); break;
        case 12:
            printf("dezembro"); break;
        default:
            printf("Mês inválido");
    }
}

/*
void mes_extenso(int arg){
    if(arg == 1){
        printf("janeiro");
    } else if(arg == 2){
        printf("fevereiro");
    } else if(arg == 3){
        printf("março");
    } else if(arg == 4){
        printf("abril");
    } else if(arg == 5){
        printf("maio");
    } else if(arg == 6){
        printf("junho");
    } else if(arg == 7){
        printf("julho");
    } else if(arg == 8){
        printf("agosto");
    } else if(arg == 9){
        printf("setembro");
    } else if(arg == 10){
        printf("outubro");
    } else if(arg == 11){
        printf("novembro");
    } else if(arg == 12){
        printf("dezembro");
    } else{
        printf("Mês inválido");
    }
}
*/

/*
void mes_extenso(int arg){
    if(arg == 1){
        printf("janeiro");
    }
    if(arg == 2){
        printf("fevereiro");
    }
    if(arg == 3){
        printf("março");
    }
    if(arg == 4){
        printf("abril");
    }
    if(arg == 5){
        printf("maio");
    }
    if(arg == 6){
        printf("junho");
    }
    if(arg == 7){
        printf("julho");
    }
    if(arg == 8){
        printf("agosto");
    }
    if(arg == 9){
        printf("setembro");
    }
    if(arg == 10){
        printf("outubro");
    }
    if(arg == 11){
        printf("novembro");
    }
    if(arg == 12){
        printf("dezembro");
    }
}
*/