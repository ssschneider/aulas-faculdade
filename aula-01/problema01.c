/*

Alunos: Sarah Schneider e Arthur Rocha
Data de Alteração: 26/03/2024
O que o código faz: Calcula o lucro da Padaria do seu João no final de um dia.

*/

#include <stdio.h>

int main () {
    // Valores fixos declarados no enunciado do problema
    float valorUnitarioDoPao = 0.45;
    int numeroDeFornadas = 3;
    int quantidadeDePaoPorFornada = 120;

    // Cálculo do lucro diário do Seu João
    int numeroDePaesNoDia = numeroDeFornadas * quantidadeDePaoPorFornada;
    float lucroDiario = numeroDePaesNoDia * valorUnitarioDoPao;

    printf("Seu Joao tem um lucro de R$ %.2f por dia.", lucroDiario);
    return 0;
};