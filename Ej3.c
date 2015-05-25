#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int i, num=0, men=0, may=0;
	
	for (i=0;i<10;i++)	
	{
		printf("Ingrese un numero\n");
		scanf("%d", &num);
		
		while (num==0)
			{
			printf("ERROR, el numero debe ser distinto de cero, reingrese \n");
			scanf("%d", &num);
			}
		if (num<0)
		men++;
		else
		may++;
		
	}
	
	printf("La cantidad de numeros mayores o iguales a cero es %d \nLa cantidad de numeros menores a cero es %d", may,men);
	
	getch();
	return 0;
}
