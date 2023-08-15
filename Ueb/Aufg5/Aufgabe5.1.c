#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Diverses.h"
#define INCLR while (getchar()!='\12');
#define Size 3
#define MAX_SIZE 30

int main (void)
{
    double Zahl[MAX_SIZE];
    int i,j,k;
    int n,u;
    int z=0;
    double min=0;
    double max = 0;
    char weiter;

do
{
/* Schleife für Eingabe der Nummer */
do 
{
    printf("Geben Sie eine Zahl von 1 bis 30 um eine Zahlenfolge zu erstellen: ");
    k=scanf("%d",&n); INCLR
} while (k<1 || n <= 0 || n > MAX_SIZE) ;
/* Eingabe der Zahlen im Array */

printf("\n");

for (i=0 ; i<n ; i++)
{
    printf("Geben Sie die Nummer %d ein: ", i+1);
   scanf("%lf",&Zahl[i]); INCLR
}

printf("\n");

 /* Ausgabe umgekehrter Reihenfolge */
 for (i=n ,z=0; i>0; i--, z++)             // Nur zwei Semi-colons wegen drei möglichen Feldern
 {
     printf("%.2lf  ", Zahl[i-1]);
     if (z == Size-1)                      // Size minus 1 weil es von Null anfängt
     {
         printf("\n");
         z=-1;
     }
 }
 printf("\n");

for (u=0;u<n;u++)
{
    if (Zahl[u] > max)
    {
        max = Zahl[u];
    }
    if (Zahl[u] < min)
    {
        min = Zahl[u];
    }
  
}
 printf("Minimum ist %.2lf \n", min);
 printf("Maximum ist %.2lf \n\n", max); 
printf("Programm beenden ? Ja oder Nein?\n");
scanf("%c",&weiter);
} while (weiter == 'n');
    return 0;
}