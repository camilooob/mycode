#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/

void funcion_aleatorea();
int main()
{

    funcion_aleatorea();

    return 0;
}
/*Fin de la funciòn C */
void funcion_aleatorea()
{
    int numero, i;

    srand(time(NULL));
    for (i = 1; i <= 10; i++)
    {

        numero = 1 + rand() % ((10 + 1) - 1); // Genera numero entre 1 a 10
        printf("%i \n", numero);
    }
}