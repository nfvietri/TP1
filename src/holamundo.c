/*
 ============================================================================
 Name        : holamundo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

    float num1;
    float num2;
    float suma;
    int opcion;

    do{

    printf( "                           \n"
    		"--------CALCULADORA--------\n");
    printf("Por favor, ingrese una opcion\n");
    printf("1 - Ingresar primer operando\n"
    	   "2 - Ingresar segundo operando\n"
    	   "3 - Calcular todas las operaciones\n"
    	   "4 - Infomar resultados\n"
    	   "5 - Salir\n");

    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1: printf("Ingrese el primer operando\n");
    		scanf("%f", &num1);
    		printf("Primer operando = %f\n", num1);
    		break;
    case 2: printf("Ingrese el segundo operando\n");
    		scanf("%f", &num2);
    		printf("Segundo operando = %f\n", num2);
    		break;
    case 3: suma = sumar(num1, num2);
    		printf("Se calcularon las operaciones!\n");
    		break;
    case 4: printf("El resultado de %f + %f es %f\n", num1,num2,suma);
    		break;
    case 5: printf("Hasta la proxima!");
    		break;

    default: printf("Opcion no valida");

    }

    }while(opcion != 5);


	return EXIT_SUCCESS;

}
