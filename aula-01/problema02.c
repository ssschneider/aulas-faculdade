/*

Alunos: Sarah Schneider e Arthur Rocha
Data de Alteração: 26/03/2024
O que o código faz: Calcula o lucro da Padaria do seu João no final de um dia, levando em consideração o preço para fazer os pães.

*/

#include <stdio.h>

int main () {
    // Valores fixos oferecidos pelo problemas
    float valorUnitarioDoPao = 0.45;
    int numeroDeFornadas = 3;
    int quantidadeDePaoPorFornada = 120;
    float custoUnitarioDoPao = 0.10;

    // Cálculo do lucro diário
    int numeroDePaesNoDia = numeroDeFornadas * quantidadeDePaoPorFornada;
    float custoTotalDaProducaoDePaes = numeroDePaesNoDia * custoUnitarioDoPao;
    float lucroDiario = numeroDePaesNoDia * valorUnitarioDoPao;

    // Desconto dos custos de produção
    float lucroFinal = lucroDiario - custoTotalDaProducaoDePaes;

    printf("Seu Joao tem um lucro de R$ %.2f por dia.", lucroFinal);
    return 0;
};