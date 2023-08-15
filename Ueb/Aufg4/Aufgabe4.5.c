#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Power(float b , int e);
float Rekursion(float a, int n);

int main (void)
{
int Exponent;
float Basis;
float Ergebnis;

printf("Geben Sie die Basis an: "); scanf("%f",&Basis);
printf("Geben Sie einen Exponenten an: "); 
scanf("%d",&Exponent);
while(Exponent<0)
{
printf("Geben Sie einen positiven Exponenten an: ");scanf("%d",&Exponent);
}
/* Potenzberechnung mit iterativer Funktion */
Power(Basis,Exponent);
printf("Ergebnis ist (iterativ) %2.f\n",Power(Basis,Exponent) );

/* Potenzberechnung mit rekursiver Funktion */
Rekursion(Basis,Exponent);
printf("Ergebnis ist (rekursiv) %2.f\n",Rekursion(Basis,Exponent) );

    return 0;
}

float Power(float b , int e)
{
    int i;
    float sum=1;

    for(i=1; i<=e;i++)
    {
        sum = b*sum;
    }
    return sum;
}
float Rekursion(float a, int n)
{
    float sum=1;
    
    if (n == 0)
    {
        return 1.;
    }
    else 
    return a*Rekursion(a,n-1);
}