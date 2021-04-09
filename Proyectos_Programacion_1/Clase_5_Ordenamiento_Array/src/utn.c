/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: laplu
 */

#include <stdio.h>
#include <stdlib.h>

// FUNCIONES PRIVADAS: static ....

/////////////////////////////////////////////////////////////////////////////////////////////// INT

int utn_getNumero(int *pResultado,char* pTexto,char* ptextoError, int min, int max, int reintentos)
{
	int retorno = -1;
	for(int i=0 ; i<=reintentos ; i++)
	{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%d",pResultado) > 0 && pResultado != NULL && pTexto != NULL && ptextoError != NULL && min <= max && reintentos >= 0)
		{
			if((*pResultado) >= min && (*pResultado) <= max)
				{
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",ptextoError);
				} // fin validacion rango de numeros.
		}
	} // fin ciclo for.

	return retorno;
}


////////////////////////////////////////////////////////////////////////////////////////////// FLOAT
float utn_getNumeroFloat(float *pResultado,char* pTexto,char* ptextoError, float min, float max, int reintentos)
{
	int retorno = -1;
	for(int i=0 ; i<=reintentos ; i++)
	{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%f",pResultado) > 0 && pResultado != NULL && pTexto != NULL && ptextoError != NULL && min <= max && reintentos >= 0)
		{
			if((*pResultado) >= min && (*pResultado) <= max)
				{
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",ptextoError);
				} // fin validacion rango de numeros.
		}
	} // fin ciclo for.

	return retorno;
}

//////////////////////////////////////////////////////////////////////////////////////////// CHAR
int utn_getChar(char * pResultado,char* pTexto,char* ptextoError, char min, char max, int reintentos)
{
	int retorno = -1;
	for(int i=0 ; i<=reintentos ; i++)
	{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%c",pResultado) > 0 && pResultado != NULL && pTexto != NULL && ptextoError != NULL && min <= max && reintentos >= 0)
		{
			if((*pResultado) >= min && (*pResultado) <= max)
				{
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",ptextoError);
				} // fin validacion rango de numeros.
		}
	} // fin ciclo for.

	return retorno;
}
