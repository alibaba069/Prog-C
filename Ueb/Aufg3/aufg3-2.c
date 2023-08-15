/* aufg3-2.c */
/* Berechnung der n-ten Potenz einer reellen Zahl
   mit einer Zaehlschleife, wobei der Exponent auch negativ sein darf */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  double b, erg;
  int e, i;

  /* Eingabe */
  printf("\nGeben Sie Basis und Exponenten ein: \n");
  printf("Basis:    "); scanf("%lf",&b);
  printf("Exponent: "); scanf("%d",&e);

  /* Berechnung mit Zaehlschleife */
  for(i=1, erg=1.; i<=abs(e); i=i+1) { erg=erg*b; }
  if (e < 0) erg = 1./erg; 
  
  /* Ausgabe */
  printf("\n%f^%d = %f\n\n", b, e, erg);
  system("PAUSE");
}
 
 