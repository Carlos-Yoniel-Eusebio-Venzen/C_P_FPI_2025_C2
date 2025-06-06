#include <stdio.h>

/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
➥nómina de la universidad.

I: variable de tipo entero.
SAL y NOM: variables de tipo real. */

void main(void)
{
int I;
float SAL, NOM;
NOM = 0;
for (I=1; I<=5; I++)
{
    printf("\Ingrese el salario del profesor%d:\t", I);
    scanf("%f", &SAL);
    NOM = NOM + SAL;
    //imprimir salario menos el 20% de impuesto
    //imprimir el 20% del salario
}
printf("\nEl total de la nómina es: %.2f", NOM);
//imprimir total a pagar a los profesores
//imprimir total de impuesto a pagar
}
