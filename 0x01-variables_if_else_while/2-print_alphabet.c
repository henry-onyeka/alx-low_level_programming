#include <stdio.h>
/**
* main - me just wan do magic here i no send anybody
* Return: always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
{
	putchar("%c ",ch);
	ch++;
}
	putchar("\n");
	return (0);
}
