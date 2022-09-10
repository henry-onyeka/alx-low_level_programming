#include <stdio.h>
/**
 * main - oya lets read from z back to a
 * Return: always 0 (success)
 */
int main(void)
{
	int alpha;

	for (alpha = 122 ; alpha >= 96; alpha--)
	{
		putchar(alpha);
	}
	putchar('\b');
	return (0);
}
