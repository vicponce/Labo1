#include <stdio.h>
#include <stdlib.h>
#define PF printf
#define SF scanf

void main ()
{
	int i, cantDias, diaMayorAgua, diaMenorAgua;
   float agua, sumaAgua=0, promAgua, mayorAgua, menorAgua;

   //Se pide ingresar la cantidad de dias del mes
   PF ("Ingrese la cantidad de dias que tiene el mes: ");
   SF ("%d", &cantDias);

   //Estructura repetitiva para ingresar dia x dia la cantidad de agua caida
   for (i=1; i <=cantDias; i++)
   {
   	PF ("DIA %d. Ingrese cantidad de agua caida en mm: ", i);
      SF ("%f", &agua);

      sumaAgua = sumaAgua + agua;

      //Otorga el valor de agua caida el primer dia como minimo y maximo
      if (i==1)
      {
         mayorAgua = agua;
      	diaMayorAgua = i;
         menorAgua = agua;
         diaMenorAgua = i;
      }

      //Calcula Maximo
      if (mayorAgua < agua)
      {
         mayorAgua = agua;
      	diaMayorAgua = i;
      }

      //Calcula Minimo
      if (menorAgua > agua)
		{
         menorAgua = agua;
      	diaMenorAgua = i;
      }

   }

   //Calcula promedio

   promAgua = sumaAgua / cantDias;

   //Muestra Resultados
   PF ("\n\nEl dia %d fue el dia que menos agua cayo: %.2f mm.", diaMenorAgua, menorAgua);
   PF ("\n\nEl dia %d fue el dia que mas agua cayo:   %.2f mm.", diaMayorAgua, mayorAgua);
   PF ("\n\nEl promedio de agua caida en %d dias es:  %.2f mm.", cantDias, promAgua);

   getche();
}

