#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
float dividirEnteros(int numero1, int numero2, float* resultado);
int multiplicarEnteros(int numero1, int numero2, float* resultado);
int restarEnteros(int numero1, int numero2, float* resultado);
int sumaEnteros(int numero1, int numero2, float* resultado);
float getFloat(char* mensaje,
               char* mensajeError,
               int reintentos,
               float maximo,
               float minimo,
               float* resultado);
int getMenu(float* numero1,float* numero2);
int continuar(char* mensaje,
            char* mensajeError,
            int reintentos,
            char si,
            char no,
            char* ingreso
            );
#endif // FUNCIONES_H_INCLUDED
