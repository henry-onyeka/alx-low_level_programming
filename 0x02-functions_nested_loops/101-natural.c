#include <stdio.h>
/**
 * main -finding and printing out the sum tota of the multiples of five
 * Return: always returns zero to my satifaction
 */
int main(void)
{
	int num = 5, sumOf;

	while (num <= 1024)
	{		num++;
	if (num % 5 == 0)
	{
		sumOf += num;
	}
}
printf("the total sum of the multiples of 5 is: %d", sumOf);
printf("\n");
return (0);
}
