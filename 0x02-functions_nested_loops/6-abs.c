#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _abs - computes the value of an integer
 * @boy: is an integer
 * main - check the code
 *
 * Return: Always 0.
 *
 *
 */
int _abs(int boy)

{
	if (boy > 0)

	{
		return (boy);
	}
	else if (boy < 0)
	{
		return (-boy);
	}
	else {
		return (boy);
	}
}
