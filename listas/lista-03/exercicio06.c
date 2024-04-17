/*

Fazer um programa em C para imprimir a tabuada de um número digitado pelo usuário

*/

#include <stdio.h>

int main () {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d \n", numero, i, numero * i);
  }

  return 0;  
};