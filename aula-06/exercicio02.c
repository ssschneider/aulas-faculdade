/*

Crie um programa em C para a Sequência de Fibonacci até determinado termo. O usuário deve informar o termo

*/

#include <stdio.h>

int main () {
    int termo01 = 1, termo02 = 1, auxiliar, termoLimite, somatorio = 2;

    printf("Qual o termo da Sequencia de Fibonacci voce quer descobrir? Esse numero deve ser inteiro e positivo até o 46º termo. \n");
    printf("Termo: ");
    scanf("%d", &termoLimite);

  for (int i = 0; i < termoLimite - 2; i++)
  {
    auxiliar = termo01 + termo02;
    termo02 = termo01;
    termo01 = auxiliar;

    somatorio = somatorio + auxiliar;
  }
  
  printf("O termo %d da Sequencia de Fibonacci eh %d. \n", termoLimite, auxiliar);
  printf("Somatorio dos termos: %d", somatorio);
  
  return 0;
}