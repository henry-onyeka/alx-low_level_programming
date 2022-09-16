#include "main.h"

/**
 * print_line - prints line
* @n: length
*
* Return: empty
*/
void print_line(int n)
{
	int dan = 0;

	while (dan < n)
	{
		_putchar('_');
		dan++;
	}
	_putchar('\n');
}
