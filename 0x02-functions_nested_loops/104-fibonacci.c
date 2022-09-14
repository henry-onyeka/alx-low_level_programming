#include <stdio.h>
/**
 * main - fibonacii prints and adds number next to itself
 * Return: always returning zero
 */
int main(void)
{
	int i, fib, fib1 = 1, fib2 = 2;

	for (i = 0; i < 96 ; i++)
	{
		printf("%d", fib1);
		while (fib1)
		{
		printf(" ,%d", fib2);
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		}
	}
	printf("\n");
	return (0);
}
