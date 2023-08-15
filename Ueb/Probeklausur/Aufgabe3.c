/* Aufgabe 3 Probeklausur */
#include <stdio.h>
#include <stdlib.h>
#define INCLR while (getchar()!='\12');

int main (void)
{

    int m1, cm1, mm1;
    int m2, cm2, mm2;
    int k;
    int Milimeter1;
    int Milimeter2;
    int Milimetersum;
    int msum, cmsum, mmsum;

    /* Einlesen der Werte für 1*/
    puts("\n\n Erste Längenangabe");
    do {
        printf("Geben Sie eine positive Längeneinheit in Meter für die erste Längenangabe: ");
        k=scanf("%d",&m1); INCLR
    } while (k<1);
    do {
        printf("Geben Sie eine positive Längeneinheit in Zentimeter für die erste Längenangabe: ");
        k=scanf("%d",&cm1); INCLR
    } while (k<1 || cm1 > 99);
    do {
        printf("Geben Sie eine positive Längeneinheit in Millimeter für die erste Längenangabe: ");
        k=scanf("%d",&mm1); INCLR
    } while (k<1 || mm1 > 9);

    /* Einlesen der Werte für 2*/

    puts("\n\n Zweite Längenangabe");
    do {
        printf("Geben Sie eine positive Längeneinheit in Meter für die zweite Längenangabe: ");
        k=scanf("%d",&m2); INCLR
    } while (k<1);
    do {
        printf("Geben Sie eine positive Längeneinheit in Zentimeter für die zweite Längenangabe: ");
        k=scanf("%d",&cm2); INCLR
    } while (k<1 || cm2 > 99);
    do {
        printf("Geben Sie eine positive Längeneinheit in Millimeter für die zweite Längenangabe: ");
        k=scanf("%d",&mm2); INCLR
    } while (k<1 || mm2 > 9);

    /* Umwandlung von den Werten in mm */ 
    Milimeter1 = (m1*1000)+(cm1*10)+mm1;
    Milimeter2 = (m2*1000)+(cm2*10)+mm2;
    Milimetersum = Milimeter1+Milimeter2;

    /* Addition*/
    if (mm1+mm2 >9)
    {
        mmsum = (mm1+mm2)-10;
        if (cm1+cm2 >99)
         {
              cmsum = ((cm1+cm2)-100)+1;
         }
    msum =(m1+m2)+1;
   }
   else
   mmsum = mm1+mm2;
   cmsum = cm1+cm2;
   msum  = m1 + m2; 

    printf("\n\nDie Summe von %dm, %dcm, %dmm und %dm, %dcm, %dmm ist %dmm bzw. %dm, %dcm, %dmm.\n",m1,cm1,mm1,m2,cm2,mm2,Milimetersum,msum,cmsum,mmsum);
    return 0;
}