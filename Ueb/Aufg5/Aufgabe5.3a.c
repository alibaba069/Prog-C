#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INCLR while (getchar()!='\12');
#define MAX_SIZE 20

int main (void)
{
    int i,j,k,n;
    double x[MAX_SIZE];
    double y[MAX_SIZE];
    double Sum[MAX_SIZE];
    double sklprod=1;

/* Angabe der Deminsion */
    do 
    {
        printf("Geben sie die Dimension der Vektoren an (MAX 20): ");
        k=scanf("%d",&n); INCLR
    } while (k>1 || n>20);

printf("\n");
/* Eingabe der Werte für X*/
printf("Geben Sie die Werte für den X-Vektor ein\n");
for (i=0;i<n;i++)
{
   do 
   { 
    printf("%d. Zahl: ",i+1); 
    k=scanf("%lf",&x[i]); INCLR 
   } while (k>1);    
}
printf("\n");
/* Eingabe der Werte für Y*/
printf("Geben Sie die Werte für den Y-Vektor ein\n");
for (i=0;i<n;i++)
{
    do 
    {
    printf("%d. Zahl: ",i+1);
    k=scanf("%lf",&y[i]); INCLR  
    } while (k>1); 
}
printf("\n");
/* Berrechnung der Summe */

for (i=0;i<n;i++)
{
Sum[i] = x[i] + y[i];
 sklprod = sklprod + x[i]*y[i];
}
printf("\n");

/* Ausgabe des Vektors*/

for (i=0;i<n;i++)
{
    printf("%.2lf", Sum[i]);
    printf("\n");
    
}
printf("\n\nSkalarprodukt: %.2f\n", sklprod); 
    return 0;
}