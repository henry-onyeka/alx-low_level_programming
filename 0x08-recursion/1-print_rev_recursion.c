#include "main.h"
/**
 * _print_rev_recursion - to print in reverse using recursion
 * @s: is the variable its pointing to
 * Return: returns something when the call is over abeg
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		_putchar('\n');
	}
	}
