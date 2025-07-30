#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 * @size: size of the triangle
 *
 * If size is 0 or less, prints only a newline.
 */

void print_triangle(int size)
{
	int row, htag;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 1;

		while (row <= size)
		{
			htag = 1;

			while (htag <= size - row)
			{
				_putchar(' ');
				htag++;
			}

			row = 1;

			while (htag <= row)
			{
				_putchar('#');
				htag++;
			}
			_putchar('\n');
			row++;
		}
	}
}
