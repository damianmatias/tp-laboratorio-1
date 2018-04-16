#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float sumar(int numer1 , int numero2);
void pedir_numero();




int main()
{
    /*printf("Hello world!\n");*/
    /*calculadora*/
    int dato1=0;
    int dato2=0;
    char opera=0;
    float resultado=0;
pedir_numero();
 // printf("ingrese primer dato: \n",dato1);
    scanf("%d", &dato1);
    printf("ingrese la operacion:\n",opera);
    fflush(stdin);/*es para borrar el bufer*/
    scanf("%c", &opera);
    printf("ingrese segundo dato :\n",dato2);
    scanf("%d", &dato2);

    switch(opera){
             case'+':
                resultado=dato1+dato2;
                break;
             case'-':
                resultado=dato1-dato2;
                break;
             case'*':
                resultado=dato1*dato2;
                break;
             case'/':
                 if(dato2!=0){
                                 resultado=(float)dato1/dato2;
                             }
                else{
                    printf("el dato2 es 0 no se puede realizar la operacion");
                    }
                 break;
                  }
    printf("\n los datos ingrasados: %d ,%c ,%d \n: " ,dato1, dato2, resultado);
    printf("la operacion es:%f \n", resultado);
   /* printf("la operacion es:%f \n", resultado);
    printf("la operacion es:%f \n", resultado);
    printf("la operacion es:%f \n", resultado);*/


    return 0;
}
void pedir_numero()
{
    printf("tipear numero:n");
}
