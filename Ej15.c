#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i, cant=100;

   for (i=2; i<=cant; i++)
   {

      if (i%2==0 && i%3==0)
      {
      	printf ("\n%d es multiplo de 2 y de 3.", i);
      }
   	else
      {
      	if (i%2==0)
      	{
      		printf ("\n%d es multiplo de 2.", i);
      	}

      	if (i%3==0)
      	{
      		printf ("\n%d es multiplo de 3.", i);
      	}
      }
   }
   getche();


	return 0;
}
