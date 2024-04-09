/*

Com base no enunciado do exercício 1, informar se o número é par ou ímpar, também, terminar a execução do programa quando for digitado -1.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, dobroDoNumero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  while (numeroDigitado != -1)
  {
    dobroDoNumero = numeroDigitado * 2;
    printf("O dobro do numero digitado eh: %d \n", dobroDoNumero);
    if (numeroDigitado % 2 == 0) printf("O numero %d eh o dobro do numero %d, que eh par \n", dobroDoNumero, numeroDigitado);
    else printf("O numero %d eh o dobro do numero %d, que eh impar \n", dobroDoNumero, numeroDigitado);

    printf("Digite um novo numero: ");
    scanf("%d", &numeroDigitado);
  }
  printf("Parabens, o numero %d interrompe o programa!", numeroDigitado);

  return 0;
};