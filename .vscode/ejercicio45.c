#include <stdio.h>

int main()
{
    int numeros[10];
    int digitoEspecifico;
    int cantidadComienzanConDigito = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Ingrese el dígito específico a verificar: ");
    scanf("%d", &digitoEspecifico);

    for (int i = 0; i < 10; i++)
    {
        int numero = numeros[i];

        int primerDigito = numero;
        while (primerDigito >= 10)
        {
            primerDigito /= 10;
        }
        if (primerDigito == digitoEspecifico)
        {
            cantidadComienzanConDigito++;
        }
    }

    printf("Cantidad de números que comienzan con el dígito %d: %d\n", digitoEspecifico, cantidadComienzanConDigito);

    return 0;
}