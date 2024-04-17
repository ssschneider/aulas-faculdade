/*

Fazer um programa em C para imprimir a tabuada de 4

*/

#include <stdio.h>

int main () {
  for (int i = 1; i <= 10; i++)
  {
    printf("4 * %d = %d \n", i, i * 4);
  }

  return 0;  
};