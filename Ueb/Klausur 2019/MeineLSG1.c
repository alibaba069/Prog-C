#include <stdio.h>
#include <stdlib.h>
#define INCLR while (getchar()!='\12');
int main (void)
{
    int feld[10];
    int k,n;
    int i,j;
    int temp;

    /* Aufforderung des Benutzers, die Anzahl der einzulesender Zahl einzugebn */
    printf("\n Wie viele ganze Zahlen wollen Sie einlesen (mindestens 2 und maximal 10: ");
    scanf("%d",&n); INCLR
    if (n<2 || n>10)
    {
        printf("Abbruch\n");
        return 0;
    }

    for (i=0;i<n;i++)
    {
         printf("%d.Zahl: ",i+1);
         scanf("%d",&feld[i]); INCLR
    }

    /* Reihenfolge ordnen 

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (feld[j]>feld[j+1])
            {
                temp = feld[j];
                feld[j] = feld[j+1];
                feld[j+1] = temp;
            }
        }
    } */

    for (i=0; i<n; i++)
    {
        printf("%d",feld[i]);
        if (feld[i] > feld[i+1])
        printf(" > ");
        else if (feld[i] == feld[i+1])
        printf(" <= ");
        else printf("< ") ;// feld[i] < feld[i+1]
       // Irgendein Fehler hier => ??? 
    } 
    printf("\n");
return 0;
}