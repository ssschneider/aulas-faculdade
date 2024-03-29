/*

Escreva um programa que recebe três valores e imprime tais valores na ordem crescente

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor01, valor02, valor03, auxiliar;

    // Receber os três valores
    printf("Escreva um número inteiro e pressione a tecla enter: ");
    scanf("%d", &valor01);
    printf("Escreva um número inteiro e pressione a tecla enter: ");
    scanf("%d", &valor02);
    printf("Escreva um número inteiro e pressione a tecla enter: ");
    scanf("%d", &valor03);

    // Verifica se o valor 02 é maior do que o valor 03. Se for maior, trocar o valor 02 pelo valor 03
    if (valor02 > valor03)
    {
        auxiliar = valor02;
        valor02 = valor03;
        valor03 = auxiliar;
    }

    // Verifica se o valor 01 é maior do que o valor 02. Se for maior, trocar o valor 01 pelo valor 02
    if (valor01 > valor02)
    {
        auxiliar = valor01;
        valor01 = valor02;
        valor02 = auxiliar;
    }

    // Verifica se o valor 01 é maior do que o valor 03. Se for maior, trocar o valor 01 pelo valor 03
    if (valor01 > valor03)
    {
        auxiliar = valor01;
        valor01 = valor03;
        valor03 = auxiliar;
    }

    // Verifica novamente se o valor 02 é maior do que o valor 03. Se for maior, trocar o valor 02 pelo valor 03
    if (valor02 > valor03)
    {
        auxiliar = valor02;
        valor02 = valor03;
        valor03 = auxiliar;
    }

    // Imprime os valores em ordem crescente: Valor 01 < Valor 02 < Valor 03
    printf("%d, %d, %d", valor01, valor02, valor03);

    return 0;
};