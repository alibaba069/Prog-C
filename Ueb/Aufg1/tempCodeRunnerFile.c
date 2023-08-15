//aufgabe 7
/* Datei aufg1-7.c */
/* Umrechnung von Winkelmaß in Bogenmaß */
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
double winkelbogen;
double faktor = 3.141592654/360;
printf("Geben Sie den Winkel im Winkelmass ein: \n");
scanf("%f", &winkelbogen);
//Rechnung
bogen = winkel*faktor;
printf(" \t Ein Winkel von %f Grad entspricht %f rad \n\n", winkelbogen);
system("Pause");
}
