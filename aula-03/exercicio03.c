/*

Fazer um programa em C que calcule o fatorial de um número

*/

#include <stdio.h>

int main () {
    int numero, fatorial = 1, contador = 1;

    // Receber o número
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    while (contador <= numero)
    {
        fatorial = fatorial * contador;
        contador++;
    }
    
    printf("%d! = %d", numero, fatorial);

    return 0;
}