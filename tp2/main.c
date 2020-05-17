#include "clientes.h"
#define T 1000
int main()
{
    eEmpleado cliente[T];
    int opcion ;
    int id = 100;

    inicioestado(cliente,T);


    do
    {
        printf( " \n\t\t\t\t MENU PRINCIPAL " );
        printf("\n\n 1)Altas : \n 2)Modificar : \n 3) Baja: \n 4) Informar:  \n 5)Salir:   \n\n\n opcion elejida :\t");
        scanf("%d",& opcion);

        switch(opcion)
        {
        case 1:
            altas(cliente,T, id);// en el main le paso el nombre del vector y le paso el tamaño.
            id++;

            break;

        case 2:
           if(buscarOcupado(cliente,T))
            {

            modificar(cliente,T );
            }else
            {
                printf("No hay datos. " );
            }
            break;

        case 3:
            if(buscarOcupado(cliente,T))
            {
                mostrar(cliente,T);
                baja(cliente,T);


            }else
            {
                printf("No hay datos. " );
            }
             break;

        case 4 :
            if(buscarOcupado(cliente,T))
            {

             ordenar(cliente,T);
             mostrar(cliente,T);

            }else
            {
                printf("No hay datos. " );
            }

                      break;
        }

    }
    while(opcion != 5 );














    return 0;
}
/*******************************************/
