/*

Fazer um programa em C para imprimir o produto de um numero por 5 sem usar o operador *

*/

#include <stdio.h>

int main () {
  int numero, soma = 0;

  printf("\n Digite um numero: ");
  scanf("%d", &numero);

  for (int i = 1; i <= 5; i++)
  {
    soma = soma + numero;
  }
  printf("%d * 5 = %d", numero, soma);

  return 0;  
};