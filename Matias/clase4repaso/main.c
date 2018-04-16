#include <stdio.h>
#include <stdlib.h>
/*no devuelve  func(no recibe nada)
no devuelve func (recibe)
devuelve func (no recibe)
***devuelve func (recibe)*** ideal
*/

/** \brief devuelve un numero entero ingresado por el usuaro
 *
 * \param texto a mostrar
 * \param
 * \return
 *
 */







char pedirentero(char[],int nim,int max);
int validarentero(int  , int  , int );


int main()
{
    int edad;
    int legajo;
    int nota;
    int resultado;

    edad = pediretntero("ingrese edad", 18,60);
    legajo = pediretntero("ingrese legajo",1,1500);
    nota = pediretntero("ingrese nota",1,10);


    return 0;
}

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
