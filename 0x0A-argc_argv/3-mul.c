#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @mult: strings collector
 * @argc: the number of arguments
 * Return: nothin
 */
int main(int argc, char *mult[])
{
	int a = atoi(mult[1]);
	int b = atoi(mult[2]);
	int ans = a * b;

	if (argc == 3)

	{
	printf("%d multiplied by %d is = %d\n", a, b, ans);
	}
	else
	{
		printf("Error\n");
		return (1);
}
	return (0);
}
