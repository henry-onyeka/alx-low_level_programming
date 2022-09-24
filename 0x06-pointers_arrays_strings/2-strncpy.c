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

	while (c < n)
	{

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	c++;
}
	return (dest);
}
