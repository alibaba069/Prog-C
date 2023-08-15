/* Datei aufg1-1.c */
/* Berechnung der Summe zweier Zahlen */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int a;
  int b;
// eingabe der Zahlen 
printf("Geben Sie eine Zahl für a ein\n");
scanf("%d",&a);
printf("Geben Sie eine Zahl für b ein\n");
scanf("%d",&b);
  /* Berechnung */
 int Summe = a+b;

  /* Ausgabe des Ergebnisses */
   printf(" Summe = %d\n",(Summe=a+b));

    return 0;
}

