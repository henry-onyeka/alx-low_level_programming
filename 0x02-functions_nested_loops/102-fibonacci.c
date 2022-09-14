#include <stdio.h>
/**
 * main - program prints first number and adds it to previous and print again
 *
 * fibonacci - prints iteration of n
 * @fib: collects the argument
 *
 * Description: anyhow
 *  * Return: always 0
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
