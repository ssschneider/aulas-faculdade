## Prova P1 2018/1

1. O código abaixo está correto? Se nao, informe os erros. Se sim, diga quais valores repetidos que serão impressos na variável i.
```
#include <stdio.h>
<include <stdlib.h>

int main () {
  int i, j;

  for (i = 0; i < 10; i++) {
    for (j=10; j > i; j--) {
      printf("\n i = %d, j = %d", i, j);
    }
  }
};

```

2. Analisando o código abaixo, diga se o mesmo possui erros, informando onde estão. Caso o código esteja sem erros, informe o que será exatamente impresso.
```
#include <stdio.h>
<include <stdlib.h>

int main () {
  int i, j;

  for (i = 0; i < 10; i++) {
    for (j=10; j > i; j--) {
      printf("\n i = %d, j = %d", i, j);
      j = j+i;
      i++;
    }
  }
};


```

3. Refaça o código abaixo usando o comando while.
```
#include <stdio.h>

int main () {
  for (int i = 0; i<= 20; i++) {
    if (i == 2) continue;
    if (i == 5) break;

    printf("i = %d \n", i);
  }
}


```

4. Refaça o código abaixo usando o comando do-while.
```
#include <stdio.h>
#include <stdlib.h>

int main () {
  int fat, n;
  
  printf("Insira um valor para o qual deseja calcular seu vetorial: ");
  scanf("%d", &n);

  for (fat = 1, n > 1; n = n-1) {
    fat = fat * n;
  }

  printf("\n Fatorial calculado: %d", fat);

  return 0;
}

```

5. Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe  a quantidade de números ímpares e pares lidos. Calcule também a soma dos números pares e a média dos números ímpares. Use funções para identificar se um número é par ou ímpar.
6. A turma do colégio vai fazer um excursão na serra e todos os alunos e monitores vão tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar até 50 pessoas no máximo, contando ocm alunos e monitores, durante a viagem até o pico. Neste problema, dado como entrada o número de alunos A e o número de monitores M, você deve escrever um programa que diga se é possível ou não levar todos os alunos e monitores em apenas uma viagem.
   1. Entrada: A primeira linha da entrada contém um inteiro A, representando a quantidade de alunos
   2. Entrada: A segunda linha da entrada contém um inteiro M, representando a quantidade de monitores
   3. Saída: Seu programa deve imprimir apenas uma linha contendo o caractere S se é possível levar todos os alunos e monitores em apenas uma viagem, ou o caractere N caso não seja possível
   4. Restrições: 1 <= A <= 50
   5. Restrições: 1 <= M <= 50