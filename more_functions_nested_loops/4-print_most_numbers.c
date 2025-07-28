#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4,
 * followed by a new line.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int dg = 0;

	while (dg <= 9)
	{
		if ((dg != 2) && (dg != 4))
		{
			_putchar(dg + '0');
			dg++;
		}
	}
}
