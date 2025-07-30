#include "main.h"

/**
 * print_square - prints a square of '#' characters followed by a newline
 * @size: size of the square
 */

void print_square(int size)
{
	int row;
	int clm;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 0;

		while (row <= size)
		{
			clm = 0;

			while (clm <= size)
			{
				_putchar('#');
				clm++;
			}
			_putchar('\n');
			row++;
		}
	}
}
