/* aufg3-1c.c */
/* Berechnung der n-ten Potenz einer ganzen Zahl
   mit einer Zaehlschleife */

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
  for(i=1, erg=1; i<=e; i=i+1) { erg=erg*b; }  /* Zaehlschleife */
  
  /* Ausgabe */
  printf("\n%d^%d = %d\n\n", b, e, erg);
  system("PAUSE");
}
