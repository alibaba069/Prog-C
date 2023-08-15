/* aufg3-5.c */
/* Simulation eines einfachen Taschenrechners */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  float zahl, ergebnis=0;
  char symb='+';
  
  do
  {
    /* Eingabe der naechsten Zahl */
    printf("Gib Zahl ein                : "); scanf("%f", &zahl);
    while ((symb=='/') && (zahl==0))
    {
      printf("Division durch 0 nicht erlaubt!");
      printf("\nGib Zahl ein                : "); scanf("%f", &zahl);
    }
    
    /* Rechnen mit den letzten Werten von ergebnis, symb und zahl */
    switch (symb)
    {
      case '+':  ergebnis = ergebnis+zahl; break;
      case '-':  ergebnis = ergebnis-zahl; break;
      case '*':  ergebnis = ergebnis*zahl; break;
      case '/':  ergebnis = ergebnis/zahl;
    }
    
    /* Ausgabe des Zwischenergebnisses */
    printf("\nZwischenergebnis            : %f", ergebnis);
    
    /* Eingabe des naechsten Operators */
    getchar();
    printf("\nGib Operator ein (+,-,*,/,=): "); scanf("%c", &symb);
    while ((symb!='+')&&(symb!='-')&&(symb!='*')&&(symb!='/')&&(symb!='='))
    {
      printf("Unbrauchbarer Operator!");
      getchar();
      printf("\nGib Operator ein (+,-,*,/,=): "); scanf("%c", &symb);
    }
  }
  while (symb!='=');
  
  /* Ausgabe des Endergebnisses */
  printf("Endergebnis                 : %f\n\n", ergebnis);
  system("PAUSE");
}
