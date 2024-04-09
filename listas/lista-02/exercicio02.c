/*

Com base no enunciado anterior, exercício 1, pede-se quando for digitado
-1, apresentar, também, quantos números o usuário digitou e terminar a
execução do programa!

*/

/*

Fazer um programa C para solicitar ao usuário que digite um conjunto de número e mostre ao usuário o valor duplicado deste número. Não se sabe quantos números o usuário deseja digitar. Mas se for digitado -1 o programa deve terminar.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, contador = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  while (numeroDigitado != -1)
  {
    printf("O dobro do numero digitado eh: %d \n", numeroDigitado * 2);
    contador++;
    printf("Digite um novo numero: ");
    scanf("%d", &numeroDigitado);
  }
  printf("Foram digitados %d numeros ate voce interromper o programa!", contador);

  return 0;
}