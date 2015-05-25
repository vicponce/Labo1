#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int num=0, cuad=0;	
	
printf("Ingrese un numero\n");
scanf("%d", &num);

while (num<=0)
{

printf("ERROR, el numero debe ser mayor a cero, reingrese\n");
scanf("%d",&num);

}

cuad=num*num;

printf("El cuadrado del numero %d es %d",num,cuad);

getch();
	return 0;
}
