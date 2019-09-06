#define EXIT_ERROR -1
/**
*\brief Suma dos float
*\param puntero resultado, Numeros a sumar
*\return 0 si esta ok, -1 si da error
*
*/

int sumar(float *pResultado, float a, float b);
/**
*\brief Resta dos float
*\param puntero resultado, Numeros a restar
*\return 0 si esta ok, -1 si da error
*
*/

int restar(float *pResultado, float a, float b);
/**
*\brief Multiplica dos float
*\param puntero resultado, Numeros a multiplicar
*\return 0 si esta ok, -1 si da error
*
*/

int multiplicar(float *pResultado, float a, float b);
/**
*\brief Calcula el factorial de un numero
*\param Puntero resultado, Numero, maximo y minimo
*\return 0 si esta ok, -1 si da error
*
*/

int calcularFactorial(int *pResultado,int maximo, int minimo, float numero);
/**
*\brief Divide dos float
*\param Puntero resultado, numeros a dividir
*\return 0 si esta ok, -1 si da error
*
*/

int dividir(float *pResultado,float a, float b);
/**
*\brief Le pide un float al usuario y lo guarda en una variable puntero
*\param punteros resultado, mensaje y mensaje error, maximo, minimo y reintentos
*\return 0 si esta ok, -1 si da error
*
*/

float getFloat( float *resultado,
				char *mensaje,
				char *mensajeError,
		        float maximo,
				float minimo,
				int reintentos);


