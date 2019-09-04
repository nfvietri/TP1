#define EXIT_ERROR -1

int sumar(int *pResultado, int a, int b);

int restar(int *pResultado, int a, int b);

int multiplicar(int *pResultado, int a, int b);

int calcularFactorial(int *pResultado, int a);

int getInt(int *resultado,
		   char *mensaje,
		   char *mensajeError,
		   int maximo,
		   int minimo,
		   int reintentos);

int dividir(float *pResultado,int a,int b);
