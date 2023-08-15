#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
double a,b,c; 
double p,q;
double D;
double l1,l2,l3,l4,l5,l6,l7;

//Eingabe der Werte 

printf("Geben Sie für a,b und c passende Werte ein. \n");
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
 
 //printf("Folgende Werte für a, b und c wurden eingelsesen: a=%lf , b=%lf und c=%lf \n",a,b,c);
// Berechnung 

 p = b/a;
 q= c/a;

 // D

 D = ((p*p)/4)-q;

/* (D>0) => (-p/2) + sqrt(D) , (-p/2) - sqrt(D)*/
//printf("D = %lf\n" , D);

// Nullstellenberechnung 
l1 = (-p/2) + sqrt(D) , l2 = (-p/2) - sqrt(D);
l3 = (-p/2);
l4 = (-p/2);
l5 =  sqrt(-D) ;
l6 =  (-p/2);
l7 =  sqrt(-D);

if (D>0) 
{
printf("l1 = %lf und l2 =%lf\n", l1 ,l2);
}
else if (D==0)
{
    printf("l3 = %lf \n", l3);
}
else 
{
printf("l4 = %lf + %lf*i und %lf - %lf*i \n",l4,l5,l6,l7);
}
    return 0;
}