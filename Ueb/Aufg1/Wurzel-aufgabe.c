#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{

// Berechnung von sqrt 1+x^2 
 float x, zahl;
 x=0;
 zahl=0;
 printf("Geben Sie für X einen Wert ein !\n");
 scanf("%f", &x);

 // Rechnung 
zahl = sqrt(1+x*x);
printf("zahl = %f\n", zahl);

// (1+x)/(1-x)
double x, l;
x=0;
l=0;

printf("Geben Sie eine Zahl für x ein !\n");
scanf("%f", &x);
//Rechnung
l = (1+x)/(1-x);
printf ("l = %f", &l); 
    return 0;
}