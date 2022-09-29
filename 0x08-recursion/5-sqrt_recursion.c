#include "main.h"
int squareroot(int n, int i);
/**
 *  _sqrt_recursion - no loop, 1. 2nd functi
 *  @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (squareroot(n, (n + 1) / 2));
}
