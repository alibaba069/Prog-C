/* Probeklausur C 2. Aufgabe*/
#include <stdio.h>
#include <stdlib.h>
#define INCLR while (getchar()!='\12');
#include <string.h>

int main (void)
{
    int i;
    char Wort[20];
    int k;
    int count =0;

    /* Eingabe de Wortes*/
   //do {
    puts("\nGeben Sie bitte ein Wort ein (maximal 20 Zeichen)");
    fgets(Wort,20,stdin);
   // k=scanf("%s",Wort); INCLR
  //  } while (k<1);

    /* dynamische Speicherverwaltung 
    Wort = (char*) calloc(20,sizeof(char));
*/
    /* Überprüfen auf au*/

    for (i=0;i<20-1;i++)
    {
        if (Wort[i]=='a' && Wort[i+1]=='u')
        { Wort[i]+=4;
          Wort[i+1]-=12;
          count+=2;
        }
        
        if (Wort[i]=='A' && Wort[i+1]=='u')
        { Wort[i]+=4;
          Wort[i+1]-=12;
          count+=2;
        }
       
        if (Wort[i]=='a' && Wort[i+1]=='U')
        { Wort[i]+=4;
          Wort[i+1]-=12;
          count+=2;
        }
        
        if (Wort[i]=='A' && Wort[i+1]=='U')
        { Wort[i]+=4;
          Wort[i+1]-=12;
          count+=2;
        }    
      //  else count=0;

    }
    /* Ausgabe des Wortes*/
    printf(" \nWort nach der Operation: %s\n",Wort);

    printf("%d %s\n",count, Wort);
    return 0; 
}