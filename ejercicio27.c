#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int numeros[10];
    int i;
    double sumaFactoriales = 0.0;
    int promedioFactoriales;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        sumaFactoriales += factorial(numeros[i]);
    }

    promedioFactoriales = (int)(sumaFactoriales / 10);

    printf("El promedio entero de los factoriales es: %d\n", promedioFactoriales);

    return 0;
}