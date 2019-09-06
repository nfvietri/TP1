#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	float resultado;
    float num1;
    float num2;
    float suma;
    float resta;
    float producto;
    float division;
    int opcion;
    int factorialNum1;
    int factorialNum2;

    do{
    printf( "\n""--------CALCULADORA--------\n"
    		"Por favor, ingrese una opcion\n"
    		"1 - Ingresar primer operando\n"
    	   	"2 - Ingresar segundo operando\n"
    	   	"3 - Calcular todas las operaciones\n"
    	    "4 - Infomar resultados\n"
    	    "5 - Salir\n");

    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1: if(getFloat(&resultado,"Ingrese el primer operando\n","Error",2147483647,-2147483648,3) == 0){
    			num1 = resultado;
    			printf("Primer operando = %f\n",num1);
    		}
    		break;

    case 2: if(getFloat(&resultado,"Ingrese el segundo operando\n","Error",2147483647,-2147483648,3) == 0){
				num2 = resultado;
				printf("Segundo operando = %f\n",num2);
			}
			break;

    case 3: sumar(&suma,num1,num2);
    		restar(&resta,num1,num2);
    		multiplicar(&producto,num1,num2);
    		dividir(&division,num1,num2);
    		calcularFactorial(&factorialNum1,13,-1,num1);
    		calcularFactorial(&factorialNum2,13,-1,num2);

    		printf("Se calcularon las operaciones!\n");
    		break;

    case 4: printf("El resultado de %f + %f es: %f\n", num1,num2,suma);
    		printf("El resultado de %f - %f es: %f\n", num1,num2,resta);
    		printf("El resultado de %f * %f es: %f\n", num1,num2,producto);
    		if(dividir(&division,num1,num2) == 0){
    			printf("El resultado de %f / %f es: %f\n",num1,num2,division);
    		} else {
    			printf("No es posible dividir por cero\n");
    		}
    		if(calcularFactorial(&factorialNum1,13,-1,num1) == 0){
    		    printf("El factorial de %d es: %d\n",(int)num1,factorialNum1);
    		} else {
    			printf("El factorial de %d es: El valor es muy alto!\n",(int)num1);
    		}
    		if(calcularFactorial(&factorialNum2,13,-1,num2) == 0){
    		    printf("El factorial de %d es: %d\n",(int)num2,factorialNum2);
    		} else {
    			printf("El factorial de %d es: El valor es muy alto!\n",(int)num2);
    		}
    		break;

    case 5: printf("Hasta la proxima!");
    		break;

    default: printf("Opcion no valida");
    }
    }while(opcion != 5);

	return EXIT_SUCCESS;
}
