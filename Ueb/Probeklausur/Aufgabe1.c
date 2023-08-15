 /*Probeklausur C  1 */
#include <stdio.h>
#include <stdlib.h>
#define INCLR while (getchar()!='\12');

int main (void)
{
    int i,k;
    float a,b,c;
    char weiter;
do {
do 
{
    printf(" Geben Sie eine Kommazahl ein: ");
    k=scanf("%f",&a); INCLR
} while (k<1);
do 
{
    printf(" Geben Sie eine Kommazahl ein: ");
    k=scanf("%f",&b); INCLR
} while (k<1);
do 
{
    printf(" Geben Sie eine Kommazahl ein: ");
    k=scanf("%f",&c); INCLR
} while (k<1);

if (a == b && b==c && a==c)
{
    printf("Die Zahlen sind gleich\n");
}
else if (a==b && b!=c && a!=c)
{
    printf("Nur zwei Zahlen sind gleich. Wert=%.2f \n ",a);
}
else if (a!=b && b!=c && a==c)
{
    printf("Nur zwei Zahlen sind gleich. Wert=%.2f \n ",c);
}
else if (a!=b && b==c && a!=c)
{
    printf("Nur zwei Zahlen sind gleich. Wert=%.2f \n ",b);
}
else 
{
    printf("Keine Zahlen sind gleich.\n");
}
do 
{
printf(" Wollen Sie weiter machen? : (J/j) oder (N/n) \n");
k=scanf("%c",&weiter); INCLR
} while (k<1);
} while(weiter == 'J'||'j');
}


/* Nummer 1 

#include <stdio.h>
#include <stdlib.h>
#define INCLR while (getchar()!='\12');

int main (void)
{
    float a,b,c;
    int k;
    char weiter;
do{
    printf("Geben Sie drei Kommazahlen ein!\n");

    do {
        printf("1. Zahl: ");
        k=scanf("%f",a); INCLR
    } while (k<0);

    do {
        printf("2. Zahl: ");
        k=scanf("%f",b); INCLR
    } while (k<0);

    do {
        printf("3. Zahl: ");
        k=scanf("%f",c); INCLR
    } while (k<0);

    if (a==b) // a == b == c und a == b != c
    {
        if (b==c)
        {printf("Alle Zahlen sind gleich. Wert: %f\n",a);}
        else //(b!=c)
        { printf(" Nur zwei Zahlen sind gleich. Wert: %f\n",a);}
    }
    else if (a!=b) // b != a == c und a!= b != c
    {
        if (a==c)
        {printf("Nur zwei Zahlen sind gleich. Wert: %f\n",a)}
        else //(a!=c)
         {printf("Alle Zahlen sind nicht  gleich.\n");}
    }
    else  (b==c) // b == c != a und a == b == c
    {
        if (b!=a)
        {printf("Nur zwei Zahlen sind gleich. Wert: %f\n",b)}
         else //(b==a)
         {printf("Alle Zahlen sind gleich. Wert: %f\n",a);}

        do {
          printf(" Wollen Sie weiter machen? : (J/j) oder (N/n) \n");
          k=scanf("%c",&weiter); INCLR
         } while (k<1);
    }
}while (weiter == 'J' || 'j');

}
*/