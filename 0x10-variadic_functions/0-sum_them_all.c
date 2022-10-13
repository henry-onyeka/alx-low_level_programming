#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sums up all parameter passed into the argument
 *
 *
 * @n:variable
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
{
	sum += va_arg(valist, unsigned int);
}

va_end(valist);

return (sum);
}
