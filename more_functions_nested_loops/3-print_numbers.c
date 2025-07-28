#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int dg = 0;

	while (dg <= 9)
	{
		_putchar(dg + '0');
	}
	_putchar('\n');
}
