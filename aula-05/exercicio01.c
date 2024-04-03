/*

Crie um programa em C que conte os números de uma sequência definida pelo usuário em ordem crescente

*/


#include <stdio.h>

int main () {
    int numeroInicial, numeroFinal;

    // Receber os números para iniciar e finalizar a sequência
    printf("Digite um numero para iniciar a sequencia: ");
    scanf("%d", &numeroInicial);
    printf("Digite um numero para encerrar a sequencia: ");
    scanf("%d", &numeroFinal);

    // Verifica se número inicial é maior ou igual ao número final
    while (numeroInicial <= numeroFinal)
    {
        printf("Numero: %d \n", numeroInicial);
        // Usa o próprio numeroInicial como contador
        numeroInicial++;
    }

    return 0;
}