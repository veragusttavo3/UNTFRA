/*5)Se debe ingresar un numero entero, debiendose indicar si dicho numero es par o impar.*/
#include<stdio.h>
#include<stdlib.h>

main()
{
    int num;
    printf("Ingrese Numero.(enter)\n");
    scanf("%i",&num);
    num = num%2;
    if (num==0)
    {
        printf("El numero ingresado es PAR");
    }else
    {
        printf("El numero ingresado es IMPAR");
    }
    return 0;
    system("pause");
}

