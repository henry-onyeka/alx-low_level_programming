#include "main.h"
/**
 * _strncat - adding two stringis
 * @dest: initialiesd
 * @src: variables
 * @n: NOther variable
 * Return: returns a character
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;


	while (dest[a] != '\0')
		a++;

	while (src[b] != n)
	{

		if (src[b] == '\0')
		{
			b = n;
		}
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}