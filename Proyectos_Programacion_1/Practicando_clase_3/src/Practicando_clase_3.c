/*
 ============================================================================
 Name        : Practicando_clase_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int funcionSumar (int numA,int numB,int* resul);

int main(void)
{
	setbuf(stdout,NULL);
	int a=2;
	int b=3;
	int resultado;

	funcionSumar(a,b,&resultado);

	printf("resultado: %d", resultado);



	return EXIT_SUCCESS;
}

int funcionSumar (int numA,int numB,int* resul)
{

	*resul = numA + numB;

	return resul;
}
