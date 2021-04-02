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

#include "array.h"
#include "utn.h"

#define CANTIDAD_EDADES 5

int main(void)
{
	setbuf(stdout,NULL);

	int Edades[CANTIDAD_EDADES];
	int maximoInt;
	int minimoInt;
	float promedio;
	for(int i=0; i<CANTIDAD_EDADES; i++) // recorro para pedir la EDAD.
	{
		if(utn_getNumero(&Edades[i], "Ingrese edad, menor a 100: ", "Error.\n", 1,100, 1) == 0) // o " Edades[i] = edadIngresada; "
		{
			arr_getCalcularMaximoArrayInt(Edades, CANTIDAD_EDADES, &maximoInt);
			arr_getCalcularMinimoArrayInt(Edades, CANTIDAD_EDADES, &minimoInt);
			arr_getCalcularPromedioArrayInt(Edades, CANTIDAD_EDADES, &promedio);
		}

	}

	if(arr_getCalcularMaximoArrayInt(Edades, CANTIDAD_EDADES, &maximoInt)==0)
	{
		printf("La edad maxima es: %d\n", maximoInt); // muestro EDAD MAXIMA.
	}

	if(arr_getCalcularMinimoArrayInt(Edades, CANTIDAD_EDADES, &minimoInt)==0)
	{
		printf("La edad minima es: %d\n", minimoInt); // muestro EDAD MINIMA.
	}

	if(arr_getCalcularPromedioArrayInt(Edades, CANTIDAD_EDADES, &promedio)==0)
	{
		printf("Promedio de edades: %.2f\n", promedio); // muestro PROMEDIO.
	}

	return EXIT_SUCCESS;
}


