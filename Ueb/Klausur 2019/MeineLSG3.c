#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INCLR while (getchar()!='\12');

typedef struct cylinder {
    double r,h;
}Cylinder;

int read_cylinder(Cylinder *arg)
{
    int k;
   do {
    k= scanf("%lf",&arg->r); INCLR
      k=   scanf("%lf",&arg->h); INCLR
   } while (k<1);

    if (arg->r <0 || arg->h<0)
    {return -1;}
    else return 1;
    
}

double volume_cylinder (Cylinder *arg)
{
   double Volumen = M_PI*(arg->r)*(arg->r)*(arg->h);
    return Volumen;
}

int main (void)
{
    Cylinder Zylinder1;
    Cylinder Zylinder2;
    int a;
    int b;
    double ergebnis1;
    double ergebnis2;

      printf("Geben Sie den Radius und die Höhe des ersten Zylinders in cm an:");
      a = read_cylinder(&Zylinder1);
    
      printf("Geben Sie den Radius und die Höhe des zweiten Zylinderes in cm an: ");
      read_cylinder(&Zylinder2);
      if (a == -1 || b == -1 ) 
       {
         printf("Eine negative Zahl wurde eingegeben.  ERROR  \n ");
         return 0;
       }
      else
          ergebnis1 = volume_cylinder (&Zylinder1);
          ergebnis2 = volume_cylinder (&Zylinder2);
        
           printf("Zylinder 1: Radius %2.lf, Hoehe: %2.lf, Volumen: %2.lf \n", Zylinder1.r,Zylinder1.h,ergebnis1);
           printf("Zylinder 2: Radius %2.lf, Hoehe: %2.lf, Volumen: %2.lf \n", Zylinder2.r,Zylinder2.h,ergebnis2);

      if (ergebnis1 == ergebnis2)
        {
         printf("Die Volumen sind gleich!\n");
        }
     else 
        printf("Die Volumen sind unterschiedlich!\n");

      return 0;
}