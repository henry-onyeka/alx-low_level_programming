#include "main.h"
int squareroot(int n, int i);
/**
 *  _sqrt_recursion - no loop, 1. 2nd functi
 *  @n: input
 *  squareroot - done
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

int squareroot(int n, int i)

{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (1);
	else
		return (squareroot(n, i - 1));
}
