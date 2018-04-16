#include <stdio.h>
#include <stdlib.h>


int factorial(int);
int main()
{
    int numero ;
    int resultado;

   // int cont;
    printf("ingrese un numero ");
    scanf("%d", &numero);
    resultado=factorial(numero);

   /* for(cont=numero;cont>=1;cont--)
            {
                resultado=resultado*cont;
            }*/

    printf("el factorial es: %d \n ",resultado);
    return 0;
}
int factorial(int numero)
{
    int retorno;
    if(numero==0)
    {
        retorno=1;
    }
    else
    {
        retorno=numero*factorial(numero-1);

    }
    return retorno;





}
