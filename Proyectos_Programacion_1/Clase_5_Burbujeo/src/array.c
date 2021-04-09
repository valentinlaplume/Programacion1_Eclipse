/*
 * arr.c
 *
 *  Created on: 30 mar. 2021
 *      Author: laplu
 */

#include <stdio.h>
#include <stdlib.h>

/*
/brief Calcula el numero maximo de un array int.
/param punteroArray[] es el puntero al array para buscar numero maximo.
/param limite es la longitud del array
/param *punteroResultadoMax es el puntero del resultado del numero maximo calculado.
/return 0 si OK, -1 para indicar un ERROR.
*/
int arr_getCalcularMaximoArrayInt(int punteroArray[], int limite, int* punteroResultadoMax)
{
	int retorno = -1;
	int bufferIntMaximo;

	if(punteroArray != NULL && punteroResultadoMax != NULL && limite > 0)
	{
		bufferIntMaximo = punteroArray[0];
		*punteroResultadoMax = bufferIntMaximo;
		retorno=0;
		for(int i=0; i<limite; i++)
		{
			if(punteroArray[i] > bufferIntMaximo)
			{
				bufferIntMaximo = punteroArray[i];
				*punteroResultadoMax = bufferIntMaximo;

			}
		}

	}


	return retorno;
}
/*
/brief Calcula el numero minimo de un array int.
/param punteroArray[] es el puntero al array para buscar numero minimo.
/param limite es la longitud del array
/param *punteroResultadoMin es el puntero del resultado del numero minimo calculado.
/return 0 si OK, -1 para indicar un ERROR.
*/
int arr_getCalcularMinimoArrayInt(int punteroArray[], int limite, int* punteroResultadoMin)
{
	int retorno = -1;
	int bufferIntMinimo;

	if(punteroArray != NULL && punteroResultadoMin != NULL && limite > 0)
	{
		bufferIntMinimo = punteroArray[0];
		*punteroResultadoMin = bufferIntMinimo;
		retorno=0;
		for(int i=0; i<limite; i++)
		{
			if(punteroArray[i] < bufferIntMinimo)
			{
				bufferIntMinimo = punteroArray[i];
				*punteroResultadoMin = bufferIntMinimo;
			}
		}
	}
	return retorno;
}
/*
/brief Calcula el promedio de un array int.
/param punteroArray[] es el puntero al array para buscar sacar promedio.
/param limite es la longitud del array
/param *punteroResultadoPromedio es el puntero del resultado del promedio calculado.
/return 0 si OK, -1 para indicar un ERROR.
*/
int arr_getCalcularPromedioArrayInt(int punteroArray[], int limite, float* punteroResultadoPromedio)
{
	int retorno = -1;
	float promedio;
	float acumulador = 0;

	if(punteroArray != NULL && punteroResultadoPromedio != NULL && limite > 0)
	{
		for(int i=0; i<limite; i++)
		{
			acumulador += punteroArray[i];
		}

		promedio = (float) acumulador / limite;
		*punteroResultadoPromedio = promedio;
		retorno = 0;
	}
	return retorno;
}


