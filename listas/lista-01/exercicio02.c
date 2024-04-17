/*

Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem distribuídas em número mínimo possível. 
Por exemplo, se a máquina só dispõe de notas de R$ 50, de R$ 10, de R$ 5 e de R4 1, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de R$ 50, três notas de R$ 10, uma nota de R$ 5 e duas notas de R$ 1. Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima.

*/

#include <stdio.h>

int main () {
  int valorDoSaque, quantidadeNotas200, quantidadeNotas100, quantidadeNotas50, quantidadeNotas20, quantidadeNotas10, quantidadeNotas5, quantidadeNotas2, auxiliar = 0;

  printf("Digite o valor do saque desejado seguir. Esse valor deve ser passivel de ser entregue atraves de notas. \n Valor do saque: R$ ");
  scanf("%d", &valorDoSaque);

  auxiliar = valorDoSaque;

  if (auxiliar >= 200) {
    quantidadeNotas200 = auxiliar/200;
    auxiliar = auxiliar - (quantidadeNotas200 * 200);
  };

  if (auxiliar >= 100) {
    quantidadeNotas100 = auxiliar/100;
    auxiliar = auxiliar - (quantidadeNotas100 * 100);
  };

  if (auxiliar >= 50) {
    quantidadeNotas50 = auxiliar/50;
    auxiliar = auxiliar - (quantidadeNotas5 * 50);
  };

  if (auxiliar >= 20) {
    quantidadeNotas20 = auxiliar/20;
    auxiliar = auxiliar - (quantidadeNotas20 * 20);
  };

  if (auxiliar >= 10) {
    quantidadeNotas10 = auxiliar/10;
    auxiliar = auxiliar - (quantidadeNotas10 * 10);
  };

  if (auxiliar >= 5) {
    quantidadeNotas5 = auxiliar/5;
    auxiliar = auxiliar - (quantidadeNotas5 * 5);
  };

  if (auxiliar >= 2) {
    quantidadeNotas2 = auxiliar/2;
    auxiliar = auxiliar - (quantidadeNotas2 * 2);
  };

  printf("O saque de R$%d.00 tem a distribuição de %d notas de R$ 200.00, %d notas de R$ 100.00, %d notas de R$ 50.00, %d notas de R$ 20.00, %d notas de R$ 10.00, %d notas de R$ 5.00, %d notas de R$ 2.00..", valorDoSaque, quantidadeNotas200, quantidadeNotas100, quantidadeNotas50, quantidadeNotas20, quantidadeNotas10, quantidadeNotas5, quantidadeNotas2);

  return 0;
}