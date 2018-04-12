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
        printf(" 1. Ingresar primer operando (A=%f) \n 2. Ingresar segundo operando (A=%f) \n 3. Sumar \n 4. Restar \n 5. Multiplicar \n 6. Dividir \n",numero1,numero2);
        scanf("%d",&opcionUsuario);

        switch (opcionUsuario)
        {
            case 1:
                if(getFloat("Ingrese el nuevo valor del primer operando\n","no, wacho",2,10000,-10000,&operando)==0)
                {
                    numero1 = operando;
                }
                break;
            case 2:
                getFloat("Ingrese el nuevo valor del segundo operando:\n","no, wacho",2,10000,-10000,&operando);
                break;
            case 3:
                if(sumaEnteros(numero1,numero2,&resultado)== 0)
                {
                    printf("la suma es: %.0f",resultado);
                } else
                {
                    printf("La suma supera el valor máximo de un entero");
                }

                break;
            case 4:
                if(restarEnteros(numero1,numero2,&resultado)== 0)
                {
                    printf("la suma es: %.0f",resultado);
                } else
                {
                    printf("La resta supera el valor maximo/minimo de un entero");
                }

                break;
            case 5:
                if(multiplicarEnteros(numero1,numero2,&resultado)== 0)
                {
                    printf("la suma es: %.0f",resultado);
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
                    printf("No dividas por cero");
                }

                break;
            default:
                printf("No es una opcion valida");
        }//fin switch
        if(getChar("\nDesea continuar? (Y/N)\n","\n Y o N en mayuscula\n",1,'Y','N', &ingreso) != 0)
        {
            printf("\n Error.\n");
        }
    }while(ingreso=='Y');
    return 0;
}
