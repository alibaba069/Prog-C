// Aufgabe 4

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g  9.81 
int main (void)
{
float höhe=0,Fallzeit=0,vmax=0;

printf(" \t\t gib h ein!\n");
scanf("%f",&höhe);
printf("Geben Sie die Fallzeit ein !\n");
scanf("%f",&Fallzeit);

//Rechnung


vmax = sqrt(2*höhe*g);


printf("vmax = %2.f\n", vmax);

    return 0;
}