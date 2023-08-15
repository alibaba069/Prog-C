#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* function declaration */
float Wurzel(float x, float y, float *erg);


int main () {

   /* local variable definition */
   float a;
   float b;
   float f;
 
   printf("Give the value of x : ");scanf("%f",&a);
   printf("Give the value of y : "); scanf("%f",&b);

 
  
    if (Wurzel(a,b,&f))
    {
        printf("Ergebnis = %.2f\n", f);
    }  
    else 
    {
        printf("Keine Lösung\n");
    }
 
   return 0;
}

float Wurzel( float x, float y, float *erg)
{
    float c;

    c= (x*x)-(y*y);
    if (c>=0)
    {
        *erg = sqrt(c);
        return 1;
    }
    else 
    {
        *erg = 0;
        return 0;
    }
}