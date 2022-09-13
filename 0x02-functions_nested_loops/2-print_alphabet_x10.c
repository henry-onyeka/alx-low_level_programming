#include "main.h"
/**
 *
 * print_alphabet_x10 - print alphabet 10 times
 *
 *    * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;

	for (i = 0; i <= 10; i++)
{
		while (alpha <= 'z')
{
	_putchar(alpha);
	alpha++;
}
}
_putchar('\n');
}
