/*

EXEMPLO
while (louça suja existir na pia) 
{
    colocar sabão na esponja
    pegar louça da pia
    lavar
    secar
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