#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping two given integers
 * @a: first variable int
 * @b: second variablwe
 * Return: it returned a and b
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
