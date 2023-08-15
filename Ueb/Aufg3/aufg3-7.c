/* aufg3-7.c */
/* Umwandlung eines Sekundenbetrages */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int sekunden, x;
  int ww, tt, hh, mm, ss;
  
  /* Starteingabe */
  printf("Gib Sekunden an: "); scanf("%d", &sekunden);

  while (sekunden>=0)
  {
    /* Berechnung */
    ss = sekunden % 60;  /* Sekunden          */
    x  = sekunden / 60;  /* restliche Minuten */
    mm = x % 60;         /* Minuten           */
    x  = x / 60;         /* restliche Stunden */
    hh = x % 24;         /* Stunden           */
    x  = x / 24;         /* restliche Tage    */
    tt = x % 7;          /* Tage              */
    ww = x / 7;          /* Wochen            */
    
    /* Ausgabe */
    printf("Das sind %d Woche", ww);
    if (ww!=1) { printf("n"); }
    printf(", %d Tag", tt);
    if (tt!=1) { printf("e"); }
    printf(", %d:", hh);
    printf("%02d:", mm);
    printf("%02d Stunden\n", ss);
    
    /* neuer Sekundenwert */
    printf("\nGib Sekunden an (Ende bei -1): "); scanf("%d", &sekunden);
  }

  system("PAUSE");
}
