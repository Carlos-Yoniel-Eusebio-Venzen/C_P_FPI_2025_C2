#include <stdio.h>
#include <stdlib.h>
//vamos a imprimir la nota de un estudiante el tras
//Valor maximo es 100 y el minimo 0
//A se, imprime A cuando el valor es mayor igual que 90
//B Valor entre menor de 90 y mayor de 79
//C Valor entre 70 y 79
//F menor de 70
int main()
{
    int nota = 0;
    printf("\nIngrese la nota: ");
    scanf("%i", &nota);

    //validar el dato
    if((nota >=0) && (nota <= 100))
    {
        //ejecutar el codigo
        if (nota < 70)
        {
            printf("\nNota de %i [%c]", nota, 'F');
        }
        else if (nota < 80)
        {
            printf("\nNota de %i [%c]", nota, 'C');
        }
        else if (nota < 90)
        {
            printf("\nNota de %i [%c]", nota, 'B');
        }
        else
        {
            printf("\nNota de %i [%c]", nota, 'A');
        }
    }
    else
    {
        printf("\nValor de nota inválido.");
    }

    printf("\nFin del programa\n");
    return 0;
}
