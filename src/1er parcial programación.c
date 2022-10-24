/*
 ============================================================================
 Name        : 1er.c
Author      : ianir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int aplicarAumento(int x);
int main(void) {
    aplicarAumento(25);
	return EXIT_SUCCESS;
}
int aplicarAumento(int x)
{
	float resultado;
		resultado = x + (x *0.05);
	    printf("El resultado con aumento es: %.2f",resultado);
		return resultado;
}
