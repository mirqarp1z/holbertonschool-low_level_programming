#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes followed by a newline
 * @n: number of backslashes to print
 */

void print_diagonal(int n)
{
	int spc = 0;
	
	spc = n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while ((n > 0) && (spc > 0))
		{
			_putchar('\\');
			_putchar(' ');
			spc--;
			n--;
		}
		_putchar('\n');
	}
}
