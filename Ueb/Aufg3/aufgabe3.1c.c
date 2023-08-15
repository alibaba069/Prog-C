#include <stdio.h>
#include <stdlib.h>


int main (void) 
{
int num , exp, res=1, i;

 // Eingabe
printf("Geben Sie die Zahl ein\n");
scanf("%d",&num);

printf("Geben Sie den Exponenten ein.\n");
scanf("%d",&exp);
while (exp <0) // Exponent darf nicht negativ sein
{
printf("Geben Sie einen positiven Exponenten ein\n");
scanf("%d",&exp);
}
// Berechnung 

if (exp == 0) /* Ist Exp gleich 0 dann ist res = 1 */
{
    res = 1;
}
else     
{
for(i=1;i<=exp;i++)
{
res = res * num;
}
}
printf("res = %d ^ %d = %d\n", num,exp, res);

return 0;

}
