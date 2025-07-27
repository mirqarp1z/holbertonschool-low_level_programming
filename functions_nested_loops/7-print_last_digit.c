#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int ls_d;

	ls_d = n % 10;

	if (ls_d < 0)
	{
		ls_d = -ls_d;
	}
	_putchar(ls_d + '0');
	return (ls_d);
}
