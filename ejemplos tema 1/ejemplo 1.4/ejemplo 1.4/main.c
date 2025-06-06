#include <stdio.h>
/* Superficie del triángulo.
El programa, al recibir como datos la base y la altura de un triángulo,
➥calcula su superficie.
BAS, ALT y SUP: variables de tipo real. */
void main (void)
{
float BAS, ALT, SUP;
printf("Ingrese la base del triangulo: ");
scanf("%f", &BAS);
printf("Ingrese la altura del triangulo: ");
scanf("%f", &ALT);
SUP = BAS * ALT / 2;
printf("\nLa superficie del triangulo es: %5.2f", SUP);
}
