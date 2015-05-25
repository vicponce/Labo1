#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num, pulg, pies;

	
   printf ("Ingrese valor en centimetros a convertir: ");
   scanf ("%f", &num);

   pulg= num/2.54;
   pies= pulg/12;
   printf ("Resultado: %f cm son %.0f pies y %.1f pulgadas.", num, pies, pulg);
	
   getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
