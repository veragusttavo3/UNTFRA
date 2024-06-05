/*3)De un alumno del curso de ingreso a la UTN se ingresan las notas obtenidas en los ex�menes de las 3 materias que lo forman. Calcular el promedio del alumno y mostrarlo por pantalla.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
    float matematica,fisica,orientacion,promedio;
    printf("Ingrese las notas de Matematica, Fisica, y orientacion.(enter)\n");
    scanf("%f",&matematica);
    scanf("%f",&fisica);
    scanf("%f",&orientacion);
    promedio=(matematica+fisica+orientacion)/3;
    printf("El promedio de las 3 da: %.2f",promedio);
    return 0;
}

