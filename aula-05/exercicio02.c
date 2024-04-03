/*

Crie um programa em C que conte os números de uma sequência definida pelo usuário em ordem decrescente

*/


#include <stdio.h>

int main () {
    int numeroInicial, numeroFinal;

    // Receber os números para iniciar e finalizar a sequência
    printf("Digite um numero para iniciar a sequencia: ");
    scanf("%d", &numeroInicial);
    printf("Digite um numero para encerrar a sequencia: ");
    scanf("%d", &numeroFinal);

    // Verifica se número final é maior ou igual ao número inicial
    while (numeroFinal >= numeroInicial)
    {
        printf("Numero: %d \n", numeroFinal);
        // Usa o próprio numeroFinal como contador
        numeroFinal--;
    }

    return 0;
}