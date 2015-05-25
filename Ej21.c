#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i;

   printf ("Ingrese un numero para ver su tabla de multiplicar: ");
   scanf ("%d", &num);

   while (num <0 || num >10)
   {
   	printf ("Error. Ingrese un numero para ver su tabla de multiplicar: ");
    scanf ("%d", &num);
   }

   for (i=0; i<11; i++)
   {
   	printf ("\n\n%d x %d = %d", num, i, num*i);
   }
   getche();
	
	return 0;
}
