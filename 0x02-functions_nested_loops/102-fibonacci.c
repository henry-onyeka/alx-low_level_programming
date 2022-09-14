#include <stdio.h>
/**
 * fibonacci - prints iteration of n
 * Description: anyhow
 * main - it adds numbers of sum
 * Return: always 0
 * @fib: collects the argument
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
		printf(", %li", f2);

new = f1 + f2;
f1 = f2;
f2 = new;

	}

	printf("\n");
}
int main(void)
{
	fibonacci(49);
	return (0);
}
