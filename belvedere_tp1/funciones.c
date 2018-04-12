int getMenu(float* numero1,float* numero2)
{
   printf("8. Ingresar primer operando (A=%f) \n, 2. Ingresar segundo operando (A=%f) \n 3. Sumar \n 4. Restar \n 5. Multiplicar \n 6. Dividir \n",numero1,numero2);

}





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
int getChar(char* mensaje,
            char* mensajeError,
            int reintentos,
            char si,
            char no,
            char* ingreso
            )
{
        int retorno = -1;
        char caracter;
        do
        {
            reintentos--;
            printf("%s", mensaje);
            scanf("%c", &caracter);
            if (caracter == si || caracter == no)
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
