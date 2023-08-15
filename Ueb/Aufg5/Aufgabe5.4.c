
#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

void eingabeMesswerte (int anz,double* zahlen);
int main (void)
{
    double *Messwerte = NULL, Min, Max, Median;
    int n,k;
// Einlesen der Anzahl der Messwerte
    do {
    printf("Geben Sie die Anzahl der Messwerte an.\n");
    k=scanf("%d",&n); INCLR
    } while (k<1 || n<1);
//Eingabe der Werte
    
     Messwerte = (double*) malloc(n*sizeof(double));   // malloc immer vor der Funktion
     eingabeMesswerte (n,Messwerte);
    return 0;
}
// Eingabe des Feldes Funktion
void eingabeMesswerte (int anz , double* zahlen)
{
     int i,k; 
    
    for (i=0;i<anz;i++)
    {
        do 
        {
            printf("%d. Zahl: ",i+1);
            k=scanf("%lf",&zahlen[i]); INCLR
        } while (k<1);
    }
    printf("\n");
}
void min_max_median (int anz, double* zahlen, double *pmin, double *max, double *med);

void sortieren (int anz, double* folge)
{
    int i,j;
    double min, max;
    for (i=0;i < folge-1;i++)
    {
        for(j=0; j < folge; j++)
        {
            if (folge[j] > folge[j+1])
            {
                int temp = folge[j];
                folge[j] =folge[j+1];
                folge[j+1]= temp;
            }
        }

    }
}