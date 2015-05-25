#include <stdio.h>
#include <stdlib.h>
#define PF printf
#define SF scanf
//#define int cont = 10

//Prototipo de 2 funciones
void mostrarVector (int [], int);


void main()
{
	int i, vec [10];

   for (i=0; i < 10; i++)
   	vec [i] = 0;


   for (i=0; i<10; i++)
   	{
      PF ("\n\nIngrese valor: ");
      SF ("%d", &vec [i]);
      }

   //Llamada Funcion mostrarVector
   mostrarVector (vec , 10);
   

   getche ();
   

  

}

	//Desarrollo Funcion mostrarVector
void mostrarVector (int v [], int cont)
{
	int i;

   for (i=0; i < cont; i++)
   {
   	PF ("\n\n%d", v [i]);
   }
}




