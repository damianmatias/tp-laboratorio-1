#include <stdio.h>
#include <stdlib.h>
#define tam 5

int buscarEntero(int vector[], int TAM, int valor);

int main()
{
    int vector[tam] = (1,5,3,9,7);
    int index;
    int numero = 3;
    index = buscarEntero(vector, TAM, numero);
    if(index==-1)
        {
            printf("%d no se encuentra en el array\n", numero);

        }
        else
        {
          printf("el numero %d , tiene la posicion %d" ,numero , index);
        }

    return 0;
}
int buscarEntero(int vector[], int TAM, int valor)
{
    int indice = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(vector[i]==valor)
        {
            indice = i;
            break;
        }
    }


    return indice;
}
