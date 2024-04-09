/*

Fazer um programa em C para solicitar ao usuário um número inteiro e
informar se este número é primo.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, divisores = 0;

  printf("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  for (int divisor = 2; divisor < numeroDigitado; divisor++)
  {
    if (numeroDigitado % divisor == 0) divisores++;
  }
  if (divisores == 0) printf("O numero %d eh primo", numeroDigitado);
  else printf("O numero %d nao eh primo", numeroDigitado);

  return 0;
};