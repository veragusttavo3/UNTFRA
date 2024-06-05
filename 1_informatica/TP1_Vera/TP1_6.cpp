/*6)Se leen tres datos que representan: el nombre, sueldo basico y antiguedad de un empleado. 
Se solicita imprimir el nombre y el sueldo a cobrar. Este sueldo a cobrar, se calcula 
adicionando al basico el 35% del mismo, si la antiguedad supera los 10 anios.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
    char nombre[20];
    int sueldoB,antiguedad;
    printf("Ingrese el Nombre.(enter)\n");
    fflush(stdin);
    scanf("%s",nombre);
    printf("Ingrese el Sueldo Basico.(enter)\n");
    scanf("%i",&sueldoB);
    printf("Ingrese la Antiguedad.(enter)\n");
    scanf("%i",&antiguedad);
    if (antiguedad>=10)
    {
        sueldoB=sueldoB*1.35;
    }
    printf("El Nombre: %s\n",nombre);
    printf("El sueldo a cobrar: %i",sueldoB);
    return 0;
    system("pause");
}

