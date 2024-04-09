/*

Crie um programa em C para imprimir um determinado termo da Sequência de Fibonacci . O usuário deve informar o termo

*/

#include <stdio.h>

int main () {
    int termo01 = 1, termo02 = 1, auxiliar, termoLimite;

    printf("Qual o termo da Sequencia de Fibonacci voce quer descobrir? Esse numero deve ser inteiro e positivo até o 46º termo. \n");
    printf("Termo: ");
    scanf("%d", &termoLimite);

  for (int i = 0; i < termoLimite - 2; i++)
  {
    auxiliar = termo01 + termo02;
    termo02 = termo01;
    termo01 = auxiliar;
  }
  
  printf("O termo %d da Sequencia de Fibonacci eh %d.", termoLimite, auxiliar);
  
  return 0;
}