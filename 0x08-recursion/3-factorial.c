#include "main.h"
/**
 * factorial - the function prints out thee factiorial of given number
 * @n: is the parameter to be passed
 * Return: -1 to throw an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		_putchar(n * factorial(n - 1));
}
return (n);
}
