#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*main: print the last digit in random number
*Description: print the last digit in random number
*Return: always 0 (success)
*/
int main(void)
{
	int final;

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	final = n % 10;
if (final > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, final);
}
	else if (final < 6 && final != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, final);
}
else if (final == 0)
{			printf("Last digit of %d is %d and is 0\n", n, final);

}
	return (0);
}
