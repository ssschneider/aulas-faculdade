/*

Fazer um programa C para solicitar ao usuário que digite um conjunto de número e mostre ao usuário o valor duplicado deste número. Não se sabe quantos números o usuário deseja digitar. Mas se for digitado -1 o programa deve terminar.

*/

#include <stdio.h>

int main () {
  int numeroDigitado;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  while (numeroDigitado != -1)
  {
    printf("O dobro do numero digitado eh: %d \n", numeroDigitado * 2);
    printf("Digite um novo numero: ");
    scanf("%d", &numeroDigitado);
  }
  printf("Parabens, o numero %d interrompe o programa!", numeroDigitado);

  return 0;
}