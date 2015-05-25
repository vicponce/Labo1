#include <stdio.h>
#include <stdlib.h>

#define PF printf
#define SF scanf

void main()
{
	int contTenis=0, contRugby=0, contVoley=0, contHockey=0, contFutbol=0;
   int sumEdadTenis=0, sumEdadRugby=0, sumEdadVoley=0, sumEdadHockey=0, sumEdadFutbol=0;
   int numSocio, edad;
   int promEdadTenis, promEdadRugby, promEdadVoley, promEdadHockey, promEdadFutbol;
   char op, rta='s';

   while (rta!='n')
   {
   	PF ("\nIngrese numero de socio: ");
      SF ("%d", &numSocio);
      PF ("\nIngrese Edad: ");
      SF ("%d", &edad);
      PF ("\nElija deporte:");
      PF ("\n1-Tenis\n2-Rugby\n3-Voley\n4-Hockey\n5-Futbol\n\n");
      fflush (stdin);
      PF ("> ");
      SF ("%c", &op);

      switch (op)  
      {
      	case '1':
         	contTenis++;
            sumEdadTenis = sumEdadTenis + edad;
         break;

         case '2':
         	contRugby++;
            sumEdadRugby = sumEdadRugby + edad;
         break;

         case '3':
         	contVoley++;
            sumEdadVoley = sumEdadVoley + edad;
         break;

         case '4':
         	contHockey++;
            sumEdadHockey = sumEdadHockey + edad;
         break;

         case '5':
         	contFutbol++;
            sumEdadFutbol = sumEdadFutbol + edad;
         break;

         default:

         	PF ("\nSeleccion invalida.");

      }

      fflush (stdin);
      PF ("\n\nDesea Continuar? s/n: ");
		SF ("%c", &rta);

      	while ((rta!='s') && (rta!='n'))
         {
            fflush (stdin);
         	PF ("\nSeleccion invalida. Desea continuar? s/n: ");
            SF ("%c", &rta);
         }
   }

   PF ("\n	%d socios practican Tenis y %d socios practican Rugby.\n", contTenis, contRugby);

   if (contTenis !=0)
   {
		promEdadTenis = sumEdadTenis / contTenis;
      PF ("\n\tEl promedio de edad en Tenis   es de: %d años.", promEdadTenis);
   }

   if (contRugby !=0)
   {
   	promEdadRugby = sumEdadRugby / contRugby;
      PF ("\n\tEl promedio de edad en Rugby   es de: %d años.", promEdadRugby);
   }

   if (contVoley !=0)
   {
		promEdadVoley = sumEdadVoley / contVoley;
      PF ("\n\tEl promedio de edad en Voley   es de: %d años.", promEdadVoley);
   }

   if (contHockey !=0)
   {
   	promEdadHockey = sumEdadHockey / contHockey;
      PF ("\n\tEl promedio de edad en Hockey  es de: %d años.", promEdadHockey);
   }

   if (contFutbol !=0)
   {
   	promEdadFutbol = sumEdadFutbol / contFutbol;
      PF ("\n\tEl promedio de edad en Futbol  es de: %d años.", promEdadFutbol);
   }
   getch ();
}

