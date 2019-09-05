#include <stdlib.h>
#include <stdio.h>
#include "utn.h"

int sumar(float *pResultado, float a, float b)
{
	int retorno = EXIT_ERROR;
	float buffer;

	if(pResultado != NULL)
	{
		buffer = a+b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;

	}

	return retorno;
}

int restar(float *pResultado, float a, float b)
{
	int retorno = EXIT_ERROR;
	float buffer;

	if(pResultado != NULL)
	{
		buffer = a-b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;

	}

	return retorno;
}

int multiplicar(float *pResultado, float a, float b)
{
	int retorno = EXIT_ERROR;
	float buffer;

	if(pResultado != NULL)
	{
		buffer = a*b;
		*pResultado = buffer;
		retorno = EXIT_SUCCESS;

	}

	return retorno;
}

int calcularFactorial(int *pResultado,int maximo, int minimo, float numero)
{
	int retorno = EXIT_ERROR;
	int factorial = 1;
	int buffer = (int) numero;

	if(pResultado != NULL)
	{
		if(buffer >= minimo && buffer < maximo)
		{
			while(buffer > 0)
					{
						factorial = factorial * buffer;
						buffer--;
					}
			*pResultado = factorial;
			retorno = EXIT_SUCCESS;
		}


	}

	return retorno;
}

int dividir(float *pResultado,float a,float b)
{
	int retorno = EXIT_ERROR;
	float buffer;

	if(b != 0){
		buffer = a/b;
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

float getFloat( float *resultado,
				char *mensaje,
				char *mensajeError,
		        float maximo,
				float minimo,
				int reintentos)
{

	int retorno = EXIT_ERROR;
	float buffer;

	if (resultado != NULL
	    && mensaje != NULL
		&& mensajeError != NULL
	    && maximo > minimo
		&& reintentos >= 0) {
		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (scanf("%f", &buffer) == 1)
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
