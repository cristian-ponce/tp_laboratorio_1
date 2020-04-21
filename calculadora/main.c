#include <stdio.h>
#include <stdlib.h>

/*1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)

*/
int main()
{
 float num1;
 float num2;
 float resultado;
 int opcion;


do
{

printf("1. Ingresar 1er operando (A=x)");
printf("2. Ingresar 2do operando (B=y)");
printf("3. Calcular todas las operaciones");
printf("4. mostrar todos los resultados");
printf("5 salir.");


    switch(opcion)
    {

    case 1 :
        printf("1 ingresar 1er operador (A=x) :");
        scanf("%f", & num1);
    break;

    case 2 :
        printf("2 ingrese 2do operador (B=y :");
        scanf("%f", & num2);
    break;

    case 3:
        printf("a) Calcular la suma (%.1F + %.1F)\n",num1,num2);
        printf("b) Calcular la resta (%.1f-%.1f)\n",num1,num2 );
        printf("c) Calcular la division (%.1f/%.1f)\n",num1,num2);
        printf("d) Calcular la multiplicacion (%.1f*%.1f)\n",num1,num2);
        printf("e) Calcular el factorial (%.1f y de %.1F)\n"),num1,num2;

        break;

     case 4:
            //suma
            resultado=suma(num1,num2);
            printf("a) El resultado de %.1f+%.1f es: %.1f\n",num1,num2,resultado);

            //resta

            resultado=resta(num1,num2);
            printf("b) El resultado de %.1f-%.1f es: %.1f\n",num1,num2,resultado);

            //multiplicacion

            resultado=multi(num1,num2);
            printf("c) El resultado de %.1f*%.1f es: %.1f\n",num1,num2,resultado);

            //division

            resultado=division(num1,num2);
            printf("d) El resultado de %.1f/%.1f es: %.1f\n",num1,num2,resultado);

            // factorial
            resultado=factorial(num1);

            if (num1==0)
            {
                printf("e) El resultado del factorial del 1°operando: %.1f es: \n",num1);

            }
            else if ( num1<0)     // en caso que el numero sea negativo se ejecuta el siguiente mensaje de error
            {

                printf("e) El factorial %.1f no se puede realizar\n",num1);
            }
            else
            {
                resultado= factorial(num1);

                printf("e) El resultado del factorial del 1°operando: %.1f es: %.1f\n",num1, resultado);
            }

            //  SEGUNDO FACTORIAL

            resultado=factorial(num2);

            if (num2==0)
            {
                printf("e) El resultado del factorial del 2°operando: %.1f es: \n",num2);

            }
            else if (num2<0)     // en caso que el numero sea negativo se ejecuta el siguiente mensaje de error
            {

                printf("e) El factorial %.1f no se puede realizar\n",num2);
            }
            else
            {
                resultado= factorial(num2);

                printf("e) El resultado del factorial del 2°operando: %.1f es: %.1f\n",num2, resultado);
                break;
            }

    }







while(opcion !=5);
    return 0;
}
