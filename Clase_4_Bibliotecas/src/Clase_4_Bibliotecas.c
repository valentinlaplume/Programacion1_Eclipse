/*
 ============================================================================
 Name        : Clase_4_Bibliotecas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"



int main(void)
{
	setbuf(stdout,NULL);
	int resultadoInt;
	float resultadoFloat;
	char resultadoChar;

	 if(utn_getNumero(&resultadoInt, "Ingrese un numero entre 0 y 100: ", "Numero ingresado fuera de rango. ", 0 , 100, 2) == 0)
	{
		printf("El numero entero ingresado es: %d \n",resultadoInt);
	}

	if(utn_getNumeroFloat(&resultadoFloat,"Ingrese un numero entre 0 y 100: " ,"Numero ingresado fuera de rango. " , 0 , 100 , 2) == 0)


		{
			printf("El numero fraccionario ingresado es: %f \n",resultadoFloat);
		}


	if(utn_getChar(&resultadoChar, "Ingrese un caracter entre 'A' y 'z': ", "ERROR. fuera de rango\n", 'A', 'z', 2) == 0)
	{
		printf("Caracter ingresado: %c \n",resultadoChar);
	}
	else
	{
		printf("\nfin del programa...");
	}


	return EXIT_SUCCESS;


}









