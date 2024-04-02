/*

Escreva um programa em C para receber um número inteiro e dizer se é perfeito ou não

*/

#include <stdio.h>

int main () {
    int numeroRecebido, acumulador = 0, contador = 1;

    // Receber o número
    printf("Digite um número: ");
    scanf("%d", &numeroRecebido);

    while (contador < numeroRecebido)
    {
        if (numeroRecebido % contador == 0) acumulador = acumulador + contador;
        contador++;
    }

    if (numeroRecebido == acumulador) printf("\n O numero %d eh perfeito", numeroRecebido);
    else if (numeroRecebido != acumulador) printf("\n O numero %d nao eh perfeito", numeroRecebido);

    return 0;
}