#include "main.h"
/**
 * print_sign - just to print sign in accordance with the output
 * @n: is an integer
 *Return: always nonsense
 */

int print_sign(int n)

{
	if (n < 0)
{
	_putchar('-');

	return (-1);
}
else if (n > 0)
{
	_putchar('+');
	return (1);
}
else

{
	_putchar('0');
	return (0);
}
}
