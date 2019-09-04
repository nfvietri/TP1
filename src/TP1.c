#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	int resultado;
    int num1;
    int num2;
    int suma;
    int resta;
    int producto;
    float division;
    float auxDivision;
    int opcion;
    int factorialNum1;
    int factorialNum2;

    do{

    printf( "\n"
    		"--------CALCULADORA--------\n"
    		"Por favor, ingrese una opcion\n"
    		"1 - Ingresar primer operando\n"
    	   	"2 - Ingresar segundo operando\n"
    	   	"3 - Calcular todas las operaciones\n"
    	    "4 - Infomar resultados\n"
    	    "5 - Salir\n");

    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1: if(getInt(&resultado,"Ingrese el primer operando\n","Error",2147483647,-2147483648,3) == 0)
    		{
    			num1 = resultado;
    			printf("Primer operando = %d\n",num1);
    		}
    		break;

    case 2: printf("Ingrese el segundo operando\n");
    		scanf("%d", &num2);
    		printf("Segundo operando = %d\n", num2);
    		break;

    case 3: if(sumar(&resultado,num1,num2) == 0)
    		{
    			suma = resultado;
    		}
    		if(restar(&resultado,num1,num2) == 0)
        	{
    			resta = resultado;
        	}
    		if(multiplicar(&resultado,num1,num2) == 0)
    		{
    		    producto = resultado;
    		}
    		if(dividir(&auxDivision,num1,num2) == 0)
    		{
    			division = auxDivision;
    		}
    		if(calcularFactorial(&resultado,num1) == 0)
    		{
    		    factorialNum1 = resultado;
    		}
    		if(calcularFactorial(&resultado,num1) == 0)
    		{
    		    factorialNum2 = resultado;
    		}
    		printf("Se calcularon las operaciones!\n");
    		break;

    case 4: printf("El resultado de %d + %d es: %d\n", num1,num2,suma);
    		printf("El resultado de %d - %d es: %d\n", num1,num2,resta);
    		printf("El resultado de %d * %d es: %d\n", num1,num2,producto);
    		if(dividir(&auxDivision,num1,num2) == 0){
    			printf("El resultado de %d / %d es: %f\n",num1,num2,division);
    		} else {
    			printf("No es posible dividir por cero\n");
    		}
    		printf("El factorial de %d es: %d\n"
    			   "El factorial de %d es: %d\n",num1,factorialNum1,num2,factorialNum2);
    		break;

    case 5: printf("Hasta la proxima!");
    		break;

    default: printf("Opcion no valida");

    }

    }while(opcion != 5);


	return EXIT_SUCCESS;

}
