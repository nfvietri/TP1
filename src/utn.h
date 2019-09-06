#define EXIT_ERROR -1

int sumar(float *pResultado, float a, float b);

int restar(float *pResultado, float a, float b);

int multiplicar(float *pResultado, float a, float b);

int calcularFactorial(int *pResultado,int maximo, int minimo, float numero);

int dividir(float *pResultado,float a, float b);

float getFloat( float *resultado,
				char *mensaje,
				char *mensajeError,
		        float maximo,
				float minimo,
				int reintentos);


