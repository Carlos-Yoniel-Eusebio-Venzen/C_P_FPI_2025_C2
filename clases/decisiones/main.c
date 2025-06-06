#include <stdio.h>
#include <stdlib.h>

/* Funcion matematica.
El programa obtiene el resultado de una funcion

OP y T: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    int OP, T;
    float RES;
    printf("Ingrese la opci�n del c�lculo y el valor entero ");
    scanf("%d %d, &OP, &T");
    switch(OP)
    {
        case 1: RES = T / 5;
            break;
        case 2: RES = pow(T,T);
        /* La funcion pow esta definida en la bioblioteca math.h*/
            break;
        case 3:
        case 4: RES = 6 * T/2;
            break;
        default: RES = 1;
            break;
    }
    printf("\n Resultado:   %7.2f", RES);
}
