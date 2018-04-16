#include <stdio.h>
#include <stdlib.h>


float sumar(int numero1, int numero2);
void pedir_numero();
int leer_numero(void);
int pedir_y_leer_numero(void);
char pedir_operador(void);
int calcular(int numero1, char operador, int numero2);

int main()
{
    int numero1, numero2;
    float resultado;
    char operacion;
    resultado=0;
    numero2=0;

   // printf("Ingrese un numero\n");
    pedir_numero();
   // scanf("%d",&numero1);
    numero1=leer_numero();
   // printf("Ingrese la operación: + para suma, * para multiplicar, - resta, / division ");
   // fflush(stdin);
    scanf("%c", &operacion);
    numero2=pedir_y_leer_numero();
  //  printf("\n Ingrese el segundo numero\n");
   // fflush(stdin);
    //scanf("%d", &numero2);
    operacion=pedir_operador();
   /* switch (operacion)
    {
    case '+':
        resultado=sumar(numero1,numero2);
        break;
    case '*':
        resultado=(float)numero1*numero2;
        break;
    case '-':
        resultado=(float)numero1-numero2;
        break;
    case '/':
        if(numero2 !=0)
        {
            resultado=(float)numero1/numero2;

        }
        else
        {
            printf("el numero2 es 0, no se puede realizar la operacion");
        }
        break;

    }*/
    printf(" %d  %c  %d ", numero1, operacion, numero2 );
    printf("El resultado es : %f", resultado);

    return 0;
}
float sumar(int numero1, int numero2)
{
    float resultado;
    resultado=numero1+numero2;


    return resultado;
}
void pedir_numero(void)
{

printf("Tipear un numero:\n");
}

int leer_numero(void)
{
    int numeroUno;
    scanf("%d",&numeroUno);
    return  numeroUno;
}
int pedir_y_leer_numero(void)
{
    int retorno;
    pedir_numero();
    retorno=leer_numero();
    return(retorno);
}
char pedir_operador()
{
    char operador;
    do{
    printf("Ingrese la operación: + para suma, * para multiplicar, - resta, / division ");
    fflush(stdin);
    scanf("%c", &operador);
      }
      while(operador !='*' && operador !='/' && operador !='-' && operador !='+');
      return (operador);


}
