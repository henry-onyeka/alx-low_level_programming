#include <stdio.h>
/**
 * main - i wan write d whole alphabet for small letters except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char mumu = 'a';

	while (mumu <= 'z' && mumu  != 'e' && mumu != 'q')
	{
		putchar(mumu);
		mumu++;
}
return (0);
}
