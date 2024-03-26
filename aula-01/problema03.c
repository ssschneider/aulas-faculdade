/*

Alunos: Sarah Schneider e Arthur Rocha
Data de Alteração: 26/03/2024
O que o código faz: Calcula o lucro da Padaria do seu João no final de um mês, levando em consideração o preço para fazer os pães e que o padeiro recebe um valor de R$ 400,00 por mês.

*/

#include <stdio.h>

int main () {
    // Valores fixos oferecidos pelo problema
    float valorUnitarioDoPao = 0.45;
    int numeroDeFornadas = 3;
    int quantidadeDePaoPorFornada = 120;
    float custoUnitarioDoPao = 0.10;
    int salarioDoPadeiro = 400;

    // Cálculo de lucro diário de Seu João, levando em consideração os custos de produção
    int numeroDePaesNoDia = numeroDeFornadas * quantidadeDePaoPorFornada;
    float custoTotalDaProducaoDePaes = numeroDePaesNoDia * custoUnitarioDoPao;
    float lucroDiario = (numeroDePaesNoDia * valorUnitarioDoPao) - custoTotalDaProducaoDePaes;

    // Desconto do salário do padeiro dentro do lucro mensal
    float lucroMensal = (lucroDiario * 30) - salarioDoPadeiro;

    printf("Seu Joao tem um lucro de R$ %.2f por mes.", lucroMensal);
    return 0;
};