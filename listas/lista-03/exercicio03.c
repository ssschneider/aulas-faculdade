/*

Fazer um programa em C para gerar todos os números entre num01 e num02. O usuário digita o num 1 e o num 2.
Por exemplo, se for digitado 2 para o num 1 e 10 para o num 2, deve-se imprimir os valores 2, 3, 4, 5, 6, 7, 8, 9, 10.

*/

#include <stdio.h>

int main () {
  int numero01, numero02;

  printf("\n Digite um numero: ");
  scanf("%d", &numero01);
  printf("\n Digite um numero: ");
  scanf("%d", &numero02);

  for (int i = numero01; i <= numero02; i++)
  {
    printf("%d, ", i);
  }
  

  return 0;  
};