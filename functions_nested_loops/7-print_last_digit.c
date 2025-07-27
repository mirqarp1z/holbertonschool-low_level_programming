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
	if (n < 0)
	{
		n = -n;
	}
	
	ls_d = n % 10;

	_putchar(ls_d + '0');

	return (ls_d);
}
