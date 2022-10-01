#include <stdio.h>
/**
 * main - the main function
 * @thenum: is the num
 * @thestring: is the characters
 * Return: nothing in return
 */
int main(int thenum, char *thestring[])
{
	int t = 0;

	for (t = 0; t < thenum; t++)
	{
		printf("%s\n", thestring[t]);
	}
	return (0);
}
