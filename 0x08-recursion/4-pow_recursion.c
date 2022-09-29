#include "main.h"
/**
 * _pow_recursion - prints power of a number
 * @x: the base
 * @y: the power
 * Return: returns 1
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
