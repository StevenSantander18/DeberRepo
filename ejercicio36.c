#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int numeros[10];
    int digitosPrimos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int numero = numeros[i];
        while (numero != 0)
        {
            int digito = numero % 10;
            if (esPrimo(digito))
            {
                digitosPrimos++;
            }
            numero /= 10;
        }
    }

    printf("Cantidad de dígitos primos encontrados: %d\n", digitosPrimos);

    return 0;
}