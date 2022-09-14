#include <stdio.h>
/**
 * main - printing fibonacci numbers
 * Return: always 0
 * Fibonacci: is a sequential addition of numbers in an orderly manner
 * fib: collects the argument
 */

void fibonacci(int fib)

{
	int new;
	int f1 = 1;
	int f2 = 2;
	int i;

	printf("%d", f1);

		for (i = 0; i < fib; i++)
	{
		printf(" ,%d", f2);

new = f1 + f2;
f1 = f2;
f2 = new;

	}
	
}
int main(void)
{
	fibonacci(49);
	printf("\n");
	return (0);
}
