/*
 ============================================================================
 - Valentin Laplume 1°H,
Ejercicio:
Realizar un programa que solicite números hasta que el usuario quiera, y dar el máximo y el mínimo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int bufferInt;

	int max;
	int min;

	int i=0;

	int flag=0;

	int sigo=1;

	setbuf(stdout,NULL);
	do
	{
		i++;
		printf("ingrese el %d° numero: \n",i);
		scanf("%d",&bufferInt);

		if(flag==0)
		{
			max=bufferInt;
			min=bufferInt;
			flag++;
		}
		else
		{
			if(bufferInt > max)
			{
				max=bufferInt;
			}
			else
			{
				if(bufferInt < min)
				{
					min=bufferInt;
				}
			}
		}

		printf("Desea seguir ingresando numeros? ingrese '1' para seguir: ");
		scanf("%d",&sigo);



	}while(sigo==1);

	printf("maximo: %d \n",max);
	printf("minimo: %d \n",min);

	//probando



	return EXIT_SUCCESS;
}
