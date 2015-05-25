#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int op=0;

	while (op!=8)
   {

   	printf ("\nElija dia de la semana del dia 1 al dia 7\n o presione 8 para salir");
    printf ("\n--> ");
    scanf  ("%d", &op);

      switch (op)
      {

         case 1:
       		printf ("\n> Lunes\n");
            //fflush (stdin);
         break;

         case 2:
        	printf ("\n> Martes\n");
           // fflush (stdin);
         break;

         case 3:
        	printf ("\n> Miercoles\n");
           // fflush (stdin);
         break;

         case 4:
        	printf ("\n> Jueves\n");
            //fflush (stdin);
         break;

         case 5:
        	printf ("\n> Viernes\n");
            //fflush (stdin);
         break;

         case 6:
      	  	printf ("\n> Sabado\n");
            //fflush (stdin);
         break;

         case 7:
   	     	printf ("\n> Domingo\n");
           // fflush (stdin);
         break;

         case 8:
         break;

         default:
           	printf ("\n> Seleccion Invalida\n\n");
      }
	}
   

	return 0;
}
