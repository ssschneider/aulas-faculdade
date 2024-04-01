/*

Faça um programa em C que calcule a soma dos 100 números inteiros e imprima esse resultado.

*/

#include <stdio.h>

int main () {
    int contador = 0, acumulador = 0, numero = 100;

    while (contador <= numero)
    {
        acumulador = acumulador + contador;
        contador++;
    }
    
    printf("Soma de todos os valores de 0 a 100: %d", acumulador);

    return 0;
}

/*

RESOLUÇÃO DO PROF
int main () {
    int contador = 0, soma = 0;

    while (contador < 100)
    {
        contador++;
        soma = soma + contador;
    }
    printf("\n Soma = %d", soma);

    return 0;
}


*/