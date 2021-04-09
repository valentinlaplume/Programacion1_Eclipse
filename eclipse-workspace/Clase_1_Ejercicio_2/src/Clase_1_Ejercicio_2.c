/*
 ============================================================================
 Name        : Laplume, Valentin  (1° H)

Ejercicio 2:
Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en
qué orden fue ingresado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroING;

	int numeroMAX;
	int numeroMIN;

	int contadorMAX=0;
	int contadorMIN=0;


	for(int i=0;i<5;i++)
	{
		printf("Ingrese numero: ");
		scanf("%d",&numeroING);

		if(i==0)
		{
			numeroMAX = numeroING;
			numeroMIN = numeroING;
		}

		if(numeroING > numeroMAX)
		{
			numeroMAX = numeroING;
			contadorMAX = i+1;
		}

		if(numeroING < numeroMIN)
		{
			numeroMIN = numeroING;
			contadorMIN = i+1;
		}


	}

	printf("Posicion: %d° - numero max: %d\n", contadorMAX, numeroMAX);
	printf("Posicion: %d° - numero min: %d", contadorMIN, numeroMIN);



	return EXIT_SUCCESS;
}
