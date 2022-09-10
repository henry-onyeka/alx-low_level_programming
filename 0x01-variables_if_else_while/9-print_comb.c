#include <stdio.h>
/**
 * main - print print single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0 ;

	while (num <= 9)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar(10);
	return (0);
}
