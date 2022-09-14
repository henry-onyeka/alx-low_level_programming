#include <stdio.h>
/**
 * main - printing fibonacci numbers
 * Return: always 0
 * Fibonacci: is a sequential addition of numbers in an orderly manner
 * fib: collects the argument
 */

void fibonacci(int fib)

{
	long int new;
	long int f1 = 1;
	long int f2 = 2;
	int i;

	printf("%li", f1);

		for (i = 0; i < fib; i++)
	{
		printf(" ,%li", f2);

		printf("\n");
new = f1 + f2;
f1 = f2;
f2 = new;

	}
	
}
int main(void)
{
	fibonacci(49);
	return (0);
}
