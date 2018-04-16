#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()//ordenamiento
{
    int vector[5] = {5, 6, -3, 9, 4};
    int aux;
    int i;
    int j;

    int maximo;

    for(i=0; i<TAM-1; i++)//flecha negra
    {
        for(j= i+1; j<TAM; j++)
        {
            if(vector[i] > vector[j])
                {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
                }
        }
    }
    return 0;
}

