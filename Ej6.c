#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int num;

	
   printf ("Ingrese un numero: ");
   scanf ("%d", &num);
   if (num%2==0)
   {
   	printf ("\nEl numero %d es par.", num);
   }
   else
   {
   	printf ("\nEl numero %d es impar.", num);
   }




	return 0;
}

