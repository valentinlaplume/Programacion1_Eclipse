/*
 ============================================================================
 - Valentin Laplume 1°H,
Ejercicio:
Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define divisor 5

int main(void)
{
	setbuf(stdout,NULL);
	int bufferINT;
	int max;
	int min;
	float promedio;
	int acumulador=0;


	for(int i=0;i<divisor;i++)
	{
		printf("Ingrese el %d° numero: ",i+1);
		scanf("%d",&bufferINT);

		acumulador+=bufferINT;

		if(i==0)
		{
			max=bufferINT;
			min=bufferINT;
		}
		else
		{
			if(bufferINT > max)
			{
				max=bufferINT;
			}
			else
			{
				if(bufferINT < min)
				{
					min=bufferINT;
				}
			}
		}

	} //FIN CICLO.

	promedio=(float)acumulador/divisor;
	printf("PROMEDIO: %.2f \n",promedio);
	printf("MAXIMO: %d \n",max);
	printf("MINIMO: %d \n",min);


	return EXIT_SUCCESS;
}
