#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

int main(void)
{
    int feld[10];
    int check, Anzahl_Zahlen;

    //einlesen der Werte vom User
    do{
        printf("Anzahl der einzugebenden ganzen Zahlen (min 2, max10): ");
        check = scanf("%d", &Anzahl_Zahlen); INCLR
    }while(check != 1);

    if(Anzahl_Zahlen < 2 || Anzahl_Zahlen > 10){
        puts("Fehlermeldung - Abbruch!");
        return 0;
    }
    
    check = 0;
    do{
        printf("Geben Sie %d ganze Zahlen ein: ", Anzahl_Zahlen);
        for(int i = 0; i < Anzahl_Zahlen; i++){
            check += scanf("%d", &feld[i]);
        } INCLR
    }while(check != Anzahl_Zahlen);

    //operation von <= und > 
    for(int i = 0; i < Anzahl_Zahlen; i++){
        printf("%d", feld[i]);
        if(i == Anzahl_Zahlen-1)break;

        if(feld[i] <= feld[i+1]){
            printf(" <= ");
        }else{
            printf(" > ");
        }
    }puts("");

    return 0;
}