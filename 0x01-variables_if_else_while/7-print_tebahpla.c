#include <stdio.h>
/**
 * main - oya lets read from z back to a
 * Return: always 0 (success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'Z' ; alpha >= 'A'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\b');
	return (0);
}
