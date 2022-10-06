#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - checks the the alocated mem
 * @b: the integer ot be set
 * Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *dev;

	dev = malloc(b);

	if (dev == NULL)

		exit(98);
	return (dev);
}
