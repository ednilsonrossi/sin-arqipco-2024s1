#include <stdio.h>


int ano_matricula(int prontuario);

int semestre_matricula(int prontuario);

int main(){
    int prontuario;
    int ano, semestre;

    printf("Informe número de matrícula (7 dígitos): \n");
    scanf("%d", &prontuario);

    ano = ano_matricula(prontuario);
    semestre = semestre_matricula(prontuario);

    printf("Aluno matriculado em %d/%d\n", ano, semestre);
    return 0;
}

int ano_matricula(int prontuario){
    return prontuario / 100000;
}

int semestre_matricula(int prontuario){
    prontuario = prontuario - ano_matricula(prontuario) * 100000;
    return prontuario / 10000;
}
