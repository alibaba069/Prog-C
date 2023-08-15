#include <stdio.h>
#include <stdlib.h>

# define M_PI		3.14159265358979323846	/* pi */
int main (void)

{

float radius,höhe,Volumen;

höhe = 0;
radius = 0;
Volumen = 0;
printf("Geben Sie den Radius und Höhe ein. \n");
scanf("%f",&radius);
scanf("%f",&höhe);

Volumen = radius * radius * M_PI * höhe;
printf("Volumen = %2.f cm^3  \n" ,(Volumen = radius * radius * M_PI * höhe));

return 0;

}
