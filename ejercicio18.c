#include <stdio.h>

int main()
{
    int numeros[10];
    int posiciones[10];
    int numPositivos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > 0)
        {
            posiciones[numPositivos] = i;
            numPositivos++;
        }
    }

    if (numPositivos > 0)
    {
        printf("Los números positivos se encuentran en las siguientes posiciones: ");
        for (int i = 0; i < numPositivos; i++)
        {
            printf("%d", posiciones[i] + 1);
            if (i < numPositivos - 1)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
    else
    {
        printf("No hay números positivos en el vector.\n");
    }

    return 0;
}