/*

Um programa em C para contar de 0 a 9
}

*/

#include <stdio.h>

int main () {
    int contador = 0;

    while (contador < 10)
    {
        printf("Número: %d \n", contador);
        contador++;
    }

    return 0;
}