
int getInt( char mensaje[])
{ int valor;
    printf("%s",mensaje);
    scanf("%d",& valor);
    return valor;
}

float suma(float operador1 ,float operador2 )
{
    float resultado;

    resultado = operador1+operador2;

  return resultado;
}

float resta(float operador1, float operador2)
{
    float resultado;

    resultado = operador1 - operador2;

    return resultado;
}
float multi(float operador1, float operador2)
{
    float resultado;
    resultado= operador1*operador2;

    return resultado;
}
float division(float operador1, float operador2)
{


 float resultado;
 resultado= operador1/operador2;
 return resultado;
}
