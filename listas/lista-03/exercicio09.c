/*

Com base no exercício 2, quando for digitado -1, além de informar quantos números foram digitados, deve-se, também, mostrar o acumulado destes números e terminar a execução do programa.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, contador = 0, somatorio = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  while (numeroDigitado != -1)
  {
    printf("O dobro do numero digitado eh: %d \n", numeroDigitado * 2);
    contador++;
    somatorio = somatorio + numeroDigitado;
    printf("Digite um novo numero: ");
    scanf("%d", &numeroDigitado);
  }
  printf("Foram digitados %d numeros ate voce interromper o programa! \n", contador);
  printf("A soma de todos os valores digitados eh de: %d", somatorio);

  return 0;
}