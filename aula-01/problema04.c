/*

Alunos: Sarah Schneider e Arthur Rocha
Data de Alteração: 26/03/2024
O que o código faz: Calcula a quantidade de pães que Seu João precisa vender para fazer um montante de R$ 1.500,00 no final do mês, levando em consideração o preço para fazer os pães e que o padeiro recebe um valor de R$ 400,00 por mês.

*/

#include <stdio.h>

int main () {
    // Valores fixos oferecidos pelo enunciado
    float valorUnitarioDoPao = 0.45;
    float custoUnitarioDoPao = 0.10;
    int salarioDoPadeiro = 400;
    float lucroMensalDesejado = 1500;

    // Lucro recebido por Seu João a cada pão vendido
    float lucroPorPao = valorUnitarioDoPao - custoUnitarioDoPao;

    // Cálculo de número de pães necessários
    int quantidadeDePaesNecessaria = (lucroMensalDesejado + salarioDoPadeiro) / lucroPorPao;

    printf("Seu Joao precisa vender %d por mes para obter um lucro de R$ %.2f.", quantidadeDePaesNecessaria, lucroMensalDesejado);
    return 0;
};