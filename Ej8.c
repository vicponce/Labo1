#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char letra;
int cont=0, a=0, e=0, i=0, o=0, u=0;

	printf ("Ingrese 20 caracteres:\n");
   while (cont<20)
   {
      printf ("-->");
   	scanf (" %c", &letra);
     
	 switch (letra)
	 
	  {
	    case 'a':  	
		a++;
	    break;
      
        case 'e':
       	e++;
        break;
      
        case 'i':
       	i++;
        break;
        
        case 'o':
       	o++;
        break;
        
        case 'u':
       	u++;
        break;
      }
	   cont++;

   }
	printf ("\n\n La cantidad de vocales ingresadas es: a=%d \t e=%d \t i=%d \t o=%d \t u=%d", a, e, i, o, u);



	  getch();


	return 0;
}
