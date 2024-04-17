/*

Fazer um programa em C para ler dois inteiros e imprimir o produto entre eles

*/

#include <stdio.h>

int main () {
  int numero01, numero02, produto;

  printf("\n Digite um numero: ");
  scanf("%d", &numero01);
  printf("\n Digite um numero: ");
  scanf("%d", &numero02);

  produto = numero01 * numero02;

  printf("%d * %d = %d \n", numero01, numero02, produto);

  return 0;  
};