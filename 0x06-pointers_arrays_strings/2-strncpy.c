<<<<<<< HEAD
#include "main.h"
/**
 *  _strncpy - Entry point
 *  @dest: destination to copy to
 *  @src: where to copy from
 *  @n: input number of characters
 *  Return: returns destination stribg
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)

	dest[c] = '\0';
	c++;
	return (dest);
}
=======
#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

	return (dest);
}
>>>>>>> 622025babd1a8100889e62b9fabdc874cb2b397e
