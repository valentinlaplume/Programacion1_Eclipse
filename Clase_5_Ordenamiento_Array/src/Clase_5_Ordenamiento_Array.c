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
	int aux;
	int arrayInt[CANTIDAD] = {46,7,3,9,66};
	int flagSwap;
	int i;

	do
	{
		flagSwap=0;
		for(i=0; i<=(CANTIDAD-1); i++)
		{
			flagSwap = 1;
			if(arrayInt[i] > arrayInt[i+1])
			{
				aux = arrayInt[i];
				arrayInt[i] = arrayInt[i+1];
				arrayInt[i+1] = aux;
			}
		}
	}while(flagSwap);

	for(i=0; i<CANTIDAD; i++)
	{
		printf("\nIndice: %d - Ordenado: %d",i,arrayInt[i]);
	}


	return EXIT_SUCCESS;
}

