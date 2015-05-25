#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define PF printf
#define SF scanf
#define CANT 3

int fValidar (int);

void main ()
{
	int num, min = 101, max = -101, suma = 0, i;
   float promedio;

   for (i=0; i<CANT; i++)
   {
      //pide numero
   	PF ("\nIngrese valor: ");
      SF ("%d", &num);

      //valida numero
      fValidar (num);

      suma = suma + num;

      if (num<min)
      min = num;

      if (num>max)
      max = num;
	}
   promedio = (float) suma / CANT;

   PF ("\n\n%d minimo", min);
   PF ("\n\n%d maximo", max);
   PF ("\n\n%.2f promedio", promedio);

   getch();

}

int fValidar (int n)
{
	while (n < -100 || n > 100)
   {
   	PF ("\nError. Fuera de rango.");
      PF ("\nIngrese valor: ");
      SF ("%d", &n);
   }
   return n;
}
