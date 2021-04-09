/*
 ============================================================================
 Diseñar un programa para jugar a adivinar un número entre 0 y 100:
-El juego tiene que dar pistas de si el número introducido por el jugador está por encima o por debajo.
-El juego termina cuando se adivina el número o se decide terminar de jugar ingresando un número negativo.
-Permitir jugar tantas veces como lo desee el jugador y al salir mostrar su mejor puntuación.
- Utilizar la biblioteca del ejercicio #001.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);
	char respuesta;
	int numeroIngresado;
	int numeroSecreto=74;
	int jugar=1;
	do
	{
		while(jugar==1)
		{
			if(utn_getNumero(&numeroIngresado, "Ingrese un n° del 0 al 100: ", "Error.\n", 0, 100, 0)==0)
			{
				if(numeroIngresado<0)
				{
					jugar=0;
				}
				else
				{
					if(numeroIngresado == numeroSecreto)
					{
						printf("Felicitaciones, ganaste! el numero secreto era: %d\n",numeroSecreto);
						jugar=0;
					}
					else
					{
						if(numeroIngresado < numeroSecreto)
						{
							printf("Más Más!!\n");
						}
						else
						{
							printf("Menos menos!!\n");
						}
					}
				}
			}
		}// fin while.

		jugar=1;
		utn_getChar(&respuesta, "Desea seguir jugando? responde 's' para seguir: ", "", 's', 's', 0);
	}while(respuesta == 's');

	printf("Fin del juego.");


	return EXIT_SUCCESS;
}
