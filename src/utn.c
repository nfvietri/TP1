#include <stdlib.h>
#include <stdio.h>
#include "utn.h"

int sumar(int *pResultado, int a, int b)
{
	int retorno = EXIT_ERROR;
	int buffer;

	if(pResultado != NULL)
	{
		buffer = a+b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;

	}

	return retorno;
}

int restar(int *pResultado, int a, int b)
{
	int retorno = EXIT_ERROR;
	int buffer;

	if(pResultado != NULL)
	{
		buffer = a-b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;

	}

	return retorno;
}

int multiplicar(int *pResultado, int a, int b)
{
	int retorno = EXIT_ERROR;
	int buffer;

	if(pResultado != NULL)
	{
		buffer = a*b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;

	}

	return retorno;
}

int calcularFactorial(int *pResultado, int a)
{
	int retorno = EXIT_ERROR;
	int factorial = 1;

	if(pResultado != NULL)
	{
		while(a > 0)
		{
			factorial = factorial * a;
			a--;
			*pResultado = factorial;
		}
	}

	return retorno;
}

int dividir(float *pResultado,int a,int b)
{
	int retorno = EXIT_ERROR;
	float buffer;

	if(b != 0){
		buffer = (float) a/ (float) b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;
	}

	return retorno;

}

int getInt(int *resultado,
		   char *mensaje,
		   char *mensajeError,
		   int maximo,
		   int minimo,
		   int reintentos)
{
	int retorno = EXIT_ERROR;
	int buffer;

	if (resultado != NULL
		&& mensaje != NULL
		&& mensajeError != NULL
		&& maximo > minimo
		&& reintentos >= 0) {

		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (scanf("%d", &buffer) == 1)
			{
				if (buffer >= minimo && buffer <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}

			}
			printf("%s", mensajeError);
			reintentos--;

		} while (reintentos >= 0);
	}
	return retorno;

}



