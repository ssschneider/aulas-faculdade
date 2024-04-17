/*

FAzer um programa em C para ler um inteiro e imprimir o seu dobro

*/

#include <stdio.h>

int main () {
  int numeroDigitado;

  printf("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  numeroDigitado = numeroDigitado * 2;

  printf("O dobro do numero digitado eh %d \n", numeroDigitado);

  return 0;  
};