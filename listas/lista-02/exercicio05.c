/*

Com base no enunciado do exercício 4, informar, também, quantos números pares e impares o usuário digitou e terminar a execução do programa quando for digitado -1.

*/

#include <stdio.h>

int main () {
  int numeroDigitado, dobroDoNumero, numerosPares = 0, numerosImpares = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  while (numeroDigitado != -1)
  {
    dobroDoNumero = numeroDigitado * 2;
    printf("O dobro do numero digitado eh: %d \n", dobroDoNumero);
    if (numeroDigitado % 2 == 0) {
        printf("O numero %d eh o dobro do numero %d, que eh par \n", dobroDoNumero, numeroDigitado);
        numerosPares++;
    }
    else {
        printf("O numero %d eh o dobro do numero %d, que eh impar \n", dobroDoNumero, numeroDigitado);
        numerosImpares++;
    }

    printf("Digite um novo numero: ");
    scanf("%d", &numeroDigitado);
  }
  printf("Foram digitados %d numeros pares e %d numeros impares ate a interrupcao do programa", numerosPares, numerosImpares);

  return 0;
};