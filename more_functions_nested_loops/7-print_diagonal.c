#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes followed by a newline
 * @n: number of backslashes to print
 */

void print_diagonal(int n)
{
	int spc;
	int line = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line < n)
		{
			spc = 0;

			while (spc < line)
			{
				_putchar(' ');
				spc++;
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
}
