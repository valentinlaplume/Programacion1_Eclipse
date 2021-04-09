/*
 ============================================================================
 Name        : Clase_5_Ordenamiento_Array.c
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

#define CANTIDAD 5

int main(void)
{
	setbuf(stdout,NULL);
	int numerosInt[CANTIDAD];

	for(int i=0;i<CANTIDAD;i++)
	{
		utn_getNumero(&numerosInt[i], "Ingrese un numero del 1 a 100:  ", "\nError.", 1, 100, 3);
	}


	if(arr_ordenarDescendente(numerosInt, CANTIDAD) == 0)
	{
		for (int i=0; i<CANTIDAD; i++)
		{
			printf("Ordenado de forma descendente: %d\n",numerosInt[i]);
		}
	}



	return EXIT_SUCCESS;
}

