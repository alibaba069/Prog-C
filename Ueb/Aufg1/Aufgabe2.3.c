#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{

    float a, b, c, x, p, q, D ;
    float l1,l2,l3,l4,l5;
    // Angabe
printf("Geben sie die Koeffezienten a,b und c ein !\n ");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

//  p und q
p= b/a
q= c/a 

//Rechnung
D = (p*p/4)-q


/* D>0 => -p/2 +- sqrt (D) printf => Gleichung hat zwei Lsg
   D=0 => p/2 => nur eine Lsg
   D<0 => -p/2 +-i * sqrt (D) => GL hat zwei komplexe Lsg

  */ 

if (D>0) l1=  (-p/2)+sqrt(D), l2 = (-p/2)-sqrt(D);
printf ("Die Lösung hat zwei reelle Lösungen \n", l1,l2 );
else if (D=0) l3 = p/2 ;
printf("Die Lösung hat nur eine reelle Lösung\n",l3);
    return 0; 

}