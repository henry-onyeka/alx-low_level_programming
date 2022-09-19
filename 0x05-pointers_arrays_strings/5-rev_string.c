#include "main.h"
/**
 * rev_string - prints d string in reverse order
 * @s: is the stribg to be reversed
 * Return: just empty
 */
void print_rev(char *s)
{
	int i, maax, half;
	char first, last;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	maax = i - 1;
	half = maax / 2;

	while (half >= 0)
	{
		first = s[maax - half];
		last = s[half];
		s[half] = first;
		s[maax - half] = last;
		half--;
	}
}
