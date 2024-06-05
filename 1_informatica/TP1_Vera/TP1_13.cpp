/*13)Del registro de partes meteorologicos, de un mes de 30 dias,
se registra la fecha, temperatura maxima y temperatura manima.
Finalizada la carga de datos se pide informar:
a)	El dia mas frio y cual fue esa temperatura (Se supone unico).
b)	El dia mas calido y cual fue esa temperatura (Se supone unico).
c)	El promedio de las temperaturas del mes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
main()
{   
    float meteorologiaM[30][3];
    printf("Introduce Temperatura por Dia\n\n");
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("Introduce Temperatura Dia: "); // j=0
            }
            else if (j == 1)
            {
                printf("Introduce Temperatura Maxima: "); // j=1
            }
            else if (j == 2)
            {
                printf("Introduce Temperatura Minima: "); // j=2
            }
            fflush(stdin);
            scanf("%f", &meteorologiaM[i][j]);
            temMax+=meteorologiaM[i][1];
            temMin+=meteorologiaM[i][2];
        }
        proMax=temMax/30
        proMin=temMin/30
    }

    system("pause");
}