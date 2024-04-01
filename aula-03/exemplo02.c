#include <stdio.h>

int main () {
    int contador = 0, resto = 0;

    while (contador < 100)
    {
        resto = contador % 2;

        if (resto == 0) printf("%d \n", contador);
        
        contador++;
    }

    return 0;
}