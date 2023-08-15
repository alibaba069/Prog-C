#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void)

{
double x=0;
double p1, p2, p3;
// Angabe 
printf("\n Geben Sie die Masse in kg an.\n");
scanf("%lf",&x);

// Angebot 1
if (x<=5000) p1 = x*0.51;
else if (x>5000) p1 = (x*0.51)*0.97;
//printf("p1 = %lf\n",p1 );

//Angebot 2
if (x<=15000) p2 = (x*0.536)*0.97; 
else if (x>15000) p2 =(x*0.536)*0.95*0.97;
//printf("p2 = %lf\n",p2);
// Angebot 3

if (x<=3000) p3 = (x*0.529);
else if (x>3000) p3 = (x*0.529)*0.965*0.98;
//printf("p3 = %lf\n", p3);

// günstigstes Angebot

if (p1<p2) 
printf ("Sie müssen %lf zahlen. \n",p1);
else if (p1 < p3)
printf ("Sie müssen %lf zahlen. \n",p1);
else if (p2<p1)
printf ("Sie müssen %lf zahlen. \n",p2);
else if (p2 <p3)
printf("Sie müssen %lf zahlen. \n",p2);
else if (p3)
printf("Sie müssen %lf zahlen. \n",p3);
   return 0;
}