#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float x,y,z;
    float E;
    float S1,S2,S3,S4,S5;

    printf("Geben Sie ihr Einkommen ein.\n");
    scanf("%f",&E);

    //printf("E = %d\n",E);
    // x,y,z

    x = E;
    y = (x-7664)/10000;
    z = (x-12739)/10000;

 //printf("x= %f , y = %f und z=%f .\n",x,y,z);
    //Berechnungen
    S1 = 0;
    S2 = (883.74*y + 1500)*y;
    S3 = (228.74*z + 2397)*z + 989;
    S4 = (0.42*x) - 7914;
    S5 = (0.45*x) - 15414;

 if (E<7664) 
 {
     printf("Sie müssen keine Steuer zahlen. \n");
 }
 else if (E>=7664 && E<12740) 
 {
     printf("Sie müssen %f € Steuer zahlen.\n",S2);
 }
 // Berechnung für Steuer zwischen 7664 und 12739
else if (E>=12740 && E<52152)
{
printf("Sie müssen %f € Steuer zahlen. \n",S3);
}
else if (E>52151 && E<250001)
{
    printf("Sie müssen %f € Steuer zahlen. \n",S4);
}
else if (250001<E)
{
    printf("Sie müssen %f € Steuer zahlen. \n",S5);
}
return 0;
}