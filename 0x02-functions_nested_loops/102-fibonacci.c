#include <stdio.h>
/**
 * main - program prints first number and adds it to previous and print again
 * Return: always 0
 */

int main(void)
{
	long int new;
	long int f1 = 1;
	long int f2 = 2;
	int i;

	printf("%li", f1);

		for (i = 0; i < 49; i++)
	{
		printf(", %li", f2);

new = f1 + f2;
f1 = f2;
f2 = new;

	}

	printf("\n");
	return (0);
}
