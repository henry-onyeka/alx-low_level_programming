#include "main.h"
/**
 * print_last_digit - is a gotten from the modulu of the variable
 * @last: is an integer value
 * Return: is always 0
 */
int print_last_digit(int last)
{
	int va = last % 10;

	if (last < 0)
		va = va * -1;
	_putchar(va + '0');
	


return (va);

}
