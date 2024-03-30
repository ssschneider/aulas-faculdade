/*

Escreva um programa que receba as notas dos alunos, calcule a sua média e imprima o seu grau, levando em conta que:
______________________________
| Conceito |       Nota      |
|----------|-----------------|
|     A    | 9 >= nota <= 10 |
|     B    | 9 <  nota <= 8  |
|     C    | 8 <  nota <= 6  |
|     D    | 0 >= nota >  6  |
|__________|_________________|

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float nota01, nota02, media;

    // Receber valores das notas
    printf("Por favor, insira o valor da primeira nota e pressione a tecla enter: ");
    scanf("%f", &nota01);
    printf("Por favor, insira o valor da segunda nota e pressione a tecla enter: ");
    scanf("%f", &nota02);

    // Calcular valor da média
    media = (nota01 + nota02) / 2;

    // Aprovado com conceito A
    if (media >= 9) printf("O aluno foi aprovado com conceito A e média %.1f.", media);

    // Aprovado com conceito B
    if (media < 9 && media >= 8) printf("O aluno foi aprovado com conceito B e média %.1f.", media);
    
    // Aprovado com conceito C
    if (media < 8 && media >= 6) printf("O aluno foi aprovado com conceito C e média %.1f.", media);
    
    // Reprovado com conceito D
    if (media < 6) printf("O aluno foi reprovado com conceito D e média %.1f.", media);
    
    return 0;
};