#include "main.c"
/**
 * _strcat - shows how to add two strings
 * @dest: is a char variable
 * @src: is a variabble
 * Return: wil be void
 */
void _strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	char dest, src;

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

