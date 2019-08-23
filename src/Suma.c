/*
 ============================================================================
 Name        : Suma.c
 Author      : Daniel Livón
 Version     :
 Copyright   : TH
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;
	int suma;

	printf("\nNumero 1: ");
	scanf("%d",&num1);
	printf("\nNumero 2: ");
	scanf("%d",&num2);

	suma = num1 + num2;

	printf("\nEl resultado es: %d",suma);
	return 0;
}
