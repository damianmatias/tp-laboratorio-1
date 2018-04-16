#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[],int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[],int[]);
float calcularPromedio(int, int);

int main()
{
    int legajos[TAM]={};  //conjunto de variables en este caso alumnos
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    do
    {
      printf("1.ALTAS \n2.MOSTRAR\n9.SALIR\nElija una opcion ");
      scanf("%d", &opcion);

      switch(opcion)
      {
          case 1:
              index = buscarLibre(legajos, TAM);
              if(index==-1)
              {
                  printf("no hay lugar disponible!!!");
              }
              else
              {


              printf("\ningrese legajo: ");
              scanf("%d", &legajos[index]);

              printf("\ningrese nombre: ");
              fflush(stdin);
              gets(nombre[index]);


              printf("\n ingrese Nota 1 : ");
              scanf("%d", &nota1[index]);

              printf("\n ingrese Nota 2 :");
              scanf("%d", &nota2[index]);

              promedio[index] = calcularPromedio(nota1[index],nota2[index]);


              break;

          case 2:

            mostrarAlumnos(int legajo[], char nombres[][20], int nota1[], int nota2[], float promedio[],int tam);




              }

      }
    }while(opcion!=9);



    return 0;
}
int buscarLibre(int legajos[],int tam)
{
    int index =-1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(legajos[i]==0)
        {
            index=i;
            break;
        }
    }
}
float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;

    return promedio;
}
void mostrarAlumnos(int legajo[], char nombres[][20], int nota1[], int nota2[], float promedio[],int tam)
{
    int i;
  for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                    {
                printf("\n%d \n%s \n%d \n%d \n%f \n", legajos[i], nombres[i],nota1[i], nota2[i],promedio[i]);
                    }
            }
}
