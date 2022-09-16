#include "main.h"
/**
 * print_triangle - draw
 * @size: length
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line = 0;
	int spaces;
	int hashes;

	if (size > 0)
	{
		if (size > 0)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes < line + 1; hashes++)
			{
				_putchar('#');
				_putchar('\n');
				line++;
			}
		}
		else
		{
			_putchar('\n');
		}
	}
