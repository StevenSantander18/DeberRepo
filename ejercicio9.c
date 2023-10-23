#include <stdio.h>
int main()
{
    int numero, maximo, repeticiones;
    maximo = -1;

    for (int i = 1; i <= 10; i++)
    {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &numero);

        if (numero > maximo)
        {
            maximo = numero;
            repeticiones = 1;
        }
        else if (numero == maximo)
        {
            repeticiones++;
        }
    }

    printf("El número máximo es %d y se repite %d veces.\n", maximo, repeticiones);

    return 0;
}