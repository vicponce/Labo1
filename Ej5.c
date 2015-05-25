#include <stdio.h>
#include <stdlib.h>


void main ()
{
   int num;

   printf ("Ingrese un numero: ");
   scanf ("%d", &num);
   if (num==0)
   {
   	printf ("El numero %d es cero.", num);
	}
   else
   {
   	if (num<0)
   	{
   		printf ("El numero %d es negativo.", num);
   	}
   	else
   	{
			printf ("El numero %d es positivo.", num);
   	}
   }
	
   getch();
}
