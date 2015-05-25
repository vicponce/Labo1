

#include <stdio.h>
#include <stdlib.h>

void main ()
{
   float base, altura, sup;

   printf ("Ingrese base del triangulo: ");
   scanf ("%f", &base);
   printf ("\ningrese altura del triangulo: ");
   scanf ("%f", &altura);
   sup= (base*altura)/2;
   printf("\n\nLa superficie del triangulo es: %.2f", sup);
   getch();
}
