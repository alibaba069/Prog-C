/* aufg3-4.c */
/* Berechnung von ln z für 0 < z <= 2 durch Reihenentwicklung um 1 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  double eps, x, potenz, summand, ergebnis;
  int i;
  
  /* Eingabe */
  do
  {
    printf("Eingabe des Arguments x mit 0 < x <=2: "); scanf("%lf",&x);
  }
  while ((x <= 0) || (x > 2));
  do
  {
    printf("Genauigkeitsschranke eps mit eps > 0:  "); scanf("%lf",&eps);
  }
  while (eps <= 0);

  /* Initialisierung */
  i = 1;
  potenz = x-1;
  summand = potenz/i;
  ergebnis = summand;
  /* printf("\n%f %f %f", potenz, summand, ergebnis); */
  
  /* Berechnung */
  do
  {
    i=i+1;
    potenz=-potenz*(x-1);
    summand=potenz/i; 
    ergebnis=ergebnis+summand;
    /* printf("\n%d %f %f %f", i, potenz, summand, ergebnis); */
  }
  while (fabs(summand) > eps);
                                                    
  /* Ausgabe */
  printf("\n\nln(%f) = %f   aus %d Summanden\n", x, ergebnis, i);
  printf("\nln(%f) = %f (Kontrolle)\n\n", x, log(x));
  system("PAUSE");
}
