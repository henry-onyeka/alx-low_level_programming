#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  *string_nconcat - the function concatenates two string
 *  @n: is the numbee of integers
 *  @s1: first
 *  @s2: second one
 *  Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int pack, d, a, b, c;
	char *lag;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
for (a = 0; s1[a] != '\0'; a++)
{
}

for (b = 0; s2[b] != '\0'; b++)
{
}
	pack = a + (b + 1);

	if (n < b)
		b = n;
	b = a + b;

	lag = malloc(pack * sizeof(char *));

	if (lag == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
{
		lag[c] = s1[c];
		
}
	for (d = 0; d < b; d++)
{
		lag[c] = s2[d];
		c++;
}
	c++;
	lag[c] = '\0';
	return (lag);
}
