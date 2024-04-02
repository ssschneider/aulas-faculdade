/*

Escreva um programa em C para receber um número inteiro e dizer se é primo ou não

*/

#include <stdio.h>

int main () {
    int numeroRecebido, contador = 2, flag = 0;

    // Receber o número
    printf("Digite um número: ");
    scanf("%d", &numeroRecebido);

    while (contador < numeroRecebido)
    {
        if (numeroRecebido % contador == 0) flag = 1;
        contador++;
    }

    if (flag == 0) printf("\n O numero %d eh primo", numeroRecebido);
    else if (flag == 1) printf("\n O numero %d nao eh primo", numeroRecebido);

    return 0;
}