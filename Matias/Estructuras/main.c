#include <stdio.h>
#include <stdlib.h>
#define LONG 30

typedef struct
{
    int legajo;
    char nombre[LONG];
    int nota1;
    int nota2;
    float promedio;
    char mail[50
    ];



}eAlumno;


void mostrarAlumno(eAlumno);

int main()
{

   //printf("%d", sizeof(eAlumno)); para ver la memoria

   eAlumno miAlumno;
   miAlumno.legajo=20;
   miAlumno.nota1=10;
   miAlumno.nota2=5;
   strcpy(miAlumno.nombre,"juan");
   miAlumno.promedio = (float)(miAlumno.nota1+miAlumno.nota2)/2;
   strcpy(miAlumno.mail, "jkhsakaklj@llfkja.com.ar");


    mostrarAlumno(miAlumno);

    return 0;
}
void mostrarAlumno(eAlumno alumnito)
{

    printf(" %d-- %s-- %d-- %d-- %f \n", alumnito.legajo, alumnito.nombre, alumnito.nota1, alumnito.nota2, alumnito.promedio, alumnito.mail);
}
