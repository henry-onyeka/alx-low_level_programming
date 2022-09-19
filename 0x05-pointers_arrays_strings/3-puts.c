#include "main.h"
/**
 * _puts - does nothing more than printing out string in an array by iteration
 * @str: the variable
 * Return: the character
 */
void _puts(char *str)
{
	char *str = "my alx peer group is a fantastic one";

	int f;

	while (str[f] != '\0')
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
