/*
 ============================================================================
divida numA y numB, numb != 0,
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int division (int numA ,int divisor,float* pResultado);

int main(void)
{
	setbuf(stdout,NULL);

	float resultadoDivision;

	if(division(15 , 0 , &resultadoDivision) == 0)
	{
		printf("resultado division: %.2f",resultadoDivision);
	}
	else
	{
		printf("error.");
	}

	return EXIT_SUCCESS;
}

int division (int numA ,int divisor,float* pResultado) // otra funcion
{
	if(divisor == 0)
	{
		return -1;
	}
	else
	{
		*pResultado = (float) numA/divisor; //casteo
		return 0;
	}


}
