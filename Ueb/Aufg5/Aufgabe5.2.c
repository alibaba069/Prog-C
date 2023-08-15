#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Diverses.h"
#define INCLR while (getchar()!='\12');
#define Size 5
#define MAX_SIZE 20

int main (void)
{
    int i,j,k;
    int n;
    double Dreieck[MAX_SIZE];
    char beenden;

    /* Wiederhohlungsprogramm */
 do 
 {
        /* Eingabe der Zahl */
    do 
    {
        printf("Geben Sie eine Zahl zwichen 1 bis 20 um ein Zahlendreick zu erstellen:  ");
        k=scanf("%d",&n); INCLR
    } while (k>1 || n<=0 || n>MAX_SIZE);

printf("\n");

    /* Einlesen der Zahlen */

    for (i=0;i<n;i++)
    {
        printf("Geben Sie die %d. Zahl ein : ", i+1);
        scanf("%lf",&Dreieck[i]); INCLR
    }
    printf("\n");

    /* Ausgabe der Zahlen */
    
    for (i=0; i<n ;i++)
    {
        printf("%.2lf  ",Dreieck[i]);
    }
    printf("\n");
    for (j=n-1; j>0;j--)
        {
            for (i=0; i<j;i++)
            {
            Dreieck[i] = Dreieck[i+1] + Dreieck[i];
            printf("%.2lf  ",Dreieck[i]);
            }
            printf("\n");
        }
    printf("\n");
    printf("Wollen Sie das Programm beenden?\n J oder N:  ");
    scanf("%c",&beenden); INCLR
 } while (beenden == 'n' || beenden == 'N');
return 0;
}