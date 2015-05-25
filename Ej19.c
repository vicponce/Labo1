#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
int vend=1;
float suma, sumav1=0, sumav2=0, sumav3=0;	
	
	while (vend!=0)
	
	{
		printf ("Ingrese numero de vendedor:    \n");
		scanf("%d", &vend);
		printf("Ingrese importe");
		scanf("%f", &suma);
		
		switch (vend)
	
		{
			case 1:
			sumav1=sumav1+suma;
			break;
			
			case 2:
			sumav2=sumav2+suma;
			break;
			
			case 3:
			sumav3=sumav3+suma;
			break;
			
			case 0:
				
			break;
			
			
		
		}
	
	
	}	
	
	sumav1=sumav1*0.05;
	sumav2=sumav2*0.05;
	sumav3=sumav3*0.05;
	
	printf ("La ganancia por comision del vendedor 1 es %.2f", sumav1);
	printf ("La ganancia por comision del vendedor 2 es %.2f", sumav2);
	printf ("La ganancia por comision del vendedor 3 es %.2f", sumav3);
	
		
	
	return 0;
}
