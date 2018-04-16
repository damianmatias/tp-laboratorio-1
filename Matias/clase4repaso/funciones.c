#include <stdio.h>
#include <conio.h>
#include "funciones.h"





int pediretntero(char texto[],int min , int max)//desarrollo de la funcion pedir un entero
{

    int retorno;//declaro la variable

    printf("%s",texto);
    scanf("%d", &retorno);
    retorno = validarentero(retorno,min,max);

    return retorno;
}
int validarentero(int dato , int min , int max)
{
        while(dato < min || dato > max);
        {
         printf("Error !!! reingrese!!!");
         scanf("%d", &dato);

         return dato;
        }
}

