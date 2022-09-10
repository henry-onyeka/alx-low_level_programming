#include <stdio.h>
/**
 * main - print print single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int p = 48;

	while (p <= 58)
	{
		putchar(p);
		if (p < 57)
		{
		putchar(',');
		if (p < 57)
		{
		putchar(' ');
		}
		}
		p++;
	}
	putchar(10);
	return (0);
}
