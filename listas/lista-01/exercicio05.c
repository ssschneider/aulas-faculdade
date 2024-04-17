/*

Fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja imprime as  opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem). 
  1) Opção: a vista com 10% de desconto 
  2) Opção: em duas vezes (preço da etiqueta) 
  3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00). 

- OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção).

*/

#include <stdio.h>

int main () {
  float totalGasto, pagamentoAVista, pagamentoParcelado, pagamentoComJuros;
  int formaDePagamento = 0, numeroDeParcelas = 1;

  printf("Digite o valor total gasto: R$ ");
  scanf("%f", &totalGasto);

  printf("As formas de pagamento sao: \n");
  printf("1) Pagamento a vista com 10 por cento de desconto \n");
  printf("2) Em duas parcelas, sem juros \n");
  if (totalGasto > 100) printf("3) Entre 3 e 10 parcelas, com 3 por cento de juros ao mes \n");
  printf("Digite a opcao de pagamento desejada: ");
  scanf("%d", &formaDePagamento);

  if (formaDePagamento == 3)
  {
    printf("\n Em quantas vezes deseja parcelar: ");
    scanf("%d", &numeroDeParcelas);
  }
  

  switch (formaDePagamento)
  {
  case 1:
    pagamentoAVista = totalGasto - (.1 * 100);
    printf("O valor a ser pago eh de %.2f", pagamentoAVista);
    break;

  case 2:
    pagamentoParcelado = totalGasto / 2;
    printf("O valor a ser pago eh de duas parcelas de %.2f", pagamentoParcelado);

    break;

  case 3:
    pagamentoComJuros = (totalGasto / numeroDeParcelas) * 1.03;
    printf("O valor a ser pago eh de %d parcelas de %.2f", numeroDeParcelas, pagamentoComJuros);
    break;
  
  default: printf("Por favor, escolha uma forma de pagamento valida");
    break;
  }

  return 0;
};