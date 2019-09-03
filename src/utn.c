#include <stdlib.h>
#include <stdio.h>
#include "utn.h"

int sumar(int a, int b)
{
	int resultado;
	resultado = a+b;
	return resultado;
}

int restar(int a, int b)
{
	int resultado;
	resultado = a-b;
	return resultado;
}

int multiplicar(int a, int b)
{
	int resultado;
	resultado = a*b;
	return resultado;
}

int calcularFactorial(int a)
{
	int factorial = 1;
	while(a > 0){
		factorial = factorial * a;
		a--;
	}
	return factorial;
}

int dividir(int *resultadoDiv,int a,int b)
{
	int retorno = EXIT_ERROR;
	int buffer;

	if(b != 0){
		buffer = a/b;
		*resultadoDiv = buffer;
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


