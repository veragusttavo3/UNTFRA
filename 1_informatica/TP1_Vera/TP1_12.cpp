/*12)En un supermercado un cajero captura los precios de los articulos
que los clientes compran e indica a cada cliente cual es el monto de
lo que deben pagar. Al final del dia le indica a su supervisor cuanto
fue lo que cobro en total a todos los clientes que pasaron por su caja.*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int clientes=0, articulos=0,monto=0,caja=0;
    printf("[Ventas de la jornada]\n\n ");
    printf("Ingresar cantidad de clientes: ");
    scanf("%i", &clientes);
    
    for (int i = 0; i < clientes; i++)
    {
        printf("\n\nIngresar cantidad de articulos del cliente(%i): ",i+1);
        scanf("%i", &articulos);
        for (int j = 0; j < articulos; j++)
        {
            int venta[clientes][articulos];
            printf("\n\nIngrese precio%i del articulo del cliente(%i): ",j+1,i+1);
            scanf("%i", &venta[i][j]);
            monto += venta[i][j];
        }
        printf("\n\nDebe abonar : $%i.-\n\n",monto);
        caja+=monto;
    }
    printf("cierre de caja: $%i.- \n\n",caja);
    system("pause");
}