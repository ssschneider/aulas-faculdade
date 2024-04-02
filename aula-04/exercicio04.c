/*

Escreva um programa em C para receber um número inteiro e dizer quantos divisores ele tem

*/

#include <stdio.h>

int main () {
    int numeroRecebido, numeroDeDivisores = 0, contador = 1;

    // Receber o número
    printf("Digite um número: ");
    scanf("%d", &numeroRecebido);

    while (contador <= numeroRecebido)
    {
        if (numeroRecebido % contador == 0) numeroDeDivisores++;
        contador++;
    }

    printf("\n O numero %d tem %d divisores", numeroRecebido, numeroDeDivisores);
    
    return 0;
}