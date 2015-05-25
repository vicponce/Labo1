#include <stdio.h>
#include <stdlib.h>

# define PF printf
# define SF scanf

void main ()
{

	//la abreviatura p corresponde al puntaje

	int i, sumaP=0, maxP=0, pInteligencia=0, pCultura=0, pBelleza=0, sumaPinteligencia=0, sumaPcultura=0, sumaPbelleza=0, menorP=0;

	char nombre [40], maxNombre [40], menorItem [40];


	for (i=17; i<20; i++)
	{
		PF ("\n\nIngrese Apellido y Nombre: ");
   	fflush (stdin);
   	gets (nombre);
   	PF ("\nIngrese Puntos por Inteligencia: ");
   	SF ("%d", &pInteligencia);
   	PF ("\nIngrese Puntos por Cultura General: ");
   	SF ("%d", &pCultura);
   	PF ("\nIngrese Puntos por Belleza: ");
   	SF ("%d", &pBelleza);

   	sumaP = pInteligencia + pCultura + pBelleza;
   	sumaPinteligencia = sumaPinteligencia + pInteligencia;
   	sumaPcultura = sumaPcultura + pCultura;
   	sumaPbelleza = sumaPbelleza + pBelleza;

   	if (i==0)
   	{
   		maxP = sumaP;
      	strcpy (maxNombre, nombre);
   	}

      if (sumaP > maxP)
      {
      	maxP = sumaP;
         strcpy (maxNombre, nombre);
      }
   }

   if (sumaPinteligencia < sumaPcultura)
   {
   	menorP = sumaPinteligencia;
      //fflash (stdin);
      //gets = ("Inteligencia");
   }
   	else
      {
			menorP = sumaPcultura;
         //menorItem = ("Cultura General");
      }

   if (sumaPbelleza < menorP)
   {
   	menorP = sumaPbelleza;
      //menorItem = ("Belleza");
   }

   PF ("\n\n\nEl concursante de mayor puntaje general es: %s", nombre);
   PF ("\n\n\nEl puntaje acumulado de todas las participantes es: ");
   PF ("\n\n\tInteligenia: %d\tCultura General: %d\tBelleza: %d", sumaPinteligencia, sumaPcultura, sumaPbelleza);
   //PF ("\n\n\nDe los 3 puntajes acumulados el menor fue: %s con %d puntos en total.", menorItem, menorP);
   PF ("\n\n\nDe los 3 puntajes acumulados el menor fue: %d puntos en total.", menorP);
   getch();
   
}
