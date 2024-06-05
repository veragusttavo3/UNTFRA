/*4)	Diseniar el algoritmo necesario para que lea el valor de 2 variables NUM1 y NUM2 e intercambien los valores de las mismas, es decir que el valor que tenia la variable NUM1 ahora lo contenga la variable NUM2 y viceversa.*/
#include<stdio.h>
#include<stdlib.h>

main()
{
    int NUM1,NUM2,aux;
    printf("Ingrese NUM1 y NUM2.(enter)\n");
    scanf("%i",&NUM1);
    scanf("%i",&NUM2);
    printf("El NUM1 = %i y NUM2 = %i \n",NUM1,NUM2);
    aux  = NUM1;
    NUM1 = NUM2;
    NUM2 = aux;
    printf("Al intercambiar queda que NUM1 = %i y NUM2 = %i ",NUM1,NUM2);
    system("pause");
}

