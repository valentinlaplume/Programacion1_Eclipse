/*
 ============================================================================
 Name        : Clase_3_Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int funcionSUMA (int numA,int numB, float* pResultadoSuma);
int funcionRESTA(int numA,int numB, float* pResultadoResta);
int funcionMULTIPLICACION(int numA,int numB, float* pResultadoMultiplicacion);


int main(void)
{
	setbuf(stdout,NULL);

	int numeroA;
	int numeroB;
	float resultado;
	char opcion;

	printf("ingrese numero A: ");
	scanf("%d",&numeroA);

	fflush(stdin);
	printf("suma: +, resta: -,multiplicacion: *, division: /. : ");
	scanf("%c",&opcion);

	printf("ingrese numero B: ");
	scanf("%d",&numeroB);





	switch(opcion)
	{
	case '+': // sumar
		funcionSUMA(numeroA,numeroB,&resultado);
		printf("Resultado suma: %.0f",resultado);

		break;
	case '-': // restar
		funcionRESTA(numeroA,numeroB,&resultado);
		printf("Resultado resta: %.0f",resultado);

		break;
	case '*': // multiplicar
		funcionMULTIPLICACION(numeroA,numeroB,&resultado);
		printf("Resultado multiplicacion: %.0f",resultado);

		break;
	case '/': // dividir

		break;

	}

	return EXIT_SUCCESS;
}

int funcionSUMA (int numA,int numB, float* pResultadoSuma)
{
	*pResultadoSuma = numA+numB;
	return 0;
}

int funcionRESTA(int numA,int numB, float* pResultadoResta)
{
	*pResultadoResta=numA-numB;
	return 0;
}

int funcionMULTIPLICACION(int numA,int numB, float* pResultadoMultiplicacion)
{
	*pResultadoMultiplicacion=numA*numB;
	return 0;
}
