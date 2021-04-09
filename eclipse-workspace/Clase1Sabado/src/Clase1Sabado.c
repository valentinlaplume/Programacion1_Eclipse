/*
 ============================================================================
<

Ejercicio 1:
Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
a) El promedio de los números positivos.
b) El promedio de los números negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIng;
	float promedioPositivos;
	float promedioNegativos;

	int contadorPositivos=0;
	int contadorNegativos=0;

	int acumuladorP=0;
	int acumuladorN=0;

	int R; //respuesta

	do
	{
		printf("Ingrese numero: ");
		scanf("%d",&numeroIng);

		if(numeroIng>0) //divisores
		{
			contadorPositivos++;
			acumuladorP+=numeroIng;
		}
		else
		{
			if(numeroIng<0)
			{
				contadorNegativos++;
				acumuladorN+=numeroIng;
			}
		}



		printf("Desea seguir ingresando? responde  1 para seguir: "); // respuesta
		scanf("%d",&R);

	}while(R==1);

	if(contadorPositivos>0)
	{
		promedioPositivos = (float)acumuladorP / contadorPositivos;
		printf("\npromedio positivos:  %.2f",promedioPositivos);
	}
	else
	{
		printf("no hay numero positivos ingresados.\n");
	}

	if (contadorNegativos>0)
	{
		promedioNegativos = (float) acumuladorN / contadorNegativos;
		printf("\npromedio negativos:  %.2f ",promedioNegativos);
	}
	else
	{
		printf("no hay numneros negativos ingresados.");
	}






	return EXIT_SUCCESS;
}
