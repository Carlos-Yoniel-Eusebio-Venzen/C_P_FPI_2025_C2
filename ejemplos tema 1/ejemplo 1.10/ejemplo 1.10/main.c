#include <stdio.h>
#include <math.h>
/* Área del triángulo
El programa, al recibir los tres lados de un triángulo, calcula su área.
LA1, LA2, LA3, AUX y ARE: variables de tipo real. */
void main(void)
{
float LA1, LA2, LA3, AUX, ARE;
printf("Ingrese el primer lado del triángulo: ");
scanf("%f", &LA1);
printf("Ingrese el segundo lado del triángulo: ");
scanf("%f", &LA2);
printf("Ingrese el tercer lado del triángulo: ");
scanf("%f ", &LA3);
AUX = (LA1 + LA2 + LA3) / 2;
ARE = sqrt (AUX * (AUX-LA1) * (AUX-LA2) * (AUX - LA3));
printf("\nEl área del triángulo es: %6.2f", ARE);

}
