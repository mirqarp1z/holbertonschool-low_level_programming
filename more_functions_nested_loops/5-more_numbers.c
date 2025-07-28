#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * each followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int lines = 1;

	int digit = 0;

	while (lines <= 10)
	{
		while (digit <= 14)
		{
			_putchar(digit + '0');
			digit++;
		}
		lines++;
	}
	_putchar('\n');
}
