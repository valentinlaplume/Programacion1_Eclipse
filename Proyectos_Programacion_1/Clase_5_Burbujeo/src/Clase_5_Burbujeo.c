/*
 ============================================================================
 Name        : Clase_5_Burbujeo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"
#define CANTIDAD_EMPLEADOS 5

int arr_mostrarArrayInt(int punteroArray[], int limite);
int ordenarArrayIntDescendente(int punteroArray[], int limite);
int ordenarArrayIntAscendente(int punteroArray[], int limite);

int main(void)
{
	setbuf(stdout,NULL);
	int edades[CANTIDAD_EMPLEADOS];
	int respuestaDescendente;
	int respuestaAscendente;

	// pido edades.
	for(int i=0; i < CANTIDAD_EMPLEADOS;i++)
	{
		utn_getNumero(&edades[i], "Ingrese edades del 0 al 100: ","Error:\n" ,0, 100, 4);
	}

	// muestro el array como está
	printf("\nArray tal como está:");
	arr_mostrarArrayInt(edades, CANTIDAD_EMPLEADOS);


	// ordeno de forma descendiente
	ordenarArrayIntDescendente(edades, CANTIDAD_EMPLEADOS);
	respuestaDescendente = ordenarArrayIntDescendente(edades, CANTIDAD_EMPLEADOS); // retorna cantidad de iteraciones
	printf("iteraciones desc: %d",respuestaDescendente);
	if(respuestaDescendente == 0) // si las iteraciones son mayor a 0
	{
		printf("\n\nIteraciones para ordenar de forma Descendente: %d",respuestaDescendente);
	}
	// muestra array ordenado de forma Descentente
	arr_mostrarArrayInt(edades, CANTIDAD_EMPLEADOS); // ya me los ordena



	return EXIT_SUCCESS;
}



/*
/brief Imprime en pantalla la informacion que hay en un array de num enteros
/param punteroArray[] punteo al array a ser mostrado
/param limite longitud array
/return 0 si OK, -1 Error
*/

int arr_mostrarArrayInt(int punteroArray[], int limite)
{
	int retorno = -1;

	if(punteroArray != NULL && limite >= 0)
	{
		retorno = 0;
		for (int i=0; i<limite; i++)
		{
			printf("\nIndice: %d - ArrayNumero: %d",i,punteroArray[i]);
		}
	}



	return retorno;
}

/*
/brief Ordena un array de enteros de manera DESCENDENTE
/param punteroArray[] punteo al array a ser ordenado
/param limite longitud array
/return Cantidad de iteraciones necesarias para ordenar, -1 ERROR.
*/

int ordenarArrayIntDescendente(int punteroArray[], int limite)
{
	int flagSwap;
	int contador = 0;
	int retorno;
	int buffer;

	if (punteroArray != NULL && limite >= 0)
	{
		do
		{
			flagSwap=0; // todo != 0 es verdadero. 0 da una vuelta
			for(int i=0; i<(limite-1); i++) // i < (limite-1) para no comparar el ult elemento contra la nada
			{
				if(punteroArray[i] < punteroArray[i+1])
				{
					flagSwap=1; // asegura vueltas al do while.
					buffer = punteroArray[i]; // intercambio lo que tenia en la posicion [i+1] en la posicion [i]
					punteroArray[i] = punteroArray[i+1];
					punteroArray[i+1] = buffer;
					contador++;
				}
			}
		}while(flagSwap);
		retorno=contador;
	}
	return retorno;
}

/*
/brief Ordena un array de enteros de manera ASCENDENTE
/param punteroArray[] punteo al array a ser ordenado
/param limite longitud array
/return Cantidad de iteraciones necesarias para ordenar, -1 ERROR.
*/

int ordenarArrayIntAscendente(int punteroArray[], int limite)
{
	int flagSwap;
	int contador = 0;
	int retorno;
	int buffer;

	if (punteroArray != NULL && limite >= 0)
	{
		do
		{
			flagSwap=0; // todo != 0 es verdadero. 0 da una vuelta
			for(int i=0; i<(limite-1); i++) // i < (limite-1) para no comparar el ult elemento contra la nada
			{
				if(punteroArray[i] > punteroArray[i+1])
				{
					flagSwap=1; // asegura vueltas al do while.
					buffer = punteroArray[i]; // intercambio lo que tenia en la posicion [i+1] en la posicion [i], si [i] es mayor a [i+1]
					punteroArray[i] = punteroArray[i+1];
					punteroArray[i+1] = buffer;
					contador++;
				}
			}

		}while(flagSwap);
		retorno=contador;
	}
	return retorno;
}



