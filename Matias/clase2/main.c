#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

    /*ingresar numeros positivos(validar que seapositivo)hasta que el usuario quiera
       informar a:la cantidad de numeros pares
                b: el promedio de todos los numeros ingresados
                c:la suma de todos los numero
                d:el numero maximo y numero minimo*/


      int mayor;
      int menor;
      float promedio;
      int ingresado;
      int contadorpares=0;
      int pares;
      int impares;
      char seguir =  's' ;
      int contnumero=0;
      int suma=0;
      int flag=0;

     while(seguir=='s')
        {
             printf("ingrese un numero positivo :\n ");
             scanf("%d", &ingresado);

                    while(ingresado<=0){

                                        printf("reingrese otro numero :\n");
                                        scanf("%d" , &ingresado);

                                       }

              if(ingresado%2==0){

                                  contadorpares++;
                                }

               contnumero++;
               suma=ingresado+suma;
               promedio=(float)suma/contnumero;/*se coloca el float delante para que el promedio de bien se llama casteo*/


               if(flag == 0 || ingresado > mayor){
                                               mayor=ingresado;
                                             }
                if(flag == 0|| ingresado < menor){
                                              menor=ingresado;
                                              flag = 1;
                                             }



              printf("queres seguir? :\n ");
              seguir=getch();/*limpia el registro getch*/






        }



  printf("los numeros pares son: %d\n",contadorpares);
              printf("el promedio es: %f\n",promedio);
              printf("la cantidad de numeros ingresados son: %d\n",contnumero);
              printf("sumatoria: %d\n",suma);









    return 0;
}
