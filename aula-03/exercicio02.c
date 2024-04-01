/*

Faça um programa em C que calcule a soma dos números pares até 5 e imprima esse resultado.

*/

#include <stdio.h>

int main () {
    int contador = 0, soma = 0;

    while (contador <= 5)
    {
        soma = soma + contador;
        contador = contador + 2;
    }
    printf("\n Soma = %d", soma); // 0 + 2 + 4 = 6

    return 0;
}