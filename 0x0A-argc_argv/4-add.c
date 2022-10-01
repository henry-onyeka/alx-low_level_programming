#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the num
 * @argv: array of strings
 * Return: returns 0 at success 
 */
int main(int argc, char * argv[])
{
	int i, sumit;

	if (argc > 1)
{

		
		for (i = 0; i < argc; i++)
{
			if (argv[i])

{

				printf("Error\n");
				return (1);
			}
else
{
			sumit += atoi(argv[i]);

}
}
printf("%d", sumit);
return (0);
}
else 
{
	printf("Error");
	return (1);
}
}

