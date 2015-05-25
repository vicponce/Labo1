#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i, suma=0;

   for (i=3; i<100; i+=3)
   {
   	 printf("\n  %d", i);
   	 suma=i+suma;
   }
   getche();
	
	printf("\n La suma de toda la serie es %d", suma);
	
	return 0;
}
