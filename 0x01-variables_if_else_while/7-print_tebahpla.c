#include <stdio.h>
/**
 * main - oya lets read from z back to a
 * Return: always 0 (success)
 */
int main(void)
{
	int alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\b');
	return (0);
}
