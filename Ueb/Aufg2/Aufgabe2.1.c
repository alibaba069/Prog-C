#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int h=0;
printf("\n Geben sie Ihre Höhe ein.\n");
scanf("%d", &h);
if (0<h && h<200)
{printf("Sie befinden sich in martines Klima.\n");}
else if  (200<h && h<1800)
{printf("Sie befinden sich im Regenwald.\n");}
else if (1800<h && h<2300)
{printf("Sie befinden sich in immergrüner Wald.\n");}
else if (2300<h && h<3500)
{printf("Sie befinden sich in alpines Klima.\n");}
else if (3500<h && h<4200)
{printf("Sie befinden sich im ewiges Eis.\n");}
else if (4200<h)
{printf("Sie im Himmel. RIP.\n");}
else if (0>h)
{printf("Verrecken Sie in der Hölle.\n");}
return 0;
}