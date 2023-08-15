#include <stdio.h>
#include <stdlib.h>

 
/* function declaration */
void swap1(int x, int y);
 void swap2(int *x, int *y);
 void swap3(int **x, int **y);
int main (void)
 {

   /* local variable definition */
   int a=1;
   int b=0;
 printf(" .................................................Variante 1 ..................................................\n ");
   printf("Wert von a vor swap: %d \n", a);
   printf("Wert von b vor swap : %d \n", b);
   /* calling a function to swap the values */
   swap1(a,b);
 
   printf("Wert von a nach swap : %d\n", a );
   printf("Wert von b nach swap : %d\n", b );

 printf(" .................................................Variante 2 ..................................................\n ");
  printf("Wert von a vor swap: %d \n", a);
   printf("Wert von b vor swap : %d \n", b);
   /* calling a function to swap the values */
   swap2(&a,&b);
 
   printf("Wert von a nach swap : %d\n", a );
   printf("Wert von b nach swap : %d\n", b );

printf(" .................................................Variante 3 ..................................................\n ");

 printf("Wert von a vor swap: %d \n", a);
   printf("Wert von b vor swap : %d \n", b);
   
   swap3(&a,&b);
 
   printf("Wert von a nach swap : %d\n", a );
   printf("Wert von b nach swap : %d\n", b );
   
   return 0;
}
void swap1(int x, int y)
{
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */
  
  return;
}

void swap2 (int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}


void swap3 (int **x , int **y)
{
    int *temp;
    *temp = *x; 
   *x = *y;   
   *y = *temp; 
}