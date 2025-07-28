#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int line = 0;
	
	int num;
	
	while (line < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
				_putchar('1');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		line++;
	}
}
