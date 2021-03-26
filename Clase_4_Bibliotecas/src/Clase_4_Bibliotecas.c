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
	int numero;

	if(utn_getNumero(&numero
					,"Ingrese un numero entre 0 y 100: "
					,"Numero ingresado fuera de rango. "
					,0
					,100
					,2) == 0) // valido que retorne 0.
	{
		printf("El numero ingresado es: %d",numero);
	}

	return EXIT_SUCCESS;
}








