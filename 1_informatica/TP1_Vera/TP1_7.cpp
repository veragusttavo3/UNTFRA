/*7)	Se debe hacer un programa que nos permita ingresar dos numeros y que mediante
un menu de opciones nos permita calcular a una de las cuatro operaciones aritmeticas
basicas, para cada accion debe existir una opcion del menu. En todos los casos mostrar
el resultado correspondiente.*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    // declaro variables sin inicializar;
    float nro1, nro2,resultado;
    int opcion;

    // introducir el dato

    // perdir al usuario que imgrese el dato
    printf("Introducir 1er numero:  ");
    // introducir el dato
    scanf("%f", &nro1);
    // perdir al usuario que imgrese el dato
    printf("Introducir 2do numero:  ");
    // introducir el dato
    scanf("%f", &nro2);
    // perdir al usuario que imgrese el dato
    printf("Menu:\n\n 1-Suma\n 2-Resta\n 3-dividir\n 4-Multiplicar\n\n Opcion: ");
    scanf("%i", &opcion);
    switch (opcion)
    {
    case 1:
        // ejecucion del proceso
        resultado = nro1 + nro2;
        printf("\n La suma es: %.2f ", resultado);
        break;
    case 2:
        // ejecucion del proceso
        resultado = nro1 - nro2;
        printf("\n La resta es: %.2f\n", resultado);
        break;
    case 3:
        // ejecucion del proceso
        resultado = nro1 / nro2;
        printf("\n La division es: %.2f\n", resultado);
        break;
    case 4:
        // ejecucion del proceso
        resultado = nro1 * nro2;
        printf("\n La multiplicacion es: %.2f\n", resultado);
        break;
    default:
        printf("Opcon incorrecta");
    }

    system("pause");
}