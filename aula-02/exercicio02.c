/*

Escreva um programa que recebe dois valores e imprime tais valores na ordem crescente

*/

#include <stdio.h>

int main () {
    int valor01, valor02;

    // Receber os valores
    printf("Escreva o primeiro valor e pressione a tecla enter: ");
    scanf("%d", &valor01);
    printf("Escreva o segundo valor e pressione a tecla enter: ");
    scanf("%d", &valor02);

    // Imprime caso o Valor 01 seja menor do que o valor 02
    if (valor01 < valor02) printf("%d, %d", valor01, valor02);

    // Imprime caso o Valor 01 seja maior do que o valor 02
    if (valor01 > valor02) printf("%d, %d", valor02, valor01);

    // Imprime caso o Valor 01 seja igual ao valor 02
    if (valor01 == valor02) printf("%d, %d", valor01, valor02);

    return 0;
}