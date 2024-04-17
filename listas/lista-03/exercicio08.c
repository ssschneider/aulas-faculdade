/*

Com base no enunciado anterior, exercício 1, pede-se quando for digitado -1, apresentar, também, quantos números o usuário digitou e terminar a execução do programa!

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