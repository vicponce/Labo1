#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])

{
int num1, num2, aux;

   printf ("\n\nIngrese primer valor: ");
   scanf ("%d", &num1);
   printf ("\n\nIngrese segundo valor: ");
   scanf ("%d", &num2);
   aux = num1;
   num1 = num2;
   num2 = aux;

   printf ("\n\n\n Los valores intercambiados son");
   printf ("\n\nPrimer valor: %d\nSegundo valor: %d", num1, num2);
   getche();


	return 0;
}
