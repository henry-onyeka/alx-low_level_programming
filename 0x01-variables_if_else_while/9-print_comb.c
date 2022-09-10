#include <stdio.h>
/**
 * main - print print single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int p;

	while (p <= 58)
	{
		putchar(p);
		if (p != 57)
		{
		putchar(44);
		putchar(32);

		}
		p++;
	}
	putchar(10);
	return (0);
}
