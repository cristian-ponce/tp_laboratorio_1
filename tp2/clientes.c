#include "clientes.h"
void inicioestado (eEmpleado cliente[],int tamanio)
{
    int i;
    for(i=0; i < tamanio; i++)
    {

        cliente[i].estado= LIBRE;
    }
}

int altas(eEmpleado cliente[],int tamanio, int id)
{
    int lugarlibre;

    lugarlibre=buscarLibre(cliente,tamanio);

    {
        if(lugarlibre== -1 )
        {
            printf("no tiene lugar .");
        }
        else
        {
            printf("ingrese su nombre : ");
            fflush(stdin);
            gets(cliente[lugarlibre].nombre);

            printf("ingrese su apellido : ");
            fflush(stdin);
            gets(cliente[lugarlibre].apellido);

            printf("ingrese sector : ");
            scanf("%d",& cliente[lugarlibre].sector);

            printf("ingrese salario : ");
            scanf("%f",& cliente[lugarlibre].salario);

            cliente[lugarlibre].id= id;

            cliente[lugarlibre].estado= OCUPADO;

        }

    }
    return lugarlibre;
}

int buscarLibre(eEmpleado cliente[], int tamanio)
{
    int i;
    int indice= -1;

    for(i=0 ; i < tamanio ; i++)
    {
        if(cliente[i].estado == LIBRE)
        {
            indice = i;

            break;
        }
    }

    return indice;
}



void mostrar (eEmpleado cliente[],int tamanio)
{
    int i;
    float salariototal;
    float promedios;
    int prosuper;

    printf("\n\n\t id : Nombre: \t Apellido: \t Sector : \t  Salario : \t \n");

    for(i=0; i < tamanio ; i++)
    {
        if(cliente[i].estado == OCUPADO)
        {
            printf("\n  %10d  %5s  %s  %10d  %20.2f \n",cliente[i].id
                                                       ,cliente[i].nombre
                                                       ,cliente[i].apellido
                                                       ,cliente[i].sector
                                                       ,cliente[i].salario);
        }
    }
        salariototal = totalsalario(cliente,tamanio);
            promedios = promedio(cliente,tamanio);
            prosuper= promediosuper(cliente,tamanio);

            printf("\n Salario total: %.2f \n Promedio : %.2f  \n Empleados que superan el salario promedio : %d \n",salariototal
                                                                                                                    ,promedios
                                                                                                                    ,prosuper );

}
void baja(eEmpleado cliente[],int tamanio)
{
    int i;
    int idbaja;

    printf(" Ingrese el id que quiera dar de baja : ");
    scanf("%d",&idbaja);

    for(i=0; i<tamanio ; i++)
    {
        if(idbaja == cliente[i].id)
        {
            cliente[i].estado = LIBRE ;
        }
    }




}

int buscarEmpleado(eEmpleado cliente[],int tam, int idmodificar)
{

    int i ;
    int indice= -1;
    for(i=0; i < tam; i++)
    {
        if(cliente[i].id== idmodificar && cliente[i].estado == 1)
        {
            indice= i;
            break;
        }
    }


    return indice;
}

void modificar(eEmpleado cliente[], int tam )
{
    int opcionModificar;
    int auxint;
    int idmodificar;
    int indice;
    float auxfloat;
    char auxchar[20];
    char respuesta[20];

    printf(" \t\t\t DATOS DE LOS EMPLEADOS ACTIVOS. \n");
    mostrar(cliente,tam);


    printf("\n\n Ingrese id que desea modificar : \n");
    scanf("%d",& idmodificar);


    indice=buscarEmpleado(cliente,tam,idmodificar);



    if(indice!= -1)
    {
        printf("\n\n 1)Nombre : \n 2)Apellido : \n 3) Salario : \n 4) Sector :   \n\n\n Opcion elejida :");
        scanf("%d",& opcionModificar);

        switch(opcionModificar)
        {

        case 1:
            printf("Ingrese el nuevo nombre : ");
            fflush(stdin);
            gets(auxchar);
            printf("\n\n Esta seguro de la modificacion?");
            fflush(stdin);
            gets(respuesta);

            if (strcmp(respuesta,"si")==0)
            {
                strcpy(cliente[indice].nombre,auxchar);

            }
            else
            {

                printf( " Modificaciones canceladas ");

            }
            break;

        case 2 :
            printf("Ingrese el nuevo apellido : ");
            fflush(stdin);
            gets(auxchar);
            printf("\n\n  Esta seguro de la modificacion? ");
            fflush(stdin);
            gets(respuesta);

            if (strcmp(respuesta,"si")==0)
            {
                strcpy(cliente[indice].apellido,auxchar);

            }
            else
            {

                printf( " Modificaciones canceladas ");

            }
            break;


        case 3:
            printf("Ingrese nuevo salario : ");
            scanf("%f",& auxfloat);
            printf("\n\n Esta seguro de la modificacion?");
            fflush(stdin);
            gets(respuesta);

            if (strcmp(respuesta,"si")==0)
            {
                cliente[indice].salario=auxfloat;

            }
            else
            {

                printf( " Modificaciones canceladas ");

            }

            break;

        case 4 :
            printf("Ingrese nuevo sector : ");
            scanf("%d",& auxint);
            printf("\n\n Esta seguro de la modificacion?");
            fflush(stdin);
            gets(respuesta);

            if (strcmp(respuesta,"si")==0)
            {
                auxint=cliente[indice].salario;

            }
            else
            {

                printf( " Modificaciones canceladas ");

            }
            break;
        }




    }



}
void ordenar(eEmpleado cliente[], int tam)
{
    int j;
    int i ;
    eEmpleado aux;

    for(i=0; i < tam -1 ; i++)
    {
        for(j=i+1 ; j < tam; j++)
        {
            if(strcmp(cliente[i].apellido,cliente[j].apellido)> 0 )
            {
                aux=cliente[i];
                cliente[i]=cliente[j];
                cliente[j]=aux;

            }
            else
            {
                if (strcmp(cliente[i].apellido,cliente[j].apellido)== 0 )
                {
                    if(cliente[i].sector > cliente[j].sector)
                    {
                        aux=cliente[i];
                        cliente[i]=cliente[j];
                        cliente[j]=aux;
                    }

                }
            }

        }




    }


}
float totalsalario(eEmpleado cliente[],int tam)
{
    int i ;
    float acumulador = 0 ;
    for(i=0 ; i < tam ; i++)
    {
        if(cliente[i].estado!= 0 )
        {

            acumulador = acumulador + cliente[i].salario;
        }
    }


    return acumulador;
}
float promedio(eEmpleado cliente[],int tam)
{
    float promedios;
    float salariototal ;
    int i ;
    int contadorcliente=0;
    for(i=0; i< tam ; i++)
    {
        if(cliente[i].estado!= 0 )
        {
            contadorcliente ++;
        }
    }

    salariototal= totalsalario(cliente,tam);
    promedios= salariototal/contadorcliente;

    return promedios;
}
int promediosuper(eEmpleado cliente[],int tam)
{
    int i ;
    float promedios;
    int contadorempleados = 0;
    promedios=promedio(cliente, tam);


    for(i=0; i<tam ; i++ )
    {
        if(promedios <cliente[i].salario && cliente[i].estado!= 0 )
        {
            contadorempleados++;


        }
    }
    return contadorempleados;
}

int buscarOcupado(eEmpleado cliente[], int tamanio)
{
    int i;
    int indice= 0;

    for(i=0 ; i < tamanio ; i++)
    {
        if(cliente[i].estado == OCUPADO)
        {
            indice = 1;

            break;
        }
    }

    return indice;
}
