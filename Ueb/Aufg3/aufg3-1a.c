/* aufg3-1a.c */
/* Berechnung der n-ten Potenz einer ganzen Zahl
   mit einer fussgesteuerten Schleife */

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
  if (e == 0) erg=1;  /* Ueberpruefung des Exponenten auf 0 */
  else
  {
	erg=1; i=0;  /* Initialisierungen */
	do  /* do-while-Schleife */
	{ 
	  erg=erg*b;
	  i=i+1;
	} 
	while (i<e);
  }
  
  /* Ausgabe */
  printf("\n%d^%d = %d\n\n", b, e, erg);
  return 0;
}
