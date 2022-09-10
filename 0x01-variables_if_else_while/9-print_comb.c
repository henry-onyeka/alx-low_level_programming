#include <stdio.h>
/**
 * main - print print single digit numbers
 * Return : Always 0 (success)
 */
int main(void)
{
	int num;
	for (num = 0 ; num <= 9; num++)
	{
		putchar(num);
		putchar(',\t');
	}
	putchar(10);
	return (0);
}
