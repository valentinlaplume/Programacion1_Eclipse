/*
 ============================================================================
 Name        : Clase_5_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "arr.h"

#define CANTIDAD_EDADES 2

int arr_getCalcularMaximoArrayInt(int pArray[], int limite, int* pResultado);
int arr_getCalcularMinimoArrayInt(int pArray[], int limite, int* pResultado);
int arr_getCalcularMinimoArrayInt(int pArray[], int limite, int* pResultado);

int main(void)
{
	setbuf(stdout,NULL);

	int edad;
	int maximo;
	for(int i=0;i<CANTIDAD_EDADES;i++)
	{
		if(utn_getNumero(&edad, "Ingrese edad, menor a 100 ", "error", 0,100, 3) == 0)
		{
			arr_getCalcularMaximoArrayInt(&edad, 5, &maximo);
		}

	}

	printf("el maximo es: %d", maximo);


	return EXIT_SUCCESS;
}

int arr_getCalcularMaximoArrayInt(int pArray[], int limite, int* pResultado)
{
	int retorno = -1;
	int bufferIntMaximo;


	if (pArray != NULL && pResultado != NULL && limite > 0)
	{
		for(int i=0;i<limite;i++)
		{
			bufferIntMaximo = pArray[0];
			if(pArray[i] > bufferIntMaximo )
			{
				bufferIntMaximo = pArray[i];
				*pResultado = bufferIntMaximo;
				retorno=0;
			}
		}
	}

	return retorno;
}

int arr_getCalcularMinimoArrayInt(int pArray[], int limite, int* pResultado)
{
	int retorno = -1;

	return retorno;
}

int arr_getCalcularPromedioArrayInt(int pArray[], int limite, float* pResultado)
{
	int retorno = -1;

	return retorno;
}
