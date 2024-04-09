/*

Fazer um programa em C para solicitar ao usuário um número inteiro e informar quantos divisores este número possui.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, divisores = 0;

  printf("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  for (int divisor = 1; divisor <= numeroDigitado; divisor++)
  {
    if (numeroDigitado % divisor == 0) divisores++;
  }
  printf("O numero %d tem %d divisores", numeroDigitado, divisores);

  return 0;
};