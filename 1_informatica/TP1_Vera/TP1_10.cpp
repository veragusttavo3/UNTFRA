/*10)Pedir al operador que ingrese N cantidad numeros reales distintos de 0, 
el programa debe terminar con la palabra Final o bien cuando la cantidad de los numeros 
ingresados sea igual a 20. Mostrar por pantalla al final del programa, 
cuantos fueron, la suma y el promedio.*/
#include <stdio.h>
#include <stdlib.h>

main()
{//me falta establecer cuando corta con la palabra "Final"
    int contador = 0, num = 0, suma = 0,exit=0;
    char Final;
    float promedio;
    while (exit < 20)
    {
        printf("Ingreso %i/N Numeros distintos de cero.(Enter): ", contador);
        scanf("%i", &num);
        printf("%i\n",num);
        printf("Quiere seguir ingresando datos Y/N (Enter): ");
        fflush(stdin);
        scanf("%c", &Final);
         if (Final=='Y')
        {
            exit=20;
        }if (num!=0){
            suma += num;
            contador++;
            exit++;
        }
       
        
    }
    promedio = suma / (contador * 1.0);
    printf("\nIngreso %i Numeros. ", contador);
    printf("\nEl total: %i\n", suma);
    printf("El promedio: %.1f\n", promedio);
    system("pause");
}