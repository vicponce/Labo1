#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
 {
	int i, num=0, sum=0;
	float prom;

	for (i=0;i<5;i++)
	{
	printf ("Ingrese un numero \n");
	scanf("%d", &num);
	sum+=num;
	}
	getch();
	
		
	prom= (float)sum/5;
	
	system("cls");
	
	printf("El promedio de los cinco numeros ingresados es %.2f",prom);
	
	getch();
	
}
