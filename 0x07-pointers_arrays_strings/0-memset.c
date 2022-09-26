#include "main.h"
/**
 * _memset - fills the memory wit a constant byte for a number of time
 * @n: number of times
 * @s: memory space to be filled
 * @b: the bytes to fille the meomry with
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
