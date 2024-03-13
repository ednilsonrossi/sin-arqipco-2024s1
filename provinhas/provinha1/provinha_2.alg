Algoritmo
Declare
    a, b, auxiliar : NUMÉRICO

Início
    Escreva("Digite dois valores: ")
    Leia(a)
    Leia(b)

    auxiliar <- a
    a <- b
    b <- auxiliar

    Escreva("A = ", a, " e B = ", b)
Fim

