#include "main.h"
/**
 * _memcpy - cpo[pies a memory locatkion to anotjer file
 * @dest: this is the destination to copy to
 * @src: where to copy from
 * @n: number of timesto copy
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)
	{
		*(dest + y) = *(src + y);
		y++;
	}
	return (dest);
}
