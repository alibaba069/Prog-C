#include <stdio.h>
#include <stdlib.h>

//RN


int main (void) 
{
int num , exp;
int i=0;
int res = 1 ;
 


printf("Geben Sie die Zahl ein\n");
scanf("%d",&num);

printf("Geben Sie den Exponenten ein.\n");
scanf("%d",&exp);
while (exp<0) 
{
printf("Geben Sie einen positiven Exponenten ein\n");
scanf("%d",&exp);
}
// Berechnung 

if (exp == 0)
{
    res = 1;
}
else     
{
while (i<exp)
{
res = res * num;
i++;
}
}
printf("res = %d ^ %d = %d\n", num,exp, res);

return 0;

}
