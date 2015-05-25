#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int peso, men=0, may=0;
	char rta='s';

   while (rta=='s')
   {
   	printf ("\n\n Ingrese peso del empleado: ");
    scanf ("%d", &peso);

      if (peso <= 80)
      	men++;

      if (peso > 80)
      	may++;

      printf ("Desea continuar? s/n: ");
      fflush (stdin);
      scanf ("%c", &rta);

      while (rta!='s' && rta!='n')
      {
      	printf ("Error. Desea continuar? s/n: ");
      	fflush (stdin);
      	scanf ("%c", &rta);
      }

   }

   printf ("\n\nDel numero de trabajadores ingresados, %d pesan hasta 80 KG y %d pesan mas de 80 KG.", men, may);
   getche();	
	
	return 0;
}
