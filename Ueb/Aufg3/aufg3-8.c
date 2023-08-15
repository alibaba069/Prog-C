/* aufg3-8.c */
/* Summe der ungeraden Zahlen von 0 bis max */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int max, i, summe;
  printf("Gib positive ganze Zahl ein: ");
  scanf("%d", &max);
  if (max>0)
  {
    summe=0;
    for (i=0; i<=max; i=i+1)
    {
      if (i%2==1) { summe=summe+i; }
    }
    printf("Das Ergebnis ist: %d", summe);
  }
  else { printf("Unzulaessige Eingabe!"); }
  printf("\n");
  system("PAUSE");
}
