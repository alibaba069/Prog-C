#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Diverses.h"

int main(void)
{
    char wort1 [71];
    char wort2 [11];
    char wortNeu [71];
    int check = 0;

    //einlesen der Werte vom User
    do{
        puts("Geben Sie wort1 ein (<= 70 Zeichen):");
        check += scanf("%70s", &wort1); INCLR
        puts("Geben Sie wort2 ein (<= 10 Zeichen):");
        check += scanf("%10s", &wort2); INCLR
    if(check != 2);

    //Wort 2 von Wort 1 abziehen
    int i = 0, j = 0;
    while(wort1[i] != '\0')
    {
        if(strchr(wort2, wort1[i]) == NULL){
            wortNeu[j] = wort1[i];
            j++;
        }
        i++;
    }wortNeu[j] = '\0'; 

    //Ausgabe des neuen Worts
    printf("Wort 1 ohne die Zeichen von Wort 2: %s\n", wortNeu);

    return 0;
}