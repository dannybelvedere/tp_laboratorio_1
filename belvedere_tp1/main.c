#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numero1;
    float numero2;
    int opcionUsuario;
    float resultado;
    float operando;
    fflush(stdin);
    char ingreso;
    numero1 = 0;
    numero2 = 0;
    do
    {
        //Imprimo el menú con un printf por cada uno para legibilidad del código
        printf("1. Ingresar primer operando (A=%.2f) \n",numero1);
        printf("2. Ingresar segundo operando (A=%.2f) \n",numero2);
         printf("3. Sumar \n");
          printf("4. Restar \n");
          printf("5. Multiplicar \n");
          printf("6. Dividir \n");
          printf("7. Factorial\n");
          printf("8. Todas \n");
          printf("9. Salir \n");
        scanf("%d",&opcionUsuario);

        switch (opcionUsuario)
        {
            case 1:
                if(getFloat("Ingrese el nuevo valor del primer operando\n","[WARNING] No es un numero",2,10000,-10000,&operando)==0)
                {
                    numero1 = operando;
                }
                else
                {
                    printf("ERROR");
                }
                break;
            case 2:
                if(getFloat("Ingrese el nuevo valor del segundo operando:\n","[WARNING] No es un numero\n",2,3.40282e+38,1.17549e-38,&operando)==0)
                {
                    numero2 = operando;
                }
                else
                {
                    printf("ERROR");
                }
                break;
            case 3:
                if(sumaEnteros(numero1,numero2,&resultado)== 0)
                {
                    printf("la suma es: %.2f",resultado);
                } else
                {
                    printf("La suma supera el valor máximo de un entero");
                }

                break;
            case 4:
                if(restarEnteros(numero1,numero2,&resultado)== 0)
                {
                    printf("la suma es: %.2f",resultado);
                } else
                {
                    printf("La resta supera el valor maximo/minimo de un entero");
                }

                break;
            case 5:
                if(multiplicarEnteros(numero1,numero2,&resultado)== 0)
                {
                    printf("la suma es: %.2f",resultado);
                } else
                {
                    printf("La resta supera el valor maximo/minimo de un entero");
                }

                break;
            case 6:
                if(dividirEnteros(numero1,numero2,&resultado) == 0)
                {
                    printf("La division es: %.2f",resultado);
                }
                else
                {
                    printf("[WARNING] No dividas por cero");
                }

                break;
            case 7:
                printf("WAIT, TODAVIA NO TERMINE");
                break;
            case 8:
                printf("WAIT, TODAVIA NO TERMINE");
                break;
            case 9:
                return 0;
                break;
            default:
                printf("No es una opcion valida");
        }//fin switch
        if(continuar("\nDesea continuar? (Y/N)\n","\n[WARNING] Y o N en mayuscula\n",1,'Y','N', &ingreso) == -1)
        {
            printf("\n Error.\n");
        }
    }while(ingreso=='Y');
    return 0;
}
