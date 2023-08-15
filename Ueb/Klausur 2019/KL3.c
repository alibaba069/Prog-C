#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Diverses.h"

struct cylinder{
    double r, h;
};

int read_cylinder(struct cylinder *arg)
{
    int check;
    do{
        check = scanf("%lf%lf", &arg->r, &arg->h); INCLR
    }while(check != 2);
    
    return arg->r < 0 || arg->h < 0 ? -1 : 0;
}

double volume_cylinder(struct cylinder *arg)
{
    return arg->h * arg->r * arg->r * M_PI;
}

int main(void)
{
    struct cylinder Zylinder1;
    struct cylinder Zylinder2;
    int check;

    //einlesen der Werte (über eine Funktion) vom User
    printf("Radius und Höhe des ersten Zylinders: ");
    check = read_cylinder(&Zylinder1);
    if(check == -1){
        puts("Eingabefehler - Abbruch");
        return 0;
    }
    printf("Radius und Höhe des zweiten Zylinders: ");
    check = read_cylinder(&Zylinder2);
    if(check == -1){
        puts("Eingabefehler - Abbruch");
        return 0;
    }

    //Berechnung der Volumen
    double ergebnis1 = volume_cylinder(&Zylinder1);
    double ergebnis2 = volume_cylinder(&Zylinder2);

    //ausgage der Lösungen
    printf("Zylinder 1: Radius: %lf, Hoehe: %lf, Volumen: %lf\n", Zylinder1.r, Zylinder1.h, ergebnis1);
    printf("Zylinder 2: Radius: %lf, Hoehe: %lf, Volumen: %lf\n", Zylinder2.r, Zylinder2.h, ergebnis2);
    if(ergebnis1 == ergebnis2){
        puts("Die Volumen der Zylinder sind gleich.");
    }else if(ergebnis1 > ergebnis2){
        puts("Das Volumen von Zylinder 1 ist größer als das von Zylinder 2");
    }else{
        puts("Das Volumen von Zylinder 2 ist größer als das von Zylinder 1");
    }

    return 0;

}