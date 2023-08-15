#include <stdio.h>
#include <stdlib.h>
//#include "Diverses.h"
#include <math.h>


double sinhyp (double x)
{
  return (exp(x)-exp(-x))/2;
}

int main (void)
{
    double a, b, s,x,y;
    int i=0;

   do 
   { printf("Geben Sie den Anfangswert ein:   ");
    scanf("%lf",&a);
   }
   while (a < 0);

   do 
   {
    printf("Geben Sie den Endwert ein (soll größer als der Anfangswert sein):   ");
    scanf("%lf",&b);
   }
   while (b < a);

   do
   {
    printf("Geben Sie die Schrittweise an:  ");
    scanf("%lf",&s);
   }
   while (s<=0 || s<a || s>b);
    printf("\n");

    for ( x=a; x<b+s/2;x= x+s)
    {
        y = sinhyp(x);
        printf("x = %lf y = %lf\n",x,y);
    }


    return 0;
}

