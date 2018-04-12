#include <stdio.h>
#include <stdlib.h>

float getFloat(char* mensaje,
               char* mensajeError,
               int reintentos,
               float maximo,
               float minimo,
               float* precio)
{
        int retorno = -1;
        float valor;
        do
        {
            reintentos--;
            printf("%s", mensaje);
            scanf("%f", &valor);
            if (valor >= minimo && valor <= maximo)
            {
                *precio = valor;
                retorno = 0;
                break;
            }

            printf("%s",mensajeError);
        } while (reintentos >= 0);
        return retorno;
}
int continuar(char* mensaje,
            char* mensajeError,
            int reintentos,
            char opcionUno,
            char opcionDos,
            char* ingreso
            )
{
        int retorno = -1;
        char caracter;
        do
        {
            reintentos--;
            fflush(stdin);
            printf("%s", mensaje);
            scanf("%c", &caracter);
            if (caracter == opcionUno || caracter == opcionDos)
            {
                *ingreso = caracter;
                retorno = 0;
                break;
            }
            printf("%s",mensajeError);
        } while (reintentos >= 0);
        return retorno;

}
int sumaEnteros(int numero1, int numero2, float* resultado)
{
    long resultadoCalculo;
    int retorno = -1;

    resultadoCalculo = numero1 + numero2;

    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}

int restarEnteros(int numero1, int numero2, float* resultado)
{
    long resultadoCalculo;
    resultadoCalculo = numero1 - numero2;
    int retorno = -1;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}

int multiplicarEnteros(int numero1, int numero2, float* resultado)
{
    long resultadoCalculo;
    resultadoCalculo = numero1 * numero2;
    int retorno = -1;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}
float dividirEnteros(int numero1, int numero2, float* resultado)
{
    float resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = numero1 / (float)numero2;

    if (numero2 != 0)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}
