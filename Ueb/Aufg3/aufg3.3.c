#include<stdio.h>
#include<stdlib.h>

int main (void)
{

float Zinssatz, Sparrate, Gesamtguthaben, Zinsen;
  int Laufzeit, i;

// Sparrate
printf("\nGeben Sie die jährliche Sparrate ein: \n");
  printf("Sparrate:    "); scanf("%f",&Sparrate);
while (Sparrate < 0)
{
    printf("\nGeben Sie eine positive jährliche Sparrate ein: \n");
  printf("Sparrate:    "); scanf("%f",&Sparrate);
}
// Laufzeit
printf("\nGeben Sie die Laufzeit ein: \n");
  printf("Laufzeit:    "); scanf("%d",&Laufzeit);
while (Laufzeit < 0)
{
    printf("\nGeben Sie eine positive Laufzeit ein: \n");
  printf("Laufzeit:    "); scanf("%d",&Laufzeit);
}
// Zinssatz
printf("\nGeben Sie den Zinssatz ein: \n");
  printf("Zinssatz:    "); scanf("%f",&Zinssatz);
while (Zinssatz < 0)
{
    printf("\nGeben Sie einen positiven Zinssatz ein: \n");
  printf("Zinssatz:    "); scanf("%f",&Zinssatz);
}

/* Berechnung und Ausgabe der Tabelle */
  Gesamtguthaben = 0;
  printf("\n\nJahr    Zinsen    Guthaben\n");
  
  for (i = 1; i<=Laufzeit;i++)
  {
       Zinsen = (Gesamtguthaben+Sparrate)*Zinssatz/100.;
       Gesamtguthaben = Gesamtguthaben + Sparrate + Zinsen;
      printf("%4i  %8.2f  %10.2f\n",i,Zinsen,Gesamtguthaben);
  }
  /* Berechnung mit Zaehlschleife 
  for(i=1, erg=1.; i<=abs(e); i=i+1)
  {
      erg = erg*i;
  }     
   if (e < 0) erg = 1./erg;

  printf("\n%f^%d = %f\n\n", b, e, erg);
*/
    return 0;

}