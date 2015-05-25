#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PF printf
#define SF scanf
#define CANT 3
# define ANIOACTUAL 2014

float fValidarS (float);
int fValidarF (int, int, int);

void main ()
{
	int dia, mes, anio, i, minDia, minMes, minAnio;
   float sueldo, minSueldo;
   char nombre [25], minNombre [25];

   for (i=0; i<CANT; i++)
   {
      //pide nonmbre
   	  PF ("\nIngrese nombre: ");
      gets (nombre);
      PF ("\nIngrese dia de ingreso: ");
      SF ("%d", &dia);
      PF ("\nIngrese mes de ingreso: ");
      SF ("%d", &mes);
      PF ("\nIngrese anio de ingreso: ");
      SF ("%d", &anio);

      fValidarF (dia, mes, anio);

      PF ("\nIngrese sueldo: ");
      SF ("%f", &sueldo);

      sueldo = fValidarS (sueldo);

      if (i==0)
      {
      	strcpy (minNombre,nombre);
         minDia=dia;
         minMes=mes;
         minAnio=anio;
         minSueldo=sueldo;
      }

      if (anio<minAnio)
      {
         minAnio=anio;

         if (mes<minMes)
         {
         	minMes=mes;

            if (dia<minDia)
            {
            	minDia=dia;
      	   	strcpy (minNombre,nombre);
            	minSueldo= sueldo;
            }
         }
      }
   }

   PF ("\n\n\nEl empleado mas antiguo es: %s y su sueldo es %.2f", minNombre, minSueldo);

	getch();

}

int fValidarF (int d, int m, int a)
{
	while (d < 1 || d > 31)
   {
   	PF ("\nError. Dia fuera de rango.");
      PF ("\nIngrese dia de ingreso: ");
      SF ("%d", &d);
   }

   while (m < 1 || d > 12)
   {
   	PF ("\nError. Mes fuera de rango.");
      PF ("\nIngrese mes de ingreso: ");
      SF ("%d", &m);
   }

   while (a < 1980 || a > ANIOACTUAL)
   {
   	PF ("\nError. Anio fuera de rango.");
      PF ("\nIngrese anio de ingreso: ");
      SF ("%d", &a);
   }

   return d, m, a;
}

float fValidarS (float s)
{
	while (s < 4500)
   {
   	PF ("\nError. Fuera de rango.");
      PF ("\nIngrese sueldo: ");
      SF ("%f", &s);
   }
   return s;
   
}
