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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", ans);
	return (0);
	
}
