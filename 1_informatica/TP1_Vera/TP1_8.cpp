/*8)	Pedir al operador que ingrese un numero entero positivo mayor a 1000.
Determinar si es par o impar (no usar el operador modulo) y mostrar por pantalla
el mensaje "Numero Par" o "Numero Impar".
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int num = 0;
    while (num < 1000)
    {
        printf("Ingrese Numero positivo mayor a 1000.(enter)\n");
        scanf("%i", &num);
    }
    while (num > 1)
    {
        num -= 2;
    }
    if (num == 0)
    {
        printf("El numero ingresado es PAR\n");
    }
    else if (num == 1)
    {
        printf("El numero ingresado es IMPAR\n");
    }

    system("pause");
}