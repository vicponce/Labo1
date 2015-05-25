#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int num, cuadrado, cubo, i;

	printf ("\n\nIngrese un numero: ");
	scanf ("%d", &num);


   while (num <1)
   {
   	printf ("Error. Reingrese numero: ");
    scanf ("%d", &num);
   }
   printf ("\n\n\t\t\tNUMERO\t\tCUADRADO\t\tCUBO");

   for (i=1; i <= num; i++)
   {
   	cuadrado = i*i;
    cubo = i*i*i;
	printf ("\n\n\t\t\t      %d\t\t        %d\t\t    %d", i, cuadrado, cubo);
   }
   getche();
	
	return 0;
}
