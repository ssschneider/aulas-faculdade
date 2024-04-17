/*

Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior do que ou igual às duas prestações; estas devem ser iguais, inteiras e as maiores possíveis.
Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são a iguais a R$ 100,00. 
Escreva um programa que receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.

*/

#include <stdio.h>

int main () {
  float valorDaCompra, valorDaEntrada, parcela01, parcela02;
  int auxiliar = 0;

  printf("Digite o valor da compra: ");
  scanf("%f", &valorDaCompra);
  valorDaCompra = 125;

  auxiliar = valorDaCompra * 100;

  if (auxiliar % 3 == 0) {
    valorDaEntrada = valorDaCompra /3;
    parcela01 = valorDaEntrada  / 2;
    parcela02 = valorDaEntrada / 2;
  }
  else {
    valorDaEntrada = valorDaCompra /3;
    auxiliar = valorDaCompra - valorDaEntrada;
    parcela01 = auxiliar  / 2;
    parcela02 = auxiliar / 2;
  }

  printf("Para a compra de um produto no valor de R$%.2f, o valor da entrada eh de R$%.2f e o restante em duas parcelas de R$%.2f.", valorDaCompra, valorDaEntrada, parcela01, parcela02);

  return 0;
};