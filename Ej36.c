#include <stdio.h>
#include <stdlib.h>

#define PF printf
#define SF scanf

void main ()
{

	int vec [10], i, ind, aux=-1;

   //Inicializa vector
   for (i=0; i<10; i++)
   	vec [i]=-1;

   //Pide indice
   for (i=0; i<10; i++)
   {
   	PF ("\n\nIngrese posicion: ");
      SF ("%d", &ind);

      //Valida indice
      while (ind <0 || ind >10)
      {
      	PF ("\n\nError. Reingrese indice valido: ");
         SF ("%d", &ind);
      }

      //Verifica vector este vacio
      if (vec [ind] == -1)
      {
      	PF ("\n\nIngrese Valor a guardar");
         SF ("%d", &vec[ind]);
      }

      else //vec[ind]!=-1
      {
      	i= i-1;
         PF ("\n\nLugar ocupado");
      }
   }

   for (i=0; i<10; i++)
   	{
      	PF ("\n\n%d - %d", i+1, vec [i]);
      }

      
	getche();
}


