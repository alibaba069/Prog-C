/* aufg3-1b.c */
/* Berechnung der n-ten Potenz einer ganzen Zahl
   mit einer kopfgesteuerten Schleife */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int b, e, erg, i;

  /* Eingabe */
  printf("\nGeben Sie Basis und Exponenten ein: \n");
  printf("Basis:    "); scanf("%d",&b);
  printf("Exponent: "); scanf("%d",&e);
  while (e<0)  /* Exponent muss >= 0 sein */
  {
    printf("Exponent darf nicht negativ sein!\nExponent: "); scanf("%d",&e);
  }

  /* Berechnung */
  erg=1; i=0;  /* Initialisierungen */
  while (i<e)  /* while-Schleife */
  { 
    erg=erg*b;
    i=i+1;
  } 
  
  /* Ausgabe */
  printf("\n%d^%d = %d\n\n", b, e, erg);
  system("PAUSE");
}
