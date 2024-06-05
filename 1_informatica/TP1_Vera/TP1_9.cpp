/*9)Pedir al operador que ingrese 20 numeros enteros mayores a 999 y menores a 10000,
ir mostrando por pantalla el subtotal de la suma por cada numero y al final del programa,
el total, el promedio, la cantidad de numeros pares y la cantidad de numeros impares
(usar el operador modulo). Cada resultado uno debajo del otro.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int contador = 0, num = 0, suma = 0, par = 0, impar = 0;
    float promedio;
    while (contador < 20)
    {
        printf("Ingreso %i/20 Numeros entre 999 y 10000.(subtotal: %i): ", contador,suma);
        scanf("%i", &num);
        if (num > 999 && num < 10000)
        {
            if (num % 2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
            suma += num;
            contador++;
        }
    }
    promedio = suma / (contador * 1.0);
    printf("Ingreso %i/20 Numeros entre 999 y 10000. ", contador);
    printf("\nEl total: %i\n", suma);
    printf("El promedio: %.1f\n", promedio);
    printf("El cantidad de numeros Pares: %i\n", par);
    printf("El cantidad de numeros Impares: %i\n", impar);
    system("pause");
}