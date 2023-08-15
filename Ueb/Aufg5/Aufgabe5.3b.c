#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INCLR while (getchar()!='\12');
#define MAX_SIZE 20

/* Vektoren Funktion*/
void vektoreinlesen (int dim, double* v)
{
    int i,k; 
    
    for (i=0;i<dim;i++)
    {
        do 
        {
            printf("%d. Zahl: ", i+1);
            k=scanf("%lf",&v[i]); INCLR
        } while (k<1);
    }
    printf("\n");
}
/* vektorberechnung Funktion */
void vektoraddition (int dim, double* v1, double* v2, double* sum)
{
    int i;
    for (i=0; i<dim ; i++)
    {
        sum[i] = v1[i] + v2[i];
    }
    printf("\n");
}
/* Skalarprodukt funktion */
double skalarprodukt (int dim, double* v1, double* v2)
{
    double sklprod=0;   
    int i; 
    for (i=0; i<dim; i++)
    {
        sklprod = sklprod + v1[i]*v2[i];
    }
    printf("\n");
 return sklprod;
}
/* Ausgabevektor Funktion*/

void ausgabevektor (int dim, double* v)
{
    int i;
    for (i=0;i<dim;i++)
    {
        printf("%.2lf\n",v[i]);
        
    }
    printf("\n");
}
/* Main Funtion */ 
int main (void)
{
    int i,j,k,n;
    double *x = NULL; //[MAX_SIZE];
    double *y = NULL; //[MAX_SIZE];
    double *Sum = NULL; //[MAX_SIZE];
    double sklprod;
printf("\n");
    /*Eingabe der Dimension*/
    do 
    {
        printf("Geben Sie bitte die Dimension an (<=20): ");
        k=scanf("%d",&n); INCLR
    } while (k>1 || n>20);

    /* dynamische Speicherverwaltung */
     x = (double*) malloc(n*sizeof(double));
     y = (double*) malloc(n*sizeof(double));
    Sum = (double*) malloc(n*sizeof(double));

    /* Eingabe des ersten Vektors */
    printf("Geben Sie die Werte für den ersten Vektor ein \n");
    vektoreinlesen (n,x);
   /* Eingabe des zweiten Vektors*/
    printf("Geben Sie die Werte für den zweiten Vektor ein \n");
    vektoreinlesen (n,y);
   /* Berechnung der Summe */
   vektoraddition(n,x,y,Sum);
   /* Ausgabe der Vektorsumme */
   ausgabevektor (n,Sum);
   /* Skalarprodukt*/
   sklprod = skalarprodukt(n,x,y);
   printf("Skalarprodukt: %.2f \n",sklprod);


   return 0;
}
