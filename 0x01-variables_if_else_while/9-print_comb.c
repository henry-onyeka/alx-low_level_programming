#include <stdio.h>
/**
 * main - print print single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int p = 48;

	while (num <= 58)
	{
		putchar(p);
		putchar(',');
		putchar(' ');
		p++;
	}
	putchar(10);
	return (0);
}
