/*

Fazer um programa em C para solicitar ao usuário um número inteiro e
informar o fatorial deste número.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, fatorial = 1;

  printf("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  for (int i = 1; i <= numeroDigitado; i++)
  {
    fatorial = fatorial * i;
  }
  printf("%d! = %d", numeroDigitado, fatorial);

  return 0;
};