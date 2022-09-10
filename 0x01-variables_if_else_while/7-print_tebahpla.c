#include <stdio.h>
/**
 * main - oya lets read from z back to a
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha ='a' ; alpha < 'z'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\b');
	return (0);
}
