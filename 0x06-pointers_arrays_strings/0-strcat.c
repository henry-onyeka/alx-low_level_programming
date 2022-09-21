#include "main.h"
/**
 * _strcat - shows how to add two strings
 * @dest: is a char variable
 * @src: is a variabble
 * Return: wil be void
 */

char *_strcat(char *dest, char *src)

{
	int a = 0;
	int b = 0;


	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')

{
	dest[a] += src[b];
	b++;
	a++;
}
dest[a] = '\0';
return (dest);
}

