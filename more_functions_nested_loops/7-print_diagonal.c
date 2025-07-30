#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes followed by a newline
 * @n: number of backslashes to print
 */

void print_diagonal(int n)
{
	if ((n == 0) || (n > 0))
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar('\n');
	}
}
