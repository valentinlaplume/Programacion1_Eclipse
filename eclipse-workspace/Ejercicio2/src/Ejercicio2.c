/*
 Limpie la pantalla
- Solicite dos valores numéricos al usuario distintos de cero *
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla
- Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
- Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	setbuf(stdout,NULL); // siempre

	float numero1;
	float numero2;
	float resta;

	printf("ingrese el 1er numero distinto de cero: ");
	scanf("%f",&numero1);
	while(numero1==0)
	{
		printf("INVALIDO.ingrese el 1er numero distinto de cero: ");
			scanf("%f",&numero1);
	}

	printf("ingrese el 2do numero distinto de cero: ");
		scanf("%f",&numero2);
		while(numero2==0)
		{
			printf("INVALIDO.ingrese el 2do distinto de cero: ");
				scanf("%f",&numero2);
		}
		resta=numero1-numero2;
		printf("la resta es: %f",resta);

		if(resta<0)
		{
			printf("\nresultado negativo.");
		}
		else
		{
			printf("\nresultado positivo.");
		}


	return EXIT_SUCCESS;
}
