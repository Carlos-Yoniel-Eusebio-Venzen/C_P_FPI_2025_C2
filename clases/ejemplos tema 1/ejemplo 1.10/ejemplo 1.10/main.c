#include <stdio.h>
#include <math.h>
/* �rea del tri�ngulo
El programa, al recibir los tres lados de un tri�ngulo, calcula su �rea.
LA1, LA2, LA3, AUX y ARE: variables de tipo real. */
void main(void)
{
float LA1, LA2, LA3, AUX, ARE;
printf("Ingrese el primer lado del tri�ngulo: ");
scanf("%f", &LA1);
printf("Ingrese el segundo lado del tri�ngulo: ");
scanf("%f", &LA2);
printf("Ingrese el tercer lado del tri�ngulo: ");
scanf("%f ", &LA3);
AUX = (LA1 + LA2 + LA3) / 2;
ARE = sqrt (AUX * (AUX-LA1) * (AUX-LA2) * (AUX - LA3));
printf("\nEl �rea del tri�ngulo es: %6.2f", ARE);

}
