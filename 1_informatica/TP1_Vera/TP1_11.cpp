/*11)Ingresar 100 numeros enteros debiendose averiguar la cantidad
de enteros positivos y enteros negativos. Realizar la sumatoria, y si
el resultado es positivo, mostrar la cantidad de numeros positivos y
si es negativo, mostrar el resultado de la suma y a la cantidad de
numeros negativos.*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int contador = 0, num = 0, sumaP = 0, sumaN = 0;
    int exit = 0, positivos = 0, negativos = 0, resultado = 0;
    float promedio;
    while (contador < 100)
    {
        printf("Ingreso %i/100 Numeros.(P: %i + (%i) :N): ", contador, sumaP, sumaN);
        scanf("%i", &num);
        if (num > 0)
        {
            sumaP += num;
            positivos++;
        }
        else
        {
            sumaN += num;
            negativos++;
        }
        contador++;
    }
    resultado = sumaP + sumaN;
    if (resultado > 0)
    {
        printf("El resultado es: +%i y cantidad: %i\n", resultado, positivos);
    }
    else
    {
        printf("El resultado es: %i y cantidad: %i\n", resultado, positivos);
    }

    system("pause");
}