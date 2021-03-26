/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: laplu
 */

#include <stdio.h>
#include <stdlib.h>

// FUNCIONES PRIVADAS: static ....


///////////////////////////////////////////////////////////////

int utn_getNumero(int *pNumero,char* pTexto,char* ptextoError, int min, int max, int reintentos)
{
	int retorno = -1;
	for(int i=0 ; i<reintentos ; i++)
	{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%d",pNumero) != 0)
		{
			if((*pNumero) >= min && (*pNumero) <= max)
				{
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",ptextoError);
				} // fin validacion rango de numeros.
		}
		else
		{
			fflush(stdin);
			printf("Lo ingresado no es un numero. \n");
		} // fin validacion scanf.


	} // fin ciclo for.

	return retorno;
}
