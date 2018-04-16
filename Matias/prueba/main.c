#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    /*int -- float -- char */

    int numero1;
    float numero2;
    float suma;
    char letra;


    printf("ingrese el primer numero");
    scanf("%d", &numero1);

    printf("ingrese el segundo numero");
    scanf("%f", &numero2);

    printf("ingrese una letra: ");
   /* fflush(stdin);*/
    scanf("%c", &letra);
    letra = getch();


    suma= numero1+numero2;
    /*printf("el primer numero es: %d y el segundo numero");*/
    printf("la suma de los dos numeros ingresados es : % 2.f", suma);
    printf("la letra es : %c", letra);
    return 0;
}
