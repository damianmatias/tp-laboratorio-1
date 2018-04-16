#include <stdio.h>
#include <stdlib.h>
#include <string.h>//variable de tipo string
int main()
{
    char palabra[100]="chau";
    char palabra2[100]="hola";//solo guarda 9 caracteres
    int cantidad;
    int comparar;//strcpy("destino", "origen")
    // printf("ingrese una palabra :\n ");
    // fflush(stdin);
     //scanf("%s", palabra);

//la funcion especificao

       // gets(palabra);
       // strlen(palabra);

        comparar = stricmp(palabra , palabra2);

       // strcpy("destino", "origen"); asi seria
       //strcpy("palabra", "palabra2");
        strcat(palabra2,palabra);
        puts(palabra2);
            printf("Destino : %s -- Origen : %s",palabra,palabra2);

        // printf("%d" ,comparar);
       // printf("la palabra es : %s \n y tiene %d caracteres ",palabra,cantidad);
       return 0;

}



//strcat()funcion que concatiena







