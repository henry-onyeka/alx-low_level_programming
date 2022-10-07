#include <stdlib.h>
#include "main.h"
/**
 * _calloc - memorry allocator dynamically
 * @nmemb: value
 * @size: value
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int p;
	char *pr;
       void	*lag;

	lag = malloc(sizeof(int) * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (lag == NULL)
		return (NULL);

	pr = lag;

	for (p = 0; p < nmemb * size; p++)
{
	pr[p] = 0;
}
			return (lag);
}

